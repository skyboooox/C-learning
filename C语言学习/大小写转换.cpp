#include<string.h>   //strlen
#include<stdio.h>    //printf
#include<ctype.h>    //tolower

int main(){
	int i;
	char string[] = "THIS IS A STRING";
	printf("%s\n", string);
	for (i = 0; i < strlen(string); i++)
	{
		string[i] = tolower(string[i]);
	}
	printf("%s\n", string);
	printf("\n");
}

