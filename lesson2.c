#include<stdio.h>

void swap(double *a, double *b){
	double tem = *a;
	*a = *b;
	*b = tem;
}

int main(){
	double a, b;
	scanf("%lf %lf", &a, &b);
	swap(&a, &b);
	printf("%.2lf %.2lf", a, b);
	return 0;
}
