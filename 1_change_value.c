#include <stdio.h>

void	change_value(int *nb);

int	main()
{
	int	nb;

	nb = 42;
	change_value(&nb);
	printf("%d\n", nb);
}

void    change_value(int *foobar)
{
	*foobar = 1337;
}


