#include<stdio.h>
void test ();
void menu ();
void game ();

int main()
{
	typedef unsigned int  u_int;
	test();

	
	return 0;
	
}
void test ()
{
	int input=0;
	do
	{
		menu();
		printf("ÇëÑ¡Ôñ:>");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("ÍË³öÓÎÏ·\n");
				break;
			default:
			printf("fdhd");
			break;	
		}
	} while (input);
	
}
void menu ()
{
	printf("********************************\n");
	printf("******** 1.play   0.exit********\n");
	printf("********************************\n");
}
void game ()
{
	printf("%d");
}
