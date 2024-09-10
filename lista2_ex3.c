#include <stdlib.h>
#include <stdio.h>

int main(){
    int a[5] = {1, 22, 28, 4, 5}, b[5] = { 6, 7, 12, 6, 24}, c[10], dev = 0, perf = 0;    
    
    for (int i = 0; i < 10; i++)
    {
    if (i < 5) {
        c[i] = a[i];
    }
    else c[i] = b[i-5];
    }
    for (int i = 0; i < 10; i++) {
        for (int j = c[i]-1; j > 0; j--) {
            if (c[i]%j == 0) dev+=j;
        }
        if (dev == c[i]) {
            perf++;
        }
        dev = 0;
    }
    printf("%d\n", perf);
    return 0;
}