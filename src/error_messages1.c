/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_messages.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:57:08 by fbafica           #+#    #+#             */
/*   Updated: 2021/08/25 18:40:44 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	handle_bad_file_error(void)
{
	ft_putendl_fd("Error\nBad file.", 2);
	return (-1);
}

int	handle_extension_error(void)
{
	ft_putendl_fd("Error\nBad extension.", 2);
	return (-1);
}

int	handle_bad_characters_error(void)
{
	ft_putendl_fd("Error\nBad characters.", 2);
	return (-1);
}

int	handle_missing_characters_error(void)
{
	ft_putendl_fd("Error\nMissing characters.", 2);
	return (-1);
}

int	handle_multiple_players_error(void)
{
	ft_putendl_fd("Error\nMultiple players.", 2);
	return (-1);
}
