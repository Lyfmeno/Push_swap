/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 13:10:59 by hlevi             #+#    #+#             */
/*   Updated: 2021/08/10 14:37:05 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"

void	print_change(t_list *alist, t_list *blist)
{
	ft_putstr_fd("alist = ", 0);
	ft_lst_print(alist);
	ft_putstr_fd("blist = ", 0);
	ft_lst_print(blist);
	ft_putstr_fd("\n", 0);
}

int	main(int argc, char **argv)
{
	t_list	*alist;
	t_list	*blist;

	alist = NULL;
	blist = NULL;
	if (argc < 2)
		ft_exit_code("Error\nNo arguments\n", 1);
	parsing_base(&alist, argc, argv);
	check_dup(alist);
	print_change(alist, blist);
	sa(&alist);
	print_change(alist, blist);
	push(&blist, &alist, "pa\n");
	print_change(alist, blist);
	push(&alist, &blist, "pb\n");
	print_change(alist, blist);
	push(&alist, &blist, "pb\n");
	print_change(alist, blist);
	push(&alist, &blist, "pb\n");
	print_change(alist, blist);
	ra(&alist);
	print_change(alist, blist);
	rb(&blist);
	print_change(alist, blist);
	rr(&alist, &blist);
	print_change(alist, blist);
	rrr(&alist, &blist);
	print_change(alist, blist);
	ft_lst_free(alist);
	ft_lst_free(blist);
	return (0);
}
