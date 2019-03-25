
/////////////////////////////////////////
//   Sumas y restas de polinomios      //
//   Fecha: 19/03/2019                 //
// Autor: Arturo Bautista de Jesus     //
//	 Version: 1.0                  //
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*prototipos de las funciones*/
void sumaP();
void restaP();

	char cadena[] =  {'C', 'E'}; /*cadena auxiliar*/
int main(){
	int opcion;
	
	do{
	system("cls");
	printf("Suma y resta de polinomios\n\n");
	printf("Sumar polinomios  [1]\n");
	printf("Restar polinomios [2]\n");
	printf("Salir             [3]\n");
	printf("Teclee la opcion deseada... ");
	scanf("%i",&opcion);
	
	switch(opcion){
		case 1:
			sumaP();
			break;
		case 2:
			restaP();
			break;
		case 3:
			printf("bye");
			break;
		default:
			printf("opcion no valida!!");
			getch();
			break;
			
	}
		
	}while(opcion != 3);
	
	return 0;
}

void sumaP(){
	system("cls");
	printf("\n - Suma de polinomios - \n");
	
	int tam = 0;
	
	printf("Cuantos terminos van a tener los polinomios? Escriba el dato: ");
	scanf("%i",&tam);
	
	/*matrices que guardaran los polinomios*/
	int matriz1[tam][2];
	int matriz2[tam][2];
	int matriz3[tam][2];
	
	printf("\n\n P(x)\n Primer polinomio\n");
	printf("\nEscriba coeficiente cuando vea la C y el exponente cuando vea la E \n");
	int i,j;
	for(i = 0; i < tam; i++){
		
		for(j = 0; j < 2; j++){
		printf("Dame el %c: ",cadena[j]);
		scanf("%i",&matriz1[i][j]);/*agregamos los datos a la matriz*/
		
		}
	}
	
	printf("\n P(x)\n Coeficiente || Exponente\n");
	
	for(i = 0; i < tam; i++){
		for(j = 0; j < 2; j++){
		printf("     %i          ",matriz1[i][j],i,j);/*se imprime la matriz*/
		
		}
		printf("\n");
	}

	printf("\n Q(x) Segundo polinomio\n");
	printf("\nEscriba coeficiente cuando vea la C y el exponente cuando vea la E \n");
	
	
	for(i = 0; i < tam; i++){
		
		for(j = 0; j < 2; j++){
		printf("Dame el %c: ",cadena[j]);
		scanf("%i",&matriz2[i][j]);/*agregamos los datos a la matriz*/
		
		}
	}
	
	printf("\n Q(x)\n Coeficiente || Exponente\n");
	
	for(i = 0; i < tam; i++){
		for(j = 0; j < 2; j++){
		printf("     %i          ",matriz2[i][j],i,j); /*se imprime la matriz*/
		
		}
		printf("\n");
	}
	
	int suma = 0;
	for(i = 0; i < tam; i++){
		for(j = 0; j < 2; j++){
			suma = matriz1[i][0] + matriz2[i][0];/*se suman los coeficientes de la matriz1 y matriz2 y se guardan en la variable "suma"*/
			matriz3[i][0] = suma; /*guardamos el valor que haya en "suma" en la matriz"*/
			matriz3[i][1] = matriz1[i][1];/*pasamos el dato del exponente de la matriz1 a la matriz3 */
		}
	}
	
	printf("\n La suma del polinomio P(x) + Q(x) es: \n");
	printf("\n Coeficiente || Exponente\n");
	for(i = 0; i < tam; i++){
		for(j = 0; j < 2; j++){
			printf("     %i         ",matriz3[i][j],i,j);/*se imprime la matriz con el resultado del polinomio sumado*/
		}
		printf("\n");
	}
	getch();
}


void restaP(){
	system("cls");
	printf("\n - Resta de polinomios - \n");
	
	int tam = 0;
	
	printf("Cuantos terminos van a tener los polinomios? Escriba el dato: ");
	scanf("%i",&tam);
	/*matrices que guardaran los polinomios*/
	int matriz1[tam][2];
	int matriz2[tam][2];
	int matriz3[tam][2];
	
	printf("\n\n P(x)\n Primer polinomio\n");
	printf("\nEscriba coeficiente cuando vea la C y el exponente cuando vea la E \n");
	int i,j;
	for(i = 0; i < tam; i++){
		
		for(j = 0; j < 2; j++){
		printf("Dame el %c: ",cadena[j]);
		scanf("%i",&matriz1[i][j]);/*agregamos los datos a la matriz*/
		
		}
	}
	
	printf("\n P(x)\n Coeficiente || Exponente\n");
	
	for(i = 0; i < tam; i++){
		for(j = 0; j < 2; j++){
		printf("     %i          ",matriz1[i][j],i,j);/*se imprime la matriz*/
		
		}
		printf("\n");
	}

	printf("\n Q(x) Segundo polinomio\n");
	printf("\nEscriba coeficiente cuando vea la C y el exponente cuando vea la E \n");
	
	
	for(i = 0; i < tam; i++){
		
		for(j = 0; j < 2; j++){
		printf("Dame el %c: ",cadena[j]);
		scanf("%i",&matriz2[i][j]);/*agregamos los datos a la matriz*/
		
		}
	}
	
	printf("\n Q(x)\n Coeficiente || Exponente\n");
	
	for(i = 0; i < tam; i++){
		for(j = 0; j < 2; j++){
		printf("     %i          ",matriz2[i][j],i,j); /*se imprime la matriz*/
		
		}
		printf("\n");
	}
	
	int resta = 0;
	for(i = 0; i < tam; i++){
		for(j = 0; j < 2; j++){
			resta = matriz1[i][0] - matriz2[i][0];/*se restan los coeficientes de la matriz1 y matriz2 y se guardan en la variable "resta"*/
			matriz3[i][0] = resta; /*guardamos el valor que haya en "resta" en la matriz3*/
			matriz3[i][1] = matriz1[i][1];/*pasamos el dato del exponente de la matriz1 a la matriz3 */
		}
	}
	
	printf("\n La suma del polinomio P(x) + Q(x) es: \n");
	printf("\n Coeficiente || Exponente\n");
	for(i = 0; i < tam; i++){
		for(j = 0; j < 2; j++){
			printf("     %i         ",matriz3[i][j],i,j);/*se imprime la matriz con el resultado del polinomio restado*/
		}
		printf("\n");
	}
	getch();
}
