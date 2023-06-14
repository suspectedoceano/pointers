#include <stdio.h>

void	swap(int *n, int *n1)
{
	int	tmp;

	tmp = *n;
	*n = *n1;
	*n1 = tmp;
}

int	main()
{
	int	a;
	int	b;

	a = 42;
	b = 1337;
	printf("a->%d\tb->%d\n", a, b);
	swap(&a, &b);
	printf("a->%d\tb->%d\n", a, b);
}
