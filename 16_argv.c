#include<stdio.h>

//./a.out hello there
/*
int	main(int argc, char **argv)
{
	int	j, k;

	j = 0;
	while (*(argv + j))
	{
		k = 0;
		while ( *(*(argv +j) + k))
		{
			printf("%c", argv[j][k]);
			++k;
		}
		puts("");
		++j;
	}
}
*/

int	main(int ac, char **av)
{
	while (*av != NULL)	
	{
		while (**av != '\0')
			printf("%c", *(*av)++);
		puts("");
		++av;
	}
}
