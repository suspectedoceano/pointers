#include<stdio.h>
#include <unistd.h>
#include <unistd.h>

int	foo()
{
	return 42;
}

int	main()
{
	int	nb;

	nb = 13;
	printf("%p  %p\n", foo, &nb);
	sleep(100);
}



