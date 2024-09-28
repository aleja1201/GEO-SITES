#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int x,filas=0,columnas=0,personax=1,personay=1,numero,y=1,app=0,dete=0,lugar[10][10];

	for (filas=0;filas<10;filas++){ //Para poner todo el array con 0
		for(columnas=0;columnas<10;columnas++){
			lugar[filas][columnas]=0;
		}
	}
	
	filas=0;
	columnas=0;
	for (x=0;x<10;x++){ //este de aqui es para crear la linea de unos horizontal superior
	lugar[filas][columnas]=1;
	columnas++;		
	}
	columnas=0;
	filas=0;
	for (x=0;x<10;x++){//Este para crear la linea de unos vertical izquierda
	lugar[filas][columnas]=1;
	filas++;		
	}
	
	filas=9;
	columnas=0;
	for (x=0;x<10;x++){ //este de aqui es para crear la linea de unos horizontal inferior
	lugar[filas][columnas]=1;
	columnas++;		
	}
	columnas=9;
	filas=0;
	for (x=0;x<10;x++){//Este para crear la linea de unos vertical derecha
	lugar[filas][columnas]=1;
	filas++;		
	}
	
	columnas=4;
	filas=0;
	for (x=0;x<4;x++){//Linea vertical primera
	lugar[filas][columnas]=1;
	filas++;		
	}

	
	filas=5;
	columnas=0;
	for (x=0;x<7;x++){ //este de aqui es para crear la linea de unos horizontal superior
	lugar[filas][columnas]=1;
	columnas++;		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	lugar[personay][personax]=7;
		
		for (filas=0;filas<10;filas++){
		for(columnas=0;columnas<10;columnas++){
			
			printf("%d ",lugar[filas][columnas]);

		}
		printf("\n");
		
	}
			printf("Tu eres el numero 7, y el numero 1 son las paredes, puedes moverte por todos los espacios donde hayan un 0\n");
			printf("Para moverte debes presionar 2 para bajar\n");
			printf("Para moverte debes presionar 8 para subir\n");
			printf("Para moverte debes presionar 4 para izquierda\n");
			printf("Para moverte debes presionar 6 para derecha\n");
			printf("Si tu personaje (el 7) no se mueve es porque no puede moverse en esa direccion\n");
			printf("Primera pista, pulsa el 2\n");
			
			
while (1){
	numero=0;
	scanf("%d",&numero);
	columnas=0;
	filas=0;
	if(numero==6){
		personax++;
		if(lugar[personay][personax]==0){//el doble == es para poner si ese espacio es igual que 0
			lugar[personay][personax]=7;// y un solo = es para designar un valor a ese espacio
			lugar[personay][personax-1]=0;
				for (filas=0;filas<10;filas++){
				for(columnas=0;columnas<10;columnas++){
					printf("%d ",lugar[filas][columnas]);
				}
					printf("\n");
			}
							printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}
			else{
			personax--;
						printf("no puedes pasar porque hay una pared, intenta nuevamente\n");

		}	
	}

			
	else if(numero==4){
		personax--;
		if(lugar[personay][personax]==0){//el doble == es para poner si ese espacio es igual que 0
			lugar[personay][personax]=7;// y un solo = es para designar un valor a ese espacio
			lugar[personay][personax+1]=0;
				for (filas=0;filas<10;filas++){
				for(columnas=0;columnas<10;columnas++){
					printf("%d ",lugar[filas][columnas]);
				}
					printf("\n");
			}
							printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}
			else{
			personax++;
			printf("no puedes pasar porque hay una pared, intenta nuevamente\n");

		}	
	}

		else if(numero==2){
		personay++;
		if(lugar[personay][personax]==0){//el doble == es para poner si ese espacio es igual que 0
			lugar[personay][personax]=7;// y un solo = es para designar un valor a ese espacio
			lugar[personay-1][personax]=0;
				for (filas=0;filas<10;filas++){
				for(columnas=0;columnas<10;columnas++){
					printf("%d ",lugar[filas][columnas]);
				}
					printf("\n");
			}
							printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}
			else{
			personay--;
			printf("no puedes pasar porque hay una pared, intenta nuevamente\n");

		}	
	}

		else if(numero==8){
		personay--;
		if(lugar[personay][personax]==0){//el doble == es para poner si ese espacio es igual que 0
			lugar[personay][personax]=7;// y un solo = es para designar un valor a ese espacio
			lugar[personay+1][personax]=0;
				for (filas=0;filas<10;filas++){
				for(columnas=0;columnas<10;columnas++){
					printf("%d ",lugar[filas][columnas]);
				}
					printf("\n");
			}
							printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}
			else{
			personay++;
			printf("no puedes pasar porque hay una pared, intenta nuevamente\n");
		}	
	}


}
}


