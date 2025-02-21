#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

#define NUM 49
#define MAX_LINE 7
#define MIN_VALUE 6

void iniciateArray(int var[]){
    int i;

    for (i = 0; i < NUM; i++){
        var[i] = 0;
    }
}

int amountNumber() {
    int num;

    do {
        printf("How many numbers do you want (6 - 8) (0 - exit): ");
        scanf("%d", &num);
    } while (!(num >= MIN_VALUE && num <= 8) && num != 0);
    return num;
}

void generateRandom (int *v, int n){
    int indice;

    for (int i = 0; i < n; i++){
        do
        {
            indice = rand() % NUM;
        } while (v[indice] == 1);
        
        v[indice] = 1;
    }
}

void PrintNumbers(int res[]){
    int i;

    for (i = 0; i < NUM; i++){
        if (res[i] == 0){
            printf(" %2d", i + 1);
        } else {
            printf(" XX");
        }
        if ((i + 1) % MAX_LINE == 0) putchar('\n');
    }
    putchar('\n');
}

int main(){
    int num;
    int array[NUM];

    srand(time(0));

    while (1){
        iniciateArray(array);
        num = amountNumber();
        if (num == 0) break;
        generateRandom(array, num);
        PrintNumbers(array);
    }
}
