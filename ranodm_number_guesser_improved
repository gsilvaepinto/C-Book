#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void toLower(char *str);
void game(int range);

int main(){
    srand(time(0));
    char level[20];

    printf("Level (Impossible - Hard - Medium - Easy): ");
    fgets(level, sizeof(level), stdin);
    level[strcspn(level, "\n")] = 0;
    toLower(level);

    if (strcmp(level, "impossible") == 0){
        game(500);
    } else if (strcmp(level, "hard") == 0){
        game(100);
    } else if (strcmp(level, "medium") == 0){
        game(50);
    } else if (strcmp(level, "easy") == 0){
        game(10);
    } else {
        printf("Invalid difficulty level!\n");
    }
    
    return 0;
}

void game(int range){
    int random = rand() % (range + 1);
    int num;
    int counter = 1;

    do {
        printf("Insert Number (0 - %d): ", range);
        if (scanf("%d", &num) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n');  
            continue;
        }
        
        if (num > random) {
            printf("Secret Number is Lower\n");
        } else if (num < random) {
            printf("Secret Number is Higher\n");
        } else {
            break;
        }
        
        counter++;
    } while (num != random);
    
    if (counter == 1) {
        printf("Game Over! GOD TIER - You guessed it on the first try!\n");
    } else {
        printf("Game Over! It took you %d tries.\n", counter);
    }
}

void toLower(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}
