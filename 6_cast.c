#include<stdio.h>

int	main()
{
	int	nb;
	int	*ptr;

	nb = 0b100000000;
	ptr = &nb;
	
	printf("%d %d\n", 
			*ptr,
			*(short *)ptr);	
}




