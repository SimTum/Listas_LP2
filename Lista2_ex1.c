#include <stdio.h>
#include <stdlib.h>

int main() { 
    int age[10], input, age_max = 0, age_min = 5192721, youngies = 0;
    float mid;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &input);
        age[i] = input;
        if (age[i] > age_max) age_max = age[i];
        if (age[i] < age_min) age_min =age[i];
        if (age[i] >=20 && age[i] <= 30) youngies++;
        mid += age[i];
    }
    mid = mid /10;
    int oldies = 0;
    for (int i = 0; i < 10; i++) {
        if (age[i] > mid) oldies ++;
    }
    
    return 0;
}