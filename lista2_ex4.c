#include <stdio.h>
#include <stdlib.h> 

int main() { 
    char product[5][10] = {"car", "shampoo", "PC", "drugs", "plushie"};
    float price[5] = {25000.99, 9.43, 3800, 1234.56, 2.50000}, max_price = 0, mid_price = 0;
    int cheap_count = 0, expensive_count = 0, max_price_index = 0;
    for (int i = 0; i < 5; i ++) {
        if (price[i] < 10) cheap_count ++;
        mid_price += price[i];
        if (price[i] > max_price) max_price = price[i], max_price_index = i;
    }
    mid_price /= 5;
    for (int i = 0; i < 5; i ++) {
        if (price[i] > mid_price) expensive_count ++;
        printf("%s R$%.2f\n", product[i] ,price[i]);
    }
        printf("\n-----------------------------------------------------------\nO produtoo mais caro foi %s com valor de R$%.2f\n", product[max_price_index] ,price[max_price_index]);
    return 0;
}