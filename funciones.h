#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

//FUNCIONES PARA OPERAR
float suma(float num1, float num2);

float resta( float num1, float num2);

float multiplicacion( float num1, float num2);

float division( float num1, float num2);

float factorial( float num);

//FUNCION ERROR
char error[] = "\nLa opcion ingresada no es valida, debe elegir\nuna opcion entre 1 y 9, desea continuar?: s/n \n";
int valOpMen(char error[], int desde, int hasta);

//VALIDACIONES
void funcion_getString(char mensaje[],char input[]);

int funcion_getStringNumeros(char mensaje[],char input[]);

int funcion_ValidarNumero(char str[]);

int funcion_validarNumeroFlotante(char str[]);



#endif // FUNCIONES_H_INCLUDED
