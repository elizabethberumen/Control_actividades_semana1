#include <stdio.h>

enum estados {
	INICIAL, ESTADO1, ESTADO2, ESTADO3, ESTADO4, ESTADO_FINAL 
};

int main(int argc, char *argv[]){
	enum estados estado_actual = INICIAL;
	int entrada;
	
	while (estado_actual != ESTADO_FINAL){
		switch(estado_actual){
			
		case INICIAL:
			printf("Estamos en el estado INICIAL\nIngresa 1 o 2:");
			scanf("%d",&entrada);
			if (entrada==1){
				estado_actual=ESTADO4;
			}
			else if (entrada==2){
				estado_actual=ESTADO2;
			}
		break;
		
		case ESTADO1:
			printf("Estamos en el ESTADO1\nIngresa 1 o 2:");
			scanf("%d",&entrada);
			if (entrada==1){
				estado_actual=ESTADO3;
			}
			else if (entrada==2){
				estado_actual=ESTADO_FINAL;
			}
		break;
		
		case ESTADO2:
			printf("Estamos en el ESTADO2\nIngresa 1 o 2:");
			scanf("%d",&entrada);
			if (entrada==1){
				estado_actual=INICIAL;
			}
			else if (entrada==2){
				estado_actual=ESTADO1;
			}
		break;
		case ESTADO3:
			printf("Estamos en el ESTADO3\nIngresa 1 o 2:");
			scanf("%d",&entrada);
			if (entrada==1){
				estado_actual=ESTADO2;
			}
			else if (entrada==2){
				estado_actual=ESTADO_FINAL;
			}
		break;
		case ESTADO4:
			printf("Estamos en el ESTADO4\nIngresa 1 o 2:");
			scanf("%d",&entrada);
			if (entrada==1){
				estado_actual=ESTADO_FINAL;
			}
			else if (entrada==2){
				estado_actual=ESTADO3;
			}
		break;
		case ESTADO_FINAL:
			printf("FIN DEL PROGRAMA\n");
		break;
		default:
			printf("Entrada invalida!\n");
		break;
		}
	}
	return 0;
}
