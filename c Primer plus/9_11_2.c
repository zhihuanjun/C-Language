#include<stdio.h>
char chilne (char ch,int i,int j); 
int main()
{
	int  a1,a2;
	char ch;
	scanf("%c%d%d",&ch,&a1,&a2);
	chilne (ch,a1,a2); 
	return 0;
	
}
char chilne (char ch,int i,int j) //´òÓ¡×Ö·û jÐÐiÁÐ 
{
	int a;
	for(;j>0;j--)
	{
		for(a=i;a>0;a--)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
	return 0;
}
