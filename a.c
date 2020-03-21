#include "libft.h"
#include <stdio.h>
#include <string.h>
int main()
{
	char *src = NULL;
	//strcpy(src,"hello");
	char *dest = malloc(sizeof(char) *6);
	printf("Should be he: %s\n", (char*)(ft_memmove(dest,src, 2)));
}
