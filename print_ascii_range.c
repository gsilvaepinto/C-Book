#include <stdio.h>

int main(){
    int num1, num2;
    int temp;

    do
    {
        printf("Insert two numbers (0 - 255): ");
        scanf("%d %d", &num1, &num2);
    } while ((num1 < 0 || num1 > 255) || (num2 < 0 || num2 > 255));

    if (num2 < num1){
        temp = num1;
        num1 = num2;
        num2 = temp;

    }
    
    for (int i = num1; i <= num2; i++){
        printf("%d - %c\n", i, (char)i);
    }
}
