/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alramire <alramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:00:09 by alramire          #+#    #+#             */
/*   Updated: 2024/05/01 15:40:24 by alramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa(int n)
{
	int i;
	char	*s;
	int sign;
	int digits;

	i = 0;
	sign = 0;
	if (n < 0)
	{
		n = n * -1;
		sign = 1;
	}
	while (n / 10 < 0)
	{
		digits = n / 10;
		i++;
	}
	if (sign == 1)
		s = (char *) malloc(sizeof(char)*i + 2);
	else
		s = (char *) malloc(sizeof(char)*i + 1);
	while (i > 0)
	{
		s[i] = (n % 10 - '0');
		i--;
	}
}
