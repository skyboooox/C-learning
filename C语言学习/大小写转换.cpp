#include "祖传头文件.h"

int main(int argc, char const* argv[]){
	int i;
	char string[] = "THIS IS A STRING";
	printf("%s\n", string);
	for (i = 0; i < strlen(string); i++){
		string[i] = tolower(string[i]);
	}
	printf("%s\n", string);
	printf("\n");
}
