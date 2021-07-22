#include<stdio.h>
double larder_of(); 
int main()
{
	double a1,a2;
	scanf("%lf%lf",&a1,&a2);
	larder_of(&a1,&a2);
	printf("a1=%f\na2=%f",a1,a2);
	return 0;
	
}
double larder_of(double *a,double *b)
{
	double min;
	(*a>*b)?(*b=*a):(*a=*b);  //三目运算  要加括号*的优先级高于三目运算符 
	return 0;
}
