#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define LENGTH(x) sizeof(x)/sizeof(x[0])

int main(int argc, char const* argv[]) {
	char x[][7] = { "你","好","在","你","妈","的","见" };
	char* arr = "在";
	char* ptr = NULL;

	ptr = (char*)bsearch(arr, x, 7, 2, (int (*)(const void*, const void*))strcmp);
	printf("%s\n", arr);
	return 0;
}
