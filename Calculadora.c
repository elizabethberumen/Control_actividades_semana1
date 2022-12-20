#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int suma();
int resta();
int mult();
int divi();
int salir();
int op;

int main(int argc, char *argv[]) {

	do{
		printf("Selecciona la operacion a realizar en la calculadora:\n1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Salir\n\n");
		scanf("%d",&op);
	
		switch (op){
		case 1:
			suma();
			break;
			
		case 2:
			resta();
			break;
		
		case 3:
			mult();
			break;
		
		case 4:
			divi();
			break;
		
		case 5:
			salir();
			break;
		
		default:
			printf("Error");
			break;
		}
	} while(op!=5);
	
	
	
	return 0;
}

int suma(){
	int i, sum=0, num, f_num;
	printf("Cuantos numeros quieres sumar?");
	scanf("%d", &num);
	printf("Ingresa numeros a sumar:\n");
	for(i=1;i<=num;i++){
		scanf("%d", &f_num);
		sum=sum + f_num;
	}
	printf("La suma es: %d\n",sum);
	return 0;
}
	
int resta(){
	int n1, n2, rest;
	printf("Escribe el primer numero a restar:\n ");
	scanf("%d", &n1);
	printf("Escribe el segundo numero a restar: \n");
	scanf("%d", n2);
	rest=n1-n2;
	printf("La resta es: %d\n",rest);
	return 0;
}
	
int mult (){
	int n_1, n_2, mul;  
	printf ("Escribe el primer numero a multiplicar:\n ");  
	scanf ("%d", &n_1);  
	printf ("Escribe el segundo numero a multiplicar:\n");  
	scanf ("%d", &n_2);  
	mul = n_1 * n_2;    
	printf ("La multiplicacion de %d * %d is: %d", n_1, n_2, mul); 
	return 0;
}
	
int divi(){
	int n1, n2, div;
	printf ("Escribe el primer numero a dividir:\n");
	scanf ("%d", &n1);
	printf ("Escribe el sugundo a dividir:\n");
	scanf ("%d", &n2);
	
	if (n2==0){
		printf ("El dicisor no puede ser cero, escribe otro numero diferente a cero:\n");
		scanf ("%d", &n2);
	}
	div=n1/n2;
	printf ("La division de %d * %d is: %d", n1, n2, div);
	return 0;
}

int salir()
{
	op=5;
	return 0;
}
