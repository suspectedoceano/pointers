#include <stdio.h>

// Function to print different data types using void pointers
void printData(void *data, char dataType)
{
    if (dataType == 'i') 
        printf("Integer: %d\n", *((int*)data));
    else if (dataType == 'f') 
        printf("Float: %E\n", *((float*)data));
    else if (dataType == 'c') 
        printf("Character: %c\n", *((char*)data));
    else 
        printf("Unknown data type.\n");
}

int main()
{
    int intValue = 42;

    // Print different data types using void pointers
    printData(&intValue, 'i');
    printData(&intValue, 'f');
    printData(&intValue, 'c');
}


