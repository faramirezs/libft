/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alramire <alramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:44:15 by alramire          #+#    #+#             */
/*   Updated: 2024/05/06 17:32:09 by alramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (start == end + 1)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[end]))
		end--;
	trimmed = ft_substr(s1, start, end - start + 1);
	if (!trimmed)
		return (NULL);
	return (trimmed);
}

/* =====version 1 =====
static char const	*ft_start(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	lenset;

	i = 0;
	j = 0;
	lenset = (int)ft_strlen(set);
	while (j < lenset)
	{
		if (s1[0] == set[j])
		{
			j = 0;
			i++;
			while (s1[i] && j < lenset)
			{
				if (s1[i] == set[j])
				{
					j = 0;
					i++;
				}
				else
					j++;
			}
		}
		else
			j++;
	}
	return (&s1[i]);
}

static char const	*ft_end(char const *s1, char const *set)
{
	int	j;
	int	lenset;
	int	lens1;

	j = 0;
	lenset = (int)ft_strlen(set);
	lens1 = (int)ft_strlen(s1);
	while (j < lenset)
	{
		if (s1[lens1 - 1] == set[j])
		{
			j = 0;
			lens1--;
			while (s1[lens1] && j < lenset)
			{
				if (s1[lens1] == set[j])
				{
					j = 0;
					lens1--;
				}
				else
					j++;
			}
		}
		else
			j++;
	}
	return (&s1[lens1]);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*tmp;
	char const	*start_ptr;
	char const	*end_ptr;
	size_t		lentmp;

	start_ptr = ft_start(s1, set);
	end_ptr = ft_end(s1, set);
	lentmp = end_ptr - start_ptr + 1;
	tmp = (char *)malloc(lentmp + 1);
	if (!tmp)
		return (NULL);
	memcpy(tmp, start_ptr, lentmp);
	tmp[lentmp] = '\0';
	return (tmp);
} */
