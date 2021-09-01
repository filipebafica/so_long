/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_messages2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:57:08 by fbafica           #+#    #+#             */
/*   Updated: 2021/08/26 14:45:36 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	handle_not_surrounded_error(void)
{
	ft_putendl_fd("Error\nMap is not surrounded by walls.", 2);
	return (-1);
}

int	handle_not_rectangular_error(void)
{
	ft_putendl_fd("Error\nMap is not rectangular.", 2);
	return (-1);
}

int	handle_arguments_error(void)
{
	ft_putendl_fd("Error\nWrong number of arguments.", 2);
	return (-1);
}
