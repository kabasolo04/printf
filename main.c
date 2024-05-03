/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabasolo <kabasolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:58:50 by kabasolo          #+#    #+#             */
/*   Updated: 2024/05/03 13:36:44 by kabasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main (void)
{
    ft_printf("Deveria no printear nada: [%]\n");
    char charVar = 'A';
    printf("Original printf %%c: [%c]\n", charVar);
    ft_printf("Tu ft_printf %%c:    [%c]\n", charVar);

    ft_printf("\n");
    // %s - Cadena de caracteres
    const char* stringVar = "Hello, World!";
    printf("Original printf %%s: [%s]\n", stringVar);
    ft_printf("Tu ft_printf %%s:    [%s]\n", stringVar);

    ft_printf("\n");
    // %p - Puntero NULL
    int* ptrVar = NULL;
    printf("Original printf NULL %%p: [%p]\n", (void*)ptrVar);
    ft_printf("Tu ft_printf NULL %%p:    [%p]\n", (void*)ptrVar);

    ft_printf("\n");
    // %p - Puntero
    int i = 783788948;
    printf("Original printf %%p: [%p]\n", &i);
    ft_printf("Tu ft_printf %%p:    [%p]\n", &i);

    ft_printf("\n");
    // %d, %i - Enteros con signo
    int intVar = 42;
    int printfResult, ftPrintfResult;

    printfResult = printf("Original printf %%d and %%i: [%d] [%i]\n", intVar, intVar);
    ftPrintfResult = ft_printf("Tu ft_printf %%d and %%i:    [%d] [%i]\n", intVar, intVar);

    ft_printf("\n");
    printf("Original printf returned: %d\n", printfResult);
    printf("Tu ft_printf returned:    %d\n", ftPrintfResult);

    ft_printf("\n");
    // %u - Entero sin signo
    unsigned int uintMax = UINT_MAX;
    printf("Original printf %%u (max): [%u]\n", uintMax);
    ft_printf("Tu ft_printf %%u (max):    [%u]\n", uintMax);

    ft_printf("\n");
    // %x, %X - Hexadecimal
    unsigned int hexMax = UINT_MAX;
    printf("Original printf %%x and %%X (max): [%x] [%X]\n", hexMax, hexMax);
    ft_printf("Tu ft_printf %%x and %%X (max):    [%x] [%X]\n", hexMax, hexMax);

    ft_printf("\n");
    // %% - Carácter de porcentaje
    printf("Original printf %%%%: [%%]\n");
    ft_printf("Tu ft_printf %%%%:    [%%]\n");

    ft_printf("\n");
    return (0);
}
