#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){ 
    char string[50], search;
    int find_c = 0;
    fgets(string,sizeof(string),stdin);
    scanf("%c", &search);
    for( int i = 0; i < sizeof(string); i++) {
        if (string[i] == search) find_c++;
    }
    printf("A letra \"%c\" foi encontrada %d vezes", search, find_c);
}