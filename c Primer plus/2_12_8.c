#include<stdio.h>

int one_three();
int two();

int main()
{
	printf("starting now:\n");
	one_three();
	printf("done!\n");
	
	return 0;
}
int one_three()
{
	printf("one\n");
	two();
	printf("three\n");
	
	return 0;
}
int two()
{
	printf("two\n");
	
	return 0;
}
