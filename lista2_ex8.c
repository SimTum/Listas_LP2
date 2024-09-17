#include <stdio.h>

int main(){
    int vector1 [10], vector2 [10], vector3[20];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vector1[i]); 
    }
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vector2[i]); 
    }
    for (int i = 0; i < 20; i++) {
        if(i % 2 == 0) vector3[i] = vector1[i/2]; 
        else vector3[i] = vector2[i/2];
        printf("%d ", vector3[i]); 
    }
}