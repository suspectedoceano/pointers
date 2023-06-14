#include <stdio.h>
#include <stdlib.h>


int	main()
{
	int	v[100];

	for (int i = 0; i < 100; ++i)
		v[i] = rand() % 101;

	printf("%d\n", v[42]);
	printf("%d\n", *(v + 42));
	printf("%d\n", 42[v]);
	printf("%d\n", *(42 + v));
	
	// WHAT? Murky area
	printf("%c\n", "hello"[1]);
	printf("%c\n", *("hello" + 1));
	printf("%c\n", 1["hello"]);
}
