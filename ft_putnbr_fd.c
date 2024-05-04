/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandroramirez <alejandroramirez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:50:46 by alejandrora       #+#    #+#             */
/*   Updated: 2024/05/04 20:59:40 by alejandrora      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		len;
	char	*tmp;
	int		num;

	len = 0;
	num = n;
	while (num > 10)
	{
		num = num / 10;
		len++;
	}
	tmp = (char *)malloc(len + 1);
	tmp = ft_itoa(n);
	ft_putstr_fd(tmp, fd);
}
