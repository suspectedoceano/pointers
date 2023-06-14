#include <stdio.h>
#include <stdlib.h>

#define SIZE 100


//     🤔 size necessary
void	print_elements(int *v, int size)
{
	printf("%zu\n", sizeof v);
	for (int i = 0; i < size; ++i)
		printf("%d\n", v[i]);
}


int	main()
{
	int	v[SIZE];

	for (int i = 0; i < SIZE; ++i)
		v[i] = rand() % 101;
	
	print_elements(v, SIZE);
}
