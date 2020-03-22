#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "limits.h"
int main()
{
	//ft_putchar(L'ø');
	char *string = "-99999999999999999999999999";
	printf("%i\n", ft_atoi(string));
	printf("%i\n", atoi(string));
	/*char *src = "llo";
	//strcpy(src,"hello");
	char *dest = "Yello";
	printf("Should llo: %s\n", ft_strnstr(dest,src, 2));
	src = NULL;
	printf("Should segv: %s\n", strnstr(src,dest, 2));*/
}
