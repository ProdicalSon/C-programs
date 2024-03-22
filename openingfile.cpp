#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int loop,i;
	int num;
	FILE * fptr;
	
	fptr = fopen("hello.txt","a");
	loop = 5;
	if(fptr == NULL)
	{
		printf("Error");
		exit(1);
	}
}
