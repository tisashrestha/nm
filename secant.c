#include<stdio.h>
#include<math.h>
#define f(x) pow(x,2)-4*x-10

int main(){
	float x1, x2, x3, f1, f2, f3, E = 0.0001;
	int steps=1;
	
	
		printf("Enter the initial values of x1 and x2: ");
		scanf("%f%f",&x1,&x2);

		do{
			f1=f(x1);
			f2=f(x2);	
			x3 = x2-(((x2-x1)/(f2-f1))*f2);
			f3 = f(x3);	
			x1=x2;
			x2=x3;	
			steps++;
		}while(fabs(f3)>E);
		printf("The root is %f and the steps is %d", x3, steps);
		return 0;
}
