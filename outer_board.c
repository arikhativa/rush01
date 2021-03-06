/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outer_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:13:52 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/21 11:58:57 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*fill_line(int *line, char *input)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		line[i] = *input - '0';
		input += 2;
		++i;
	}
	return (input);
}

void	parse_outer_board(int **ob, char *input)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		input = fill_line(ob[i], input);
		++i;
	}
}
