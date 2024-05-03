/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alramire <alramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:30:52 by alramire          #+#    #+#             */
/*   Updated: 2024/04/24 17:44:22 by alramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char	char_c;
	unsigned int	i;
	unsigned int	found;

	char_c = (char) c;
	i = 0;
	found = 0;
	while (s[i])
	{
		if (s[i] == char_c)
			found = i;
		i++;
	}
	if (found > 0)
		return ((char *) &s[found]);
	if (s[i] == char_c)
		return ((char *) &s[i]);
	return (NULL);



    /* we can use basically the same code as ft_strchr() but not returning
     * the value as soon as we find the character, just setting a variable
     * each time, and returning it at the end of the function
     */
    /* loop over the whole string */
    /* check if current character is equal to the one we have to find */
    /* once we looped over the whole string, check again for the character
     * in case the character we have to find is '\0'
     */
    /* if we didn't find c in the string, return NULL */
}
