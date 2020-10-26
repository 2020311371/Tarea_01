#include <stdio.h>
int main (){
		float a;
	float b;
	printf("La operacion a realizar es una divicion:a/b\n");
	printf("inserte un valor para a:");
	scanf("%f",&a);
	printf("inserte un valor para b:");
	scanf("%f",&b);
	float divicion=a/b;
	if (b==0){
		printf("Error,no se puede realizar esta operacion\n");
	}
	else{
		printf("El resultado de la divicion es: %.2f\n",divicion);
	}
printf("Fin del programa");
}

	

