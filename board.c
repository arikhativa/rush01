/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:55:06 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/21 12:21:10 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// ft_putchar.c
void	ft_putchar(char c);

void	fill_random(int **board)
{
	int i = 0;
	int j;

	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			board[i][j] = 0;
			++j;
		}
		++i;
	}
}
