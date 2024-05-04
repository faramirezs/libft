/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandroramirez <alejandroramirez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:38:51 by alramire          #+#    #+#             */
/*   Updated: 2024/05/04 13:22:40 by alejandrora      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

/* int main(){
	int c;
	int result;

	c = 'a';
	result = ft_isdigit(c);
	printf("The result is %d\n", result);


	c = '2';
	result = ft_isdigit(c);
	printf("The result is %d\n", result);


	c = '*';
	result = ft_isdigit(c);
	printf("The result is %d\n", result);
	return (0);
} */
