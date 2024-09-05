#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int control = 1;
    char colors[10][20] = {"Red", "Orange", "Yellow", "Green", "Blue", "Purple", "Black", "White", "Pink", "Turquoise"}, input[20];
    // for(int i = 0; i < 10; i++){
    //     scanf("%s", &colors[i]);
    // }
    scanf("%s", &input);
    if(strcmp(input,"FIM") == 0) return 0;
    for (int j = 0; j < 10; j++) {
        if(strcmp(input,colors[j]) == 0){
            printf("O cor %s esta armazenado no array com o index %d", colors[j], j);
            control = 1;
            break;
        }
        else control = 0;
    }
    if (control == 0) printf("Este cor nao esta armazenado neste vetor\n");
return 0;
}