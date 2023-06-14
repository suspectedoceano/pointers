#include<stdio.h>



void	fake_main(char *av[])
{
	while (*av)
		printf("%s\n", *av++);
}


int main()
{
	char	*av[] = {"./prog", "1", "2", "3", NULL};

	
	fake_main(av);
}
