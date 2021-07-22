#include<stdio.h>
int aiu(double *a1,double *a2,double *a3);
int main()
{
	double x,y,z;
	scanf("%lf%lf%lf",&x,&y,&z);
	aiu(&x,&y,&z);
	printf("x=%f\ny=%f\nz=%f\n",x,y,z);
	return 0;	
} 
int aiu(double *a1,double *a2,double *a3)
{
	double p;
    if(*a1>*a2)
    {
    	p=*a1;
    	*a1=*a2;
    	*a2=p;
	}
	if(*a1>*a3)
    {
    	p=*a1;
    	*a1=*a3;
    	*a3=p;
	}
	if(*a2>*a3)
    {
    	p=*a2;
    	*a2=*a3;
    	*a3=p;
	}
	return 0;
}
