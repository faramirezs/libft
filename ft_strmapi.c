/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alramire <alramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:53:32 by alramire          #+#    #+#             */
/*   Updated: 2024/05/03 18:45:54 by alramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	int	len;
	char const	*tmp;
	unsigned int	i;

	i = 0;
	len = ft_strlen(s);
	tmp = (char const *)malloc(sizeof(len));
	if (!tmp)
		return(NULL);
	while (s[i])
	{
		tmp[i] = (*f)(i, s[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);

}
