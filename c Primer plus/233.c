#include <stdio.h>
#include "test_max.h"

int main(void)
{
    /* p �Ǻ���ָ�� */
    int (* p)(int, int) = & max; // &����ʡ��
    int a, b, c, d;
    static int v=-8 ;
   
      printf("%d",v);
       a(v);
       printf("%d",v);
    printf("��������������:");
    scanf("%d %d %d", & a, & b, & c);
 
    /* ��ֱ�ӵ��ú����ȼۣ�d = max(max(a, b), c) */
    d = p(p(a, b), c); 
 
    printf("����������: %d\n", d);
 
    return 0;
}
