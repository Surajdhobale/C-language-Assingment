#include <stdio.h>
void main()
{
    
    int a = 9, b = 4, c=0;
    double d = 0.0;
    
    c = a+b;
    printf("a+b = %d \n",c);
    
    c = a-b;
    printf("a-b = %d \n",c);
    
    c = a*b;
    printf("a*b = %d \n",c);
    
    d = a/b; // 9/4 => 2.25
    printf("a/b = %lf \n",d);
    
    c = a%b;
    printf("Remainder when a divided by b = %d \n",c);

}
