/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandroramirez <alejandroramirez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:40:48 by alramire          #+#    #+#             */
/*   Updated: 2024/05/03 16:25:59 by alejandrora      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr_dest;
	char	*ptr_src;

	ptr_dest = (char*) dest;
	ptr_src = (char*) src;
	i = 0;
	if (!dest || !src)
		return (NULL);
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);

}

/* int main(void){
    char dest[50] = "This is a dest string";
    char src[50] = "srcsrcsrcsrc";
    printf("Before ft_memcpy: %s\n", dest);
    ft_memcpy(dest, src, 5);
    printf("The new string is %s", dest);
    return 0;
} */
