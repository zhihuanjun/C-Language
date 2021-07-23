#include<stdio.h>
int br();
int ic(); 
int main()
{
	br();
	printf(",");
	ic();
	printf("\n");
	ic();
	printf(",\n");
	br(); 

	return 0;	 
 } 
 
int br()
{
	printf("Brazil,Russia");
	
	return 0;
}
int ic()
{
	printf("India,china");
	
	return 0;
}

