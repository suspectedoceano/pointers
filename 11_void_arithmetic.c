#include <stdio.h>



int	main(int argc, char **argv)
{
	int		n;
	void	*ptr;

	n = 256;
	ptr = &n;

	for (int i = 0; i < sizeof n; ++i)
	{
		printf("%d\n", *(unsigned char *)ptr);
		//Whaaaaat?
		ptr++;
	}
}
