#include <stdio.h>

int Impar(int x){
   return x % 2; 
}

int main(){
    int a;

    printf("Insert Number: ");
    scanf("%d", &a);

    if (Impar(a) == 0){
        printf("Par\n");
    } else {
        printf("Impar\n");
    }
    
    return 0;
}
