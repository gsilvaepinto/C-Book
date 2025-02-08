#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void toLowerCase(char *str);
void impossible();
void hard();
void medium();
void easy();

int main(){
    srand(time(0));
    int random;
    int counter = 0;
    char level[20];
    int num;

    printf("Level (Impossible - Hard - Medium - Easy): ");
    scanf("%19s", level);

    toLowerCase(level);

    if (strcmp(level, "impossible") == 0){
        impossible();
    } else if (strcmp (level, "hard") == 0){
        hard();
    } else if (strcmp(level, "medium") == 0){
        medium();
    } else if (strcmp(level, "easy") == 0){
        easy();
    }

    return 0;
}

void impossible(){
    int num;
    int counter = 0;
    int random = rand() % 1001;
    do
    {
        printf("Insert Number (0 - 1000): ");
        if (scanf("%d", &num) != 1){
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }
        
        counter++;
        if (num < random){
            printf("Secret Number is Higher\n");
        } else if (num > random){
            printf("Secret Number is Lower\n");
        } else {
            break;
        }
    }   while (num != random);  
    printf("Game Over. It took you %d tries.\n", counter); 
}

void hard(){
    int num;
    int counter = 0;
    int random = rand() % 501;
    do
    {
        printf("Insert Number (0 - 500): ");
        if (scanf("%d", &num) != 1){
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }
        counter++;
        if (num < random){
            printf("Secret Number is Higher\n");
        } else if (num > random){
            printf("Secret Number is Lower\n");
        } else {
            break;
        }
    }   while (num != random);  
        printf("Game Over. It took you %d tries.\n", counter); 
}

void medium(){
    int num;
    int counter = 0;
    int random = rand() % 51;
    do
    {
        printf("Insert Number (0 - 50): ");
        if (scanf("%d", &num) != 1){
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }
        counter++;
        if (num < random){
            printf("Secret Number is Higher\n");
        } else if (num > random){
            printf("Secret Number is Lower\n");
        } else {
            break;
        }
    }   while (num != random);  
        printf("Game Over. It took you %d tries.\n", counter); 
}

void easy(){
    int num;
    int counter = 0;
    int random = rand() % 21;
    do
    {
        printf("Insert Number (0 - 20): ");
        if (scanf("%d", &num) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }
        counter++;
        if (num < random){
            printf("Secret Number is Higher\n");
        } else if (num > random){
            printf("Secret Number is Lower\n");
        } else {
            break;
        }
    }   while (num != random);  
        printf("Game Over. It took you %d tries.\n", counter); 
}

void toLowerCase(char *str){
    for (int i = 0; i != '\0'; i++){
        if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }
}
