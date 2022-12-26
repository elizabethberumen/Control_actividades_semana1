#include <stdio.h>

typedef struct sensor_data{
	float temperatura;
	float humedad;
	float presion;
	int nivel;
};

sensor_data sensor1;

sensor1.temperatura=10.3;
sensor1.humedad=5.5;
sensor1.presion=10.6;
sensor1.nivel=3;

typedef struct Timer{
	volatile bit1: 2;
	volatile bit2: 2;
	volatile bit3: 4;
};

#define registro (0xFF45E4UL)
#define uso_registro (volatile Timer*)(registro)

uso_registro->bit1 |=0x01;
uso_registro->bit2 |=0x01;
uso_registro->bit3 |=0x0001;


typedef struct otro_sensor{
	float luz;
	float voltaje;
	float velocidad;
};

otro_sensor sensor2;

sensor2.luz=700;
sensor2.voltaje=5.5;
sensor2.velocidad=100;

typedef struct Tiempo{
	volatile bit_1: 3;
	volatile bit_2: 2;
	volatile bit_3: 3;
};

#define registro_2 (0x55EF12UL)
#define uso_registro_2(volatile Tiempo*)(registro_2)

uso_registro_2->bit_1 =1;
uso_registro_2->bit_2 |=1;
uso_registro_2->bit_3 |=1;

int main(int argc, char *argv[]) {
	
	return 0;
}

