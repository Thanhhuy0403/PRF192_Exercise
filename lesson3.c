#include<stdio.h>
#include<math.h>

int main(){
	long long n;
	scanf("%lld", &n);
	long long res = 1;
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0){
			int cnt = 0;
			while(n%i == 0){
				cnt++;
				n /= i;
			}
			res *= (cnt + 1);
		}
	}
	if(n > 1){
		res *= 2;
	}
	printf("%lld", res);
	return 0;
}
