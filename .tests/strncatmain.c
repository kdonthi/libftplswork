#include "libft.h"
#include <stdio.h>
#include <string.h>
int main()
{
	char dest[30] = "Hello ";
	char src[30] = "Kaushik";

	printf("Size of dest: %lu\nSize of src: %lu\n", strlen(dest), strlen(src));
	ft_strncat(dest, src, 6);
	printf("Dest: %s, lastchar: %i", dest, dest[strlen(dest)+ strlen(src)]);
}

