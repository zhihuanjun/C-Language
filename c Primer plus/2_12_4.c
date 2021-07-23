#include<stdio.h>

int jolly();
int deny(); 

int main()
{
	jolly();
	jolly();
	jolly();
	
	deny(); 

	return 0;	 
 } 
 
int jolly()
{
	printf("For he's a jolly good fellow!\n");
	
	return 0;
}
int deny()
{
	printf("Which nobody can deny!\n");
	
	return 0;
}

