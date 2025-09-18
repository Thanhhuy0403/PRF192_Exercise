#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n <= 0) return 0;
    double sum = 0;
    for(int i = 1; i <= n; i++){
        sum += 1.0/i;
    }
    printf("%.3lf", sum);
    return 0;
}