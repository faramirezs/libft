/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alramire <alramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:35:17 by alramire          #+#    #+#             */
/*   Updated: 2024/04/24 15:11:46 by alramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int ft_isprint(int c){
    return((c >= 32) && (c <= 126));
}

/* int main()
{
    char c;
    char result;

    c = 25;
    result = ft_isprint(c);
    printf("The result is for %d is %d\n", c, result);


    c = '2';
    result = ft_isprint(c);
    printf("The result is for %d is %d\n", c, result);


    c = '*';
    result = ft_isprint(c);
    printf("The result is for %d is %d\n", c, result);
    return 0;
} */
