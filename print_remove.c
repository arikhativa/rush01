/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_remove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:31:15 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/21 11:40:06 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_int_arr(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d", arr[i]);
		++i;
	}
}

void	print_outer_board(int **ob)
{
	// first line
	printf(" ");
	print_int_arr(ob[0], 4);
	printf(" \n");

	// mid lines
	printf("%d    %d\n", ob[3][3], ob[1][0]);
	printf("%d    %d\n", ob[3][2], ob[1][1]);
	printf("%d    %d\n", ob[3][1], ob[1][2]);
	printf("%d    %d\n", ob[3][0], ob[1][3]);

	// last line
	printf(" %d%d%d%d \n", ob[2][3], ob[2][1], ob[2][2], ob[2][0]);
}
