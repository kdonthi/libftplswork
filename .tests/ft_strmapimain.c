
#include <stdio.h>
#include "libft.h"
#include <unistd.h>
#include <string.h>
char ft_putchar(unsigned int a, char c)
{
	char b = ' ';
	char y = a + '0';
	//*c += 1;
	write(1, &y, 1);
	write(1, &b, 1);
	printf("Index: %i, Character: %c\n", a, c);
	return (a + c);
}
int main ()
{
	char string[] = "Hello World!";
	char (*f)(unsigned int, char);

	f = &ft_putchar;
	printf("String before modification: %s\n", string);
	//ft_strmapi(string, f);
	printf("String after modification: %s\n", ft_strmapi(string, f));
	return (0);

}
