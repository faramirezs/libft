/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alramire <alramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:38:33 by alramire          #+#    #+#             */
/*   Updated: 2024/04/17 11:39:24 by alramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int c){
    return ((c >= 65 && c <= 90 ) || (c >= 97 && c <= 122));
}
/*
int ft_isalpha(int c){
    if ((c >= 65 && c <= 90 ) || (c >= 97 && c <= 122))
        return 1;
    else
        return 0;
}
*/
/*
int main()
{
    char c;
    char result;

    c = 'a';
    result = ft_isalpha(c);
    printf("The result is %d\n", result);
   

    c = '2';
    result = ft_isalpha(c);
    printf("The result is %d\n", result);


    c = '*';
    result = ft_isalpha(c);
    printf("The result is %d\n", result);
    return 0;
}
*/