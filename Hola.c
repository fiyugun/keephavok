#include <stdio.h>
#include<stdbool.h>
#include<string.h>

void ImprimirNombre(char nombre[], int edad){
    printf("\nHola Tu Nombre es %s y tu edad es %d", nombre, edad);

}

void Saludar(){
    printf("::::::::::::::::::::::::::::::Este es el saludo Inicial Mediante una Funcion:::::::::::::::::");
}

int main() {
    //aqui estamos solo imprimiendo cosas en el primer programa.
    /* aqui tenemos varias lineas
    para comentar con esta sentencia */

    int num1=3, num2=4;
    float num3=0.12, num4=0.33;
    char letra="A";
    char saludos[]="Hola este es un saludo de Amistad con Karloff";
    float digito=10.99999;
    const char memo[]="Luis Guillermito cabecera nueva";
    bool sw=true;
    int vector[] = {10,20,45,36};

  Saludar();
  ImprimirNombre("Luis", 42);
  printf("\nMis primeros pasos en c! \n\n");
  printf("\nAqui voy a copiar otra linea \n");
  printf("\nAqui tenemos una segunda Linea \n");
  printf("\nLa suma de estos dos es %d" , (num1+num2));
  printf("\nLa resta es %d", (num1-num2));
  printf("\nla suma de estos numeros es %f", (num3 + num4));
  printf("\nLa letra seleccionada es %c", letra);
  printf("\nkarloff Silvosky %s", saludos);
  printf("\nVamos a imprimir solo ciertos digitos %f", digito);
  printf("\nVamos a imprimir solo ciertos digitos %.2f", digito);
  printf("\nLa cantidad de memoria para digito es %lu", sizeof(digito));
  printf("\nEl valor de la constante siempre es el Mismo ", memo);
  printf("\nEl Sw o la bandera valen %d", sw);

  switch(num1){
case 1:
    printf("'\nEl valor es 1");
    break;
case 2:
    printf("\nEl valor es 2");
    break;
case 3:
    printf("\nEl valor es 3");

  }
  vector[0]=50;
  printf("\nEl valor en la posicion 0 es %d", vector[0]);

  /*Vamos a realizar un Bucle While */
  int i=0;

  while(i<5){
    printf("\nEl valor es %d", i);
    i++;
  }

    printf("\nEl Tamaño del Vector EN MEMORIA %lu",sizeof(vector));
    int length=sizeof(vector) / sizeof(vector[0]);
    printf("\nEl Tamaño del Vector es de %d",length);

    char alfabeto[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("\nEl Largo del Alfabeto es %d",strlen(alfabeto));
    printf("\nEl Largo del Alfabeto es %d",sizeof(alfabeto));

    char str1[20]="Hello";
    char str2[]="World";

    char s1[]="Memo";
    char s2[]="Memo";

    printf("\nLas Cadenas son %d",strcmp(s1,s2));

    strcat(str1,str2);

    //El resultado se concatena a str1
    printf("\n%s",str1);

    //Capturando los datos
    int myNum;
    printf("\nIngrese Un Numero: ");
    scanf("%d", &myNum);
    printf("El valor Ingresado es %d", myNum);

    int myAge = 43; // an int variable

    printf("\n%d", myAge);  // Outputs the value of myAge (43)
    printf("\n%p", &myAge); // Outputs the memory address of myAge (0x7ffe5367e044)


  return 0;
}
