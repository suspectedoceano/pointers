#include <stdio.h>

int	main()
{
	short	c;
	short	*pc;

	c = 'a';
	pc = &c;

	printf("%p\n%p\n%p\n%p\n", 
			pc,
			pc + 1,
			pc + 2,
			pc + 3);
}
