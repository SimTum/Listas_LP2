#include <stdio.h>
#include <stdlib.h>

int main() {
    int tall_c = 0, ages[5], max_age = 0, short_index, mid_age = 0, oldies = 0;
    float heights[5], mid = 0, min_height = 1000000000;
     for (int i = 0; i < 5; i++) {
        printf("Digite o idade da pessoa:  ");
        scanf("%d",&ages[i]);
        printf("\nDigite a altura da pessoa:  ");
        scanf("%f", &heights[i]);
        printf("\n=========================================================== \n");
        if (heights[i] < min_height) {
            min_height = heights[i];
            short_index = i;
        }
        if (heights[i] > 1.800) {
            tall_c++;
            mid += heights[i];
        }
        if (ages[i] > max_age) max_age = ages[i];  
        mid_age += ages[i];
    }   
    mid/=tall_c;
    for (int i = 0; i < 5; i++) {
        if(ages[i] > mid_age) {
            oldies++;
        }
    }
    printf("\nA menor altura foi %.2f metros. Essa pessoa tinha idade de %d anos\nA media das idades de pessoas com altura assima de 1.80 foi %.2f\nA maior idade entre todas as pessoas foi %d anos\nA quantidade das pessoas com idade maior que a media foi %d pessoas. \n\n", min_height, ages[short_index], mid, max_age, oldies);
}