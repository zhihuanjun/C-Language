#include<stdio.h>
double dosu(); 
int main()
{
	double a1,a2;
	scanf("%lf%lf",&a1,&a2);
	printf("dosu(%f,%f)=%f",a1,a2,dosu(a1,a2));
	return 0;
	
}
double dosu(double a,double b)//����ƽ���������ǵ�����ƽ��ֵ�ĵ�����������ѧ�任��Ҳ����д�����ݸ��������䵹���͡�
                              //���磬2��5�ĵ���ƽ����Ϊ2�u(1/2+1/5)=2/0.7=20�u7
{
	double c;
	
	c=1/(((1/a)+(1/b))/2);
	return c;
}
