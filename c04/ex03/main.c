#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	int	a;
	char jspu[] = " +--++2367ab12";
	a = ft_atoi(jspu);
	printf("%d\n", a);
	return (0);
}