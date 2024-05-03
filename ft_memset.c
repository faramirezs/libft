/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alramire <alramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:31:42 by alramire          #+#    #+#             */
/*   Updated: 2024/04/26 16:50:34 by alramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (i < n)
		ptr[i++] = c;
	return (s);
}

/* int main(void){
    char str[50] = "This is a test string";
    printf("Before memset: %s\n", str);
    ft_memset(str, 'b', 5);
    printf("The new string is %s", str);
    return 0;
} */
