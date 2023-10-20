#include<stdio.h>

int main(){
    int a = 20;
    int b = 10;
    int sub = 0;
    
    sub = a - b;
    
    printf("a value =%d\n",a);
    printf("b value =%d\n",b);
    printf("Sub value =%d\n",sub);
    
    printf("a address =%d\n",&a);
    printf("b address =%d\n",&b);
    printf("Sub address =%d\n",&sub);
    
    return (0);     
}
