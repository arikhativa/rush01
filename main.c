/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:09:03 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/21 12:24:21 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TODO remove
#include <stdio.h>

#define ERROR -1
#define SUCCESS 0
#define BOARD_SIZE 4

// table.c
int		**create_tab(int size);
void	free_tab(int **tab, int size);

// print_remove.c
void	print_outer_board(int **ob);
void	print_board(int **ob, int **board, int size);
void	print_int_arr(int *arr, int size);


// board.c
void	fill_random(int **board); // TODO remove?

// print.c
void	print_board_on_success(int **board, int size);

// outer_board.c
void	parse_outer_board(int **ob, char *input);


int	main(int ac, char **av)
{
	int	**ob;
	int	**board;

	if (ac != 2)
		return ERROR;
	ob = create_tab(BOARD_SIZE);
	if (!ob)
		return (ERROR);
	board = create_tab(BOARD_SIZE);
	if (!board)
	{
		free_tab(ob, BOARD_SIZE);
		return (ERROR);
	}

	parse_outer_board(ob, av[1]);
	
	fill_random(board);

	// print_int_arr(board[1], 4);
	// print_board(ob, board, BOARD_SIZE);

	print_board_on_success(board, BOARD_SIZE);

	free_tab(board, BOARD_SIZE);
	free_tab(ob, BOARD_SIZE);
	return (SUCCESS);
}