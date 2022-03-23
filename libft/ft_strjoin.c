/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:21:33 by mjalloul          #+#    #+#             */
/*   Updated: 2021/11/06 17:00:01 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	i;
	int		j;

	j = 0;
	if (s1 != NULL && s2 != NULL )
		i = (ft_strlen(s1)) + (ft_strlen(s2));
	else
		return (0);
	p = (char *)malloc(i + 1);
	if (!p)
		return (0);
	while (s1[j])
		*p++ = s1[j++];
	j = 0;
	while (s2[j])
		*p++ = s2[j++];
	*p = '\0';
	free((char *)s1);
	return (p - i);
}