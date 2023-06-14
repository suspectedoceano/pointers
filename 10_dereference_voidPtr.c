#include<stdio.h>

int main()
{
	int		n;
	void	*p;

	n = 42;
	p = &n;
	printf("%d\n", *p);
}
