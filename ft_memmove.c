/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alramire <alramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:00:13 by alramire          #+#    #+#             */
/*   Updated: 2024/04/24 14:01:40 by alramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr_dest;
	char	*ptr_src;

	i = 0;
	ptr_dest = (char *) dest;
	ptr_src = (char *) src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
		while (n-- > 0)
			ptr_dest[n] = ptr_src[n];
	else
	{
		while (i < n)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    printf("Before memmove: %s\n", str);

    // Move the substring "World" two places to the right
    memmove(&str[7], &str[9], 6);
    printf("After memmove: %s\n", str);

	char str2[] = "Hello, World!";
    printf("Before memmove: %s\n", str2);

    // Move the substring "World" two places to the right
    ft_memmove(&str2[7], &str2[9], 6);
    printf("After memmove: %s\n", str2);

    return 0;
} */
