/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_remove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:31:15 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/21 12:12:12 by yrabby           ###   ########.fr       */
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

void	print_board(int **ob, int **board, int size)
{
	int	i = 0;
	// first line
	printf("  ");
	print_int_arr(ob[0], size);
	printf(" \n");
	printf("      \n");

	// mid lines
	while (i < size)
	{
		printf("%d %d%d%d%d %d\n", ob[3][3 - i], board[i][0], board[i][1], board[i][2], board[i][3], ob[1][i]);
		++i;
	}

	// last line
	printf("      \n");
	printf("  %d%d%d%d \n", ob[2][3], ob[2][1], ob[2][2], ob[2][0]);
}