#include <stdio.h>
void main()
{
    int a = 0, b = 10;

    printf("Post Increment = %d \n",a++);
    printf("After Post Increment = %d \n",a);
    printf("Pre Increment = %d \n",++a);
    
    printf("Post Decrement = %d \n",b--);
    printf("After Post Decrement = %d \n",b);
    printf("Pre Decrement = %d \n",--b);
}