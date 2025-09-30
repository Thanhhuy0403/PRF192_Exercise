#include<stdio.h>
#include<stdbool.h>
#include<math.h>

const int MAX = 1e6 + 7;
bool Prime[1000007];

void sang(){
    for(int i = 0; i < MAX; i++){
        Prime[i] = true;
    }
    Prime[0] = Prime[1] = false;
    for(int i = 2; i <= sqrt(MAX); i++){
        if(Prime[2]){
            for(int j = i*i; j < MAX; j += i){
                Prime[j] = false;
            }
        }
    }
}

int main(){
    sang();
    long long n;
    scanf("%lld", &n);
    for(int i = 2; i <= sqrt(n); i++){
        if(Prime[i] && Prime[(int)pow(2, i) - 1]){
            if(pow(2, i-1)*(pow(2, i) - 1) == n){
                printf("YES");
                return 0;
            }
        }
        if(pow(2, i-1)*(pow(2, i) - 1) > n){
            printf("NO");
            return 0;
        }
    }
    printf("NO");
    return 0;
}