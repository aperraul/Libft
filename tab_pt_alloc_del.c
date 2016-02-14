/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_pt_alloc_del.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/14 15:18:03 by aperraul          #+#    #+#             */
/*   Updated: 2016/02/14 15:32:56 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_pt	**ft_alloc_tab_pt(t_pt size)
{
	t_pt	**tab;
	int		i;
	i = -1;
	tab = (t_pt **)ft_memalloc(sizeof(t_pt *) * (size.x + 1));
	while (++i < size.y)
		tab[i] = (t_pt *)ft_memalloc(sizeof(t_pt) * (size.x + 1));
	return (tab);
}

t_pt	**ft_free_tab_pt(t_pt **tab)
{
	int		i;

	if (!tab)
		return (NULL);
	i = -1;
	while (tab[++i])
		ft_memdel((void **)&tab[i]);
	ft_memdel((void **)tab);
	return (tab);
}