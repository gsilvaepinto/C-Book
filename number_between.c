#include <stdio.h>

int Entre(int x, int lim_inf, int lim_sup){
    return ((lim_inf <= x) && (lim_sup >= x));
}

int main(){
    int a, b, c;

    printf("Insert number: ");
    scanf("%d %d %d", &a, &b, &c);

    if (Entre(a, b, c)){
        printf("%d está entre %d e %d\n", a, b, c);
    } else {
        printf("%d não está entre %d e %d\n", a, b, c);
    }
    
    return 0;
}
