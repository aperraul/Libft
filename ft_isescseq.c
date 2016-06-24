/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isescseq.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/24 11:40:41 by aperraul          #+#    #+#             */
/*   Updated: 2016/06/24 11:58:58 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isescseq(int c)
{
	if (c == '\a' || c == '\b' || c == '\f' || c == '\n' || c == '\r' ||
	c == '\t' || c == '\v')
		return (1);
	return (0);
}
