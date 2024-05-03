/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alramire <alramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:44:15 by alramire          #+#    #+#             */
/*   Updated: 2024/04/29 16:26:42 by alramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	int	i;
	int	j;

	i = 0;
	j = 0;
	tmp = (char *)malloc();
	while (s1[i])
	{
		while (s1[i] && s1[i + j] == set[j])
		{

		}
		i++
	}
}
