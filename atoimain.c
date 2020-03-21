#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
#include <limits.h>
int main()
{
	char *string1 = "367";
	printf("This is atoi: %i, this is ft_atoi: %i\n", atoi(string1), ft_atoi(string1));

	char *string2 = "02934809";
	printf("This is atoi: %i, this is ft_atoi: %i\n", atoi(string2), ft_atoi(string2));

	char *string3 = "Hello World!";
	printf("This is atoi: %i, this is ft_atoi: %i\n", atoi(string3), ft_atoi(string3));

	char *string4 = "9999999999999";
	printf("This is atoi: %i, this is ft_atoi: %i\n", atoi(string4), ft_atoi(string4));

	char *string5 = "-912817289347198234";
	printf("This is atoi: %i, this is ft_atoi: %i\n", atoi(string5), ft_atoi(string5));

	char *string6 = "99999999999999999999999999";
	printf("This is atoi: %i, this is ft_atoi: %i\n", atoi(string6), ft_atoi(string6));

	printf("This is ft_itoa for -1234: %s\n", ft_itoa(-1234));
}
