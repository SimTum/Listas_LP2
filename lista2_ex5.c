#include <stdio.h>
#include <stdlib.h> 

int main() { 
    char name[5][10] = {"Simon", "NotSimon", "Simon?", "Greg", "SimonJr"};
    float sales[5] = {43000, 25001.60, 38000, 78249, 45230}, net_sales = 0;
    for(int i = 1; i < 5; i++) {
        printf("\nO vendedor %s esta intitulado a comissao de %.2f reais ", name[i], sales[i]*0.1);
        net_sales += sales[i];
    }
    float mid = net_sales/5, max_sales = 0;
    int max_index, good_vendors = 0;
    for(int i = 1; i < 5; i++) {
        if(sales[i] > mid) good_vendors++;
        if(sales[i] > max_sales) {
            max_index = i;
            max_sales = sales[i];
        }
    }
    printf("\n=============================================================================================\nO valor total recebida das vendas: %.2f\nA media das vendas: %.2f\nA quantidade dos vendedores que fizeram vendas em cima da media: %d\nO vendedor com maior commissao foi %s com comissao de %.2f reais \n", net_sales, mid, good_vendors, name[max_index], (sales[max_index]*0.1));
    return 0;
}