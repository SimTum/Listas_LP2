#include <stdio.h>
#include <stdlib.h>

int main() { 
    int age[10], input, age_min = 5192721, youngies = 0;
    float mid;
    for (int i = 0; i < 10; i++) {
        printf("Digite a idade da %d pessoa:\n",i+1);
        scanf("%d", &input);
        printf("\n");
        age[i] = input;
        if (age[i] < age_min) age_min =age[i];
        if (age[i] >=20 && age[i] <= 30) youngies++;
        mid += age[i];
    }
    mid = mid/10;
    int oldies = 0;
    for (int i = 0; i < 10; i++) {
        if (age[i] > mid) oldies ++;
    }
    printf("A minor idade: %d anos\nA media das idades: %2.f anos\nA quantidade das pessoas que tem entre 20 e 30 anos: %d pessoas\nA quantidade das pessoas com idade maior do que media: %d pessoas", age_min, mid, youngies, oldies);
    return 0;
}