#include <stdio.h>

int isprime(int n){
    int checker = 0;
    for (int i = n; i > 0; i--) {
        if (n % i == 0) checker++; 
    }
    if (checker == 2) return 1;
    else return 0;
}
int main(){
    int data[10], prime_sum = 0, div3c = 0, odd_counter = 0;
    float midm3 = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &data[i]);
        if(isprime(data[i]) == 1) prime_sum += data[i]; 
        if(data[i]%3 == 0){ 
            midm3 += data[i];
            div3c ++;
            }
        if (data[i] % 2 != 0 && data[i] > 10) odd_counter++;
    } 
midm3 /= div3c;
printf("A soma dos numeros primos e igual: %d \nA media dos numeros multiplos de 3 e igual: %.2f \nA quantitdade dos numeros impares acima de 10 e igual: %d\n", prime_sum, midm3, odd_counter);
return 0;
}