#include <stdio.h>
int main() {
    int b;
    printf("Enter the number: ");
    scanf("%d", &b);
   
    switch(b){
        case 10:
            printf("The entered number is 10");
            break;
        case 20:
            printf("The entered number is 20");
            break;
        case 30:
            printf("The entered number is 30");
            break;
        case 40:
            printf("The entered number is 40");
            break;
        default:
            printf("The entered number is not in range of 10 20 30 40");
    }
    return 0;
}