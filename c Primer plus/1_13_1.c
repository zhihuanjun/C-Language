#include <stdio.h>
int main() 
{
    double inch, cm;
    
    printf("������Ӣ��: ");
    scanf("%lf", &inch);
    cm = inch * 2.54;
    printf("%fcm\n",cm);
    
    return 0;
}
