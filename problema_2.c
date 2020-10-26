#include <stdio.h>
int main (){
	int value;
	printf("inserte un valor:");
	scanf("%d",&value);
	
	if (value%2==0){
		printf("El numero %d es par\n",value);
	}
	else{
		printf("El numero %d es impar\n",value);
	}
	printf("fin del programa");
}
