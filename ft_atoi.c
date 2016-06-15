/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 19:21:31 by aperraul          #+#    #+#             */
/*   Updated: 2016/06/15 11:45:26 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		result;
	int		i;
	int		negative;

	i = 0;
	negative = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\t' || str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-')
	{
		negative = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result = result + str[i] - '0';
		i++;
	}
	return (result * negative);
}

double		ft_atoid(const char *str)
{
	double	result;
	int		i;
	char	*a;
	char	*b;
	int		k;

	i = -1;
	k = 0;
	result = 0;
	while (str[++i] != '.')
		a[i] = str[i];
	result += ft_atoi(a);
	i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		b[k] = str[i];
		k++;
		i++;
	}
	k = ft_strlen(b) -1;
	result += (ft_atoi(b) / (10 * k));
	return (result);
}
