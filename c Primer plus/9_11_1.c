#include<stdio.h>
double min(); 
int main()
{
	double a1,a2;
	scanf("%lf%lf",&a1,&a2);
	printf("min(%f,%f)=%f",a1,a2,min(a1,a2));
	return 0;
	
}
double min(double a,double b)
{
	double min;
	min=(a>b)?b:a;  //ÈıÄ¿ÔËËã 
	return min;
}
