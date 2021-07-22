#include<stdio.h>
double dosu(); 
int main()
{
	double a1,a2;
	scanf("%lf%lf",&a1,&a2);
	printf("dosu(%f,%f)=%f",a1,a2,dosu(a1,a2));
	return 0;
	
}
double dosu(double a,double b)//调和平均数，就是倒数和平均值的倒数，经简单数学变换，也可以写成数据个数除以其倒数和。
                              //例如，2和5的调和平均数为2╱(1/2+1/5)=2/0.7=20╱7
{
	double c;
	
	c=1/(((1/a)+(1/b))/2);
	return c;
}
