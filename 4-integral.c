#include<stdio.h>
#include <math.h>

double f(double x){
// return x+2;
// return x*x;
 return sin(x);
}

int main(){
	float a, b, h, x, y, sum=0, integral;
	int n;
	printf("Enter the lower limit \n x0= ");
	scanf("%f",&a);
	printf("Enter the upper limit \n xn= ");
	scanf("%f",&b);
	printf("Enter pencacah \n n= ");
	scanf("%d",&n);

	h = (b-a)/n;
	printf("#cacahan  = %f \n", h);
// print label
	printf("#x  y sum \n");

// print value 0
	printf("%f %f %f \n", a, f(a), sum);

	FILE * fp;

int i;
for (i = 1; i <= n; i++){
	x = a + i*h;
	y = f(x);
	sum = sum + (f(x)+f(x-h))*h/2;
	printf("%f %f %f \n", x, y, sum);
}
return 0;
}
