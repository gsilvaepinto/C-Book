#include <stdio.h>

float Max(float x, float y, float w){
    if ((x >= y) && (x >= w)){
        return x;
    } else if ((y >= x) && y >= w){
        return y;
    } else{
        return w;
    }
}

int main(){
    float a, b, c;

    printf("Insert 3 numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    float max_number = Max(a, b, c);
    printf("The maximum value is: %.2f\n", max_number);

    return 0;
}
