#include <math.h>
#include <stdio.h>
  int main (){
  	
  		float a,b,c;
	printf("Inserte los valores de a,b y c para resolver el polinomio ax2 + bx + c = 0\n");
	printf ("inserte el valor de a:");
	scanf("%f",&a);
	printf("inserte el valor de b:");
	scanf("%f",&b);
	printf("inserte el valor de c:");
	scanf("%f",&c);
	
	float x1=(-b+sqrt (b*b-4*a*c))/( 2*a);
	float x2=(-b -sqrt (b*b-4*a*c))/(2*a);
	
	if(b*b-4*a*c<0){
		printf("Contiene raices complejas \n");
	}
	else {
		printf("x1=%f \t",x1);
		printf("x2=%f\n",x2);
	}
	printf("Fin del programa");
	
  }
  	
	
