/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandroramirez <alejandroramirez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:02:44 by alramire          #+#    #+#             */
/*   Updated: 2024/05/05 11:25:52 by alejandrora      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	if(!dst || !src )
		return(NULL);
	len = ft_strlen(src);
	if(dstsize == 0)
		return (len);
	if (dstsize <= len)
	{
		if (len + 1 < dstsize)
			ft_memcpy(dst, src, len + 1);
		else if (dstsize != 0)
			ft_memcpy(dst, src, dstsize - 1);
	}
	dst[len] = '\0';
	return (len);
}
