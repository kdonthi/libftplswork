#include "libft.h"
#include <stdio.h>

int main()
{
	printf("a, b, \\0\n");
	ft_putchar('a');
	ft_putchar('\n');
	ft_putchar('b');
	ft_putchar('\n');
	ft_putchar('\0');
	ft_putchar('\n');
	printf("Printing: Hello, World!\n");
	ft_putstr("Hello, World!\n");
	printf("Printing: YO maomama d \n");
	ft_putstr("YO maomama d \n");
	printf("Printing:   \n");
	ft_putstr("  \n");
}
