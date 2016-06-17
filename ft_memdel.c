/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:47:48 by aperraul          #+#    #+#             */
/*   Updated: 2016/06/17 10:44:58 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdel(void **ap)
{
	if (ap != NULL)
	{
		free(*ap);
		*ap = NULL;
	}
}

void	ft_memdel2(void ***ap)
{
	int		i;

	if (ap != NULL)
	{
		i = -1;
		while ((*ap)[i])
			free(*ap[i]);
		free(**ap);
		ap = NULL;
	}
}
