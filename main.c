/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:09:03 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/21 11:42:22 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TODO remove
#include <stdio.h>

#define ERROR -1
#define SUCCESS 0
#define BOARD_SIZE 4

// board.c
int		**create_outer_board(int size);
void	parse_outer_board(int **ob, char *input);
void	free_outer_board(int **ob, int size);

// print_remove.c
void	print_outer_board(int **ob);


int	main(int ac, char **av)
{
	int	**ob;

	if (ac != 2)
		return ERROR;
	ob = create_outer_board(BOARD_SIZE);
	parse_outer_board(ob, av[1]);

	print_outer_board(ob);

	free_outer_board(ob, BOARD_SIZE);
	return (SUCCESS);
}