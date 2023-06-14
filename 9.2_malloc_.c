#include <stdio.h>
#include <stdlib.h>

//Program to show HEAP vs STACK memory

void    bar()
{
    int    nb;

    nb = 1337;
}

int    *foo()
{
    int    *pn;

    pn = malloc(sizeof(int));
    *pn = 42;
    return pn;
}

int    main()
{
    int    *pn;

    pn = foo();
    printf("%d\n", *pn);
    bar();
    printf("%d\n", *pn);
}
