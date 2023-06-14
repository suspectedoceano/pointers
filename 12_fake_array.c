#include <stdio.h>
#include <stdlib.h>

int	main()
{
	//Real array
	int	arr[10];


//	In the stack ✅
	printf("\n\n\t\tReal array address->%p\n", arr);
//	I cannot increase an array identifier ✅	
//	++arr;
//	sizeof the total array 🚨
//	printf("\t\tSizeof real array %zu\n", sizeof(arr));
//	With & 🚨
	printf("\t\tReal Array with the & %p\n"
			"\t\t\tIf i simply use the name of the array"
			"\n\t\t\tI get a \"Pointer of type\""
			"\n\t\t\tIf i use & i get \"pointer to array of type\"", &arr);

	puts("\n\n\n");


	//Fake array
	int	* const fake_arr = alloca(10 * sizeof(int));

//	Both live in the stack ✅
	printf("\t\tFake array address->%p\n", fake_arr);
//	I cannot increase a const value ✅
//	++fake_arr;
//	sizeof only the pointer 🚨
//	printf("\t\tSizeof fake array %zu\n", sizeof(fake_arr));
//	With the & operator 🚨
	printf("\t\tFake Array with the & %p\n", &fake_arr);
//
//	I can assing values using [ ] indexing ✅
//	fake_arr[3] = 42;
//	printf("%d\n", fake_arr[3]);

	puts("\n\n\n");
}
