/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 12:20:54 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/21 12:30:02 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_line(int *line, int size)
{
	int	i;

	i = 0;
	ft_putchar(line[i] + '0');
	++i;
	while (i < size)
	{
		ft_putchar(' ');
		ft_putchar(line[i] + '0');
		++i;
	}
	ft_putchar('\n');
}

void	print_board_on_success(int **board, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		print_line(board[i], size);
		++i;
	}
}

// TODO print on error