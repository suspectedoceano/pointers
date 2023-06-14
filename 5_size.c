#include <stdio.h>


typedef struct	s_big
{
	int	v[1000000];
}				t_big;


int	main()
{
	char	c;
	short	sh;
	int		i;
	double	d;
	t_big	big;

	printf("%zu ptr char\n"
			"%zu ptr short\n"
			"%zu ptr int\n"
			"%zu ptr double\n"
			"%zu ptr big struct\n",
			sizeof(&c),
			sizeof(&sh),
			sizeof(&i),
			sizeof(&d),
			sizeof(&big));

}
