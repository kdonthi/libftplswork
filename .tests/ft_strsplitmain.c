/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplitmain.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 14:38:25 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/06 19:31:19 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int main()
{
    int i;

    char **array1 = ft_strsplit("*hello*fellow***students*", '*');
    printf("Should be hello, fellow, students, 0:\n");
    for (i = 0; i < 4; i++)
        printf("%s\n", array1[i]);
    char **array2 = ft_strsplit("$I", '*');
    printf("Should be $I, 0:\n");
    for (i = 0; i < 2; i++)
        printf("%s\n", array2[i]);
    char **array3 = ft_strsplit("$I$am$$coding$$d$", '$');
    printf("Should be I, am, coding, d, 0\n");
    for (i = 0; i < 5; i++)
        printf("%s\n", array3[i]);
    char **array4 = ft_strsplit("boss$man/\\yowhatsup", '\\');
    printf("Should be boss$man/, yowhatsup, 0:\n");
    for (i = 0; i < 3; i++)
        printf("%s\n", array4[i]);
    char **array5 = ft_strsplit("boss$man/\\yowhatsup", '$');
    printf("Should be boss, man/\\yowhatsup, 0:\n");
    for (i = 0; i < 3; i++)
        printf("%s\n", array5[i]);
    char **array6 = ft_strsplit("boss$man/\\yowhatsup", '?');
    printf("Should be boss$man/\\yowhatsup, 0:\n");
    for (i = 0; i < 2; i++)
        printf("%s\n", array6[i]);
}   
