/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alramire <alramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:35:16 by alramire          #+#    #+#             */
/*   Updated: 2024/04/29 13:37:07 by alramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{

	char *s1, *s2, *result;

    // Test with two non-empty strings
    s1 = "Hello, ";
    s2 = "World!";
    result = ft_strjoin(s1, s2);
    printf("Test 1 result: %s\n", result);
    free(result); // Remember to free the memory

    // Test with an empty string and a non-empty string
    s1 = "";
    s2 = "World!";
    result = ft_strjoin(s1, s2);
    printf("Test 2 result: %s\n", result);
    free(result); // Remember to free the memory

    // Test with two empty strings
    s1 = "";
    s2 = "";
    result = ft_strjoin(s1, s2);
    printf("Test 3 result: %s\n", result);
    free(result); // Remember to free the memory

    return 0;




/*
    // Test Case 1: Convert a basic positive number
    char *str1 = "42";
    if (ft_atoi(str1) == 42) {
        printf("\033[0;32m[PASS]\033[0m Correct conversion for '42'\n");
    } else {
        printf("\033[0;31m[FAIL]\033[0m Expected 42, got %d\n", ft_atoi(str1));
    }

    // Test Case 2: Convert a basic negative number
    char *str2 = "-42";
    if (ft_atoi(str2) == -42) {
        printf("\033[0;32m[PASS]\033[0m Correct conversion for '-42'\n");
    } else {
        printf("\033[0;31m[FAIL]\033[0m Expected -42, got %d\n", ft_atoi(str2));
    }

    // Test Case 3: Convert a string with leading spaces
    char *str3 = "   123";
    if (ft_atoi(str3) == 123) {
        printf("\033[0;32m[PASS]\033[0m Correct conversion for '   123'\n");
    } else {
        printf("\033[0;31m[FAIL]\033[0m Expected 123, got %d\n", ft_atoi(str3));
    }

    // Test Case 4: Convert a string with plus sign
    char *str4 = "+456";
    if (ft_atoi(str4) == 456) {
        printf("\033[0;32m[PASS]\033[0m Correct conversion for '+456'\n");
    } else {
        printf("\033[0;31m[FAIL]\033[0m Expected 456, got %d\n", ft_atoi(str4));
    }

    // Test Case 5: Convert a string with non-numeric characters at the end
    char *str5 = "789abc";
    if (ft_atoi(str5) == 789) {
        printf("\033[0;32m[PASS]\033[0m Correct conversion for '789abc'\n");
    } else {
        printf("\033[0;31m[FAIL]\033[0m Expected 789, got %d\n", ft_atoi(str5));
    }

    // Test Case 6: Convert a string that does not start with a number
    char *str6 = "abc123";
    if (ft_atoi(str6) == 0) {
        printf("\033[0;32m[PASS]\033[0m Correct conversion for 'abc123' (expected 0)\n");
    } else {
        printf("\033[0;31m[FAIL]\033[0m Expected 0, got %d\n", ft_atoi(str6));
    }

    // Add more test cases as needed...

    printf("\n\n\n"); // 3 blank lines at the end
 */

/*     char c;
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

	char dest[10];

    printf("Return value: %zu\n", ft_strlcpy(dest, "Hello", sizeof(dest)));
    printf("Destination: %s\n", dest);

    printf("Return value: %zu\n", ft_strlcpy(dest, "Hello, world!", sizeof(dest)));
    printf("Destination: %s\n", dest);

    return 0; */

}
