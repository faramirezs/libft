/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandroramirez <alejandroramirez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:41:39 by alramire          #+#    #+#             */
/*   Updated: 2024/05/03 16:19:06 by alejandrora      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;
	size_t	len_s;

	i = 0;
	len_s	= ft_strlen(s);
	tmp = (char *)malloc(len + 1);
	if (!tmp || !s)
		return (NULL);
	if (start > len_s)
		return (NULL);
	while (i < len && i < len_s - start && len_s > start)
	{
		tmp[i] = s[start + i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
