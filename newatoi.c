#include <stdio.h>
#include <stdlib.h>

int poweroften(int power)
{
	int i;
	int counter;

	i = 1;
	counter = -1;
	while (++counter < power)
		i *= 10;
	return (i);
}

int getnumber(const char *string, int index, int neg)
{
	int number;
	int digitfromend;

	number = 0;
	digitfromend = 0;
	while (string[index] >= '0' && string[index] <= '9')
		number += (neg * (poweroften(digitfromend++) * (string[index--] - '0')));
	return (number);
}

int ft_atoi(const char *str)
{
	int i;
	int neg;
	int counter;

	i = 0;
	counter = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\f' || str[i] == '\r'
	|| str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		neg = -1;
	else
		neg = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		counter++;
		i++;
	}
	if (counter > 0)
		return(getnumber(str, i - 1, neg));
	else
		return (0);
}

int main()
{
	printf("%i\n", ft_atoi("365"));
	printf("%i\n", ft_atoi("20394809"));
	printf("%i, %i\n", ft_atoi("99999999999999999999999999"), atoi("99999999999999999999999999"));
	printf("%ll", LONG_MIN)
}

