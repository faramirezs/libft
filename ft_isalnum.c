/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alramire <alramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:38:23 by alramire          #+#    #+#             */
/*   Updated: 2024/04/17 13:31:44 by alramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum (int c){
    return(ft_isalpha(c) || ft_isdigit(c));
}

/* int main()
{
    char c;
    char result;

    c = 'a';
    result = ft_isalnum(c);
    printf("The result is for %d is %d\n", c, result);
   

    c = '2';
    result = ft_isalnum(c);
    printf("The result is for %d is %d\n", c, result);


    c = '*';
    result = ft_isalnum(c);
    printf("The result is for %d is %d\n", c, result);
    return 0;
} */