#include<stdio.h>
#define years_day 365  //宏定义 一年365天 
int main()
{
	int a;
	
	printf("请输入你的年龄：");
	
	scanf("%d",&a);
	
	printf("您一共生存了%d天。",a*year_day);
	
	return 0;
}
