#include <stdio.h>
int main() {
    float weight[10], min_weight = 100000000000, mid_weigh = 0;
    char names[10][20];
    int mindex, underweight = 0;
    for(int i = 0; i < 10; i++){
        printf("\nDigite o nome de pessoa e o peso deles   ");
        scanf("%s%f", &names[i], &weight[i]);
        mid_weigh += weight[i];
        if(weight[i] < min_weight) {
            min_weight = weight[i];
            mindex = i;
            }
    }
    mid_weigh = mid_weigh / 10;
    for(int i = 1; i < 10; i++){
        if (weight[i] < mid_weigh) {
            underweight++;
        }
    }
    int underweight_index[underweight], k=0;
    for(int i = 1; i < 10; i++){
        if (weight[i] < mid_weigh) {
            underweight_index[k] = i;
            k++;
        }
    }
    printf("\n====================================\nA pessoa com o minor peso foi %s com %.2f kilos de peso \nA media dos pesos foi igual %.2f kilos \n======================================\nAs seguientes pessoas tem pesso em baixo da media:\n", names[mindex], weight[mindex], mid_weigh);
    for(int i = 0; i < underweight; i++){
        printf("%s, %.2f kg\n", names[underweight_index[i]], weight[underweight_index[i]]);
    }
    return 0;
}