//ejercicio 2.20
/*
#include <iostream>

using namespace std;

int main() {
	float pi = 3.14159;
	float diametro_circulo = 0;
	float circunferencia = 0;
	float area_circulo = 0;
	float radio;
	cout << "Digite el radio del circulo: ";
	cin >> radio;
	area_circulo = pi * (radio*radio);
	cout << "El area del circulo es: " << area_circulo << endl;
	diametro_circulo = radio * 2;
	cout << "El diametro del circulo es: " << diametro_circulo << endl;
	circunferencia = (2 * pi) * radio;
	cout << "La circunferencia del circulo es: " << circunferencia << endl;
	return 0;
}
*/
//ejercicio 2.21
/*
#include<iostream>
using namespace std;

int main() {
	cout << "  " << "CCC" << "   " << "+" << "      " << "+" << endl;
	cout << " " << "C" << "      " << "+" << "      " << "+" << endl;
	cout << "C" << "     " << "+++++" << "  " << "+++++" << endl;
	cout << " " << "C" << "      " << "+" << "      " << "+" << endl;
	cout << "  " << "CCC" << "   " << "+" << "      " << "+" << endl;
	return 0;
}
*/

//ejercicio 2.22
//Que hace el siguiente codigo...

// cout <<"*****\n****\n***\n **\n*\n"<<endl;

/*Bueno el siguiente codigo imprimira primero los 5 asteriscos, luego dará u salto de
linea, imprime 4 asteriscos y hace un salto de linea. De ahi imprime 3 asteriscos y 
procede hacer un salto de linea. Cuando imprime 2 asateriscos, primero se imprime 
un espacio vacio, despues los 2 asteriscos y su salto de linea. Finalmente imprime 1 asterisco
y su salto de linea, no olvidar que al final hay un endl que tambien significa un salto
de linea, lo cual realiza otro salto de linea*/

//ejercicio 2.23
/*
#include <iostream>
using namespace std;

int main() {
	int a = 1;
	int b = 3;
	int c = -12;
	int d = 2;
	int e = 32;
	int mayor = 0, menor = 0;
	
	mayor = a;
	menor = a;

	if (b > mayor) {
		mayor = b;
	}
	else if (b < menor) {
		menor = b;
	}

	if (c > mayor) {
		mayor = c;
	}
	else if (c < menor) {
		menor = c;
	}

	if (d > mayor) {
		mayor = d;
	}
	else if (d < menor) {
		menor = d;
	}

	if (e > mayor) {
		mayor = e;
	}
	else if (e < menor) {
		menor =e;
	}

	cout << "El numero mayor es: " << mayor << endl;
	cout << "El numero menor es: " << menor << endl;
	return 0;
}*/

//ejercicio 2.24
/*
#include <iostream>
using namespace std;

int main() {
	int numero_1;
	int numero_2;
	int suma = 0;
	cout << "Digite un numero: ";
	cin >> numero_1;
	cout << "Digite otro numero: ";
	cin >> numero_2;
	suma = numero_1 + numero_2;

	if (numero_1 % 2 == 0) {
		cout << "El primer numero: " << numero_1 << " es par." << endl;
	}
	else {
		cout << "El primer numero: " << numero_1 << " es impar." << endl;
	}

	if (numero_2 % 2 == 0) {
		cout << "El segundo numero: " << numero_2 << " es par." << endl;
	}
	else {
		cout << "El segundo numero: " << numero_2 << " es impar." << endl;
	}

	if (suma % 2 == 0) {
		cout << "La suma de los dos numeros: "<< suma << " es par." << endl;
	}
	else {
		cout << "La suma de los dos numeros " << suma << " es impar." << endl;
	}
	return 0;
}*/

//ejercicio 2.25

/*#include <iostream>
using namespace std;

int main() {
	int num1, num2, num3;
	cout << "Digite un numero: ";
	cin >> num1;
	cout << "Digite el segundo numero: ";
	cin >> num2;
	cout << "Digite el tercer numero: ";
	cin >> num3;

	if ((num3 % num1 == 0) && (num3%num2==0)) {
		cout << "El numero " << num1 << " y el numero " << num2 << " son factores de " << num3 << endl;
	}
	else {
		cout << "El numero " << num1 << " y el numero " << num2 << " no son factores de " << num3 << endl;
	}
	return 0;
}*/

//ejercicio 2.26
/*
#include <iostream>
using namespace std;
int main() {
	//con 8 cout
	cout << "* * * * * * * *" << endl;
	cout << " * * * * * * * *" << endl;
	cout << "* * * * * * * *" << endl; 
	cout << " * * * * * * * *" << endl;
	cout << "* * * * * * * *" << endl;
	cout << " * * * * * * * *" << endl;
	cout << "* * * * * * * *" << endl; 
	cout << " * * * * * * * *" << endl<< endl;

	//con 1 cout
	cout << "* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *" << endl;
	
}
*/
//ejercicio 2.27
/*
#include <iostream>
using namespace std;
int main() {
	char input;
	cout << "Ingrese un caracter: ";
	cin >> input;
	cout << input << endl;  
	cout<< "El caracter esta en la posicion " << static_cast<int>(input) << " de la tabla ASCII" << endl;
	return 0;
}*/

//ejercicio 2.28
/*
#include <iostream>
using namespace std;

int main() {
	int digito_4 = 1239;
	int unidad = 0, decena = 0, centena = 0, millar = 0;
	millar = digito_4 / 1000;
	centena = (digito_4 % 1000)/100;
	decena = (digito_4 % 100) / 10;
	unidad = digito_4 % 10;

	cout << unidad << "  " << decena << "  " << centena << "  " << millar << endl;
	return 0;
}*/

//ejercicio 2.29

/*#include <iostream>
using namespace std;
int main() {
	int lado1 = 0, lado2 = 1, lado3 = 2, lado4 = 3, lado5 = 4;
	int area_cubo = 0, volumen_cubo = 0;
	//cuando el lado es 0
	area_cubo = 6 * (lado1*lado1);
	volumen_cubo = lado1 * lado1 * lado1;
	cout << "El area del cubo cuando el lado mide 0 es: " << area_cubo << endl;
	cout << "El volumen del cubo cuando el lado mide 0 es: " << volumen_cubo << endl;
	cout << endl;
	//cuando el lado es 1
	area_cubo = 6 * (lado2 * lado2); 
	volumen_cubo = lado2 * lado2 * lado2;
	cout << "El area del cubo cuando el lado mide 1 es: " << area_cubo << endl;
	cout << "El volumen del cubo cuando el lado mide 1 es: " << volumen_cubo << endl;
	cout << endl;
	//cuando el lado es 2
	area_cubo = 6 * (lado3 * lado3); 
	volumen_cubo = lado3 * lado3 * lado3; 
	cout << "El area del cubo cuando el lado mide 2 es: " << area_cubo << endl;
	cout << "El volumen del cubo cuando el lado mide 2 es: " << volumen_cubo << endl;
	cout << endl;
	//cuando el lado es 3
	area_cubo = 6 * (lado4 * lado4); 
	volumen_cubo = lado4 * lado4 * lado4;
	cout << "El area del cubo cuando el lado mide 3 es: " << area_cubo << endl;
	cout << "El volumen del cubo cuando el lado mide 3 es: " << volumen_cubo << endl;
	cout << endl;
	//cuando el lado es 4
	area_cubo = 6 * (lado5 * lado5); 
	volumen_cubo = lado5 * lado5 * lado5;
	cout << "El area del cubo cuando el lado mide 4 es: " << area_cubo << endl;
	cout << "El volumen del cubo cuando el lado mide 4 es: " << volumen_cubo << endl;

	return 0;
}*/

//ejercicio 2.30
/*
#include <iostream>
using namespace std;

int main() {
	float peso, altura;
	cout << "Digite su peso en kg: ";
	cin >> peso;
	cout << "Digite su altura en metros: ";
	cin >> altura;
	float BMI = 0;
	BMI = peso / (altura * altura);
	cout << "Su indice de masa corporal es de " << BMI << endl;
	if (BMI < 18.5) {
		cout << "Su peso es bajo" << endl;
	}
	else if ((BMI >= 18.5) && (BMI <= 24.9)) {
		cout << "Su peso es normal" << endl;
	}
	else if ((BMI >= 25) && (BMI <= 29.9)) {
		cout << "Usted tiene sobrepeso" << endl;
	}
	else {
		cout << "Su peso no es normal, tiene obesidad" << endl;
	}

	return 0;
}*/

//ejercicio 2.31
/*
#include <iostream>
using namespace std;

int main() {
	int total_millas_por_dia;
	int costo_por_galon_de_gasolina;
	int millas_por_galon;
	int tarifas_Estacionamiento;
	int peajes;
	
	cout << "Ingrese el total de millas que recorre por dia: ";
	cin >> total_millas_por_dia;
	cout << "Ingrese el costo por galon de gasolina: ";
	cin >> costo_por_galon_de_gasolina;
	cout << "Ingrese el promedio de millas por galon: ";
	cin >> millas_por_galon;
	cout << "Ingrese las tarifas de estacionamiento por dia: ";
	cin >> tarifas_Estacionamiento;
	cout << "Ingrese el costo de los peajes por dia: ";
	cin >> peajes;

	int total_galon = (total_millas_por_dia / millas_por_galon); //Para saber cuantos galones se usa al dia
	int costo_galon = total_galon * costo_por_galon_de_gasolina; //Para saber el costo de galones usados por dia
	int costo_total = costo_galon + tarifas_Estacionamiento + peajes; //saber gasto total

	cout << "El costo diario cuando conduce a su trabajo es de: $" << costo_total << endl;

	return 0;
}*/

//ejercicio 2.31

/*#include <iostream>
using namespace std;

int main() {
	int edad;
	cout << "Digite su edad: ";
	cin >> edad;

	float max, min;

	cout << "Usando la ecuacion comun." << endl;
	float Maximun_heart_rate_1 = 220 - edad;
	cout << Maximun_heart_rate_1 << endl;
	cout << "\nUsando la formula de Hence" << endl;
	float Maximun_heart_rate_2 = 208 - (0.7 * edad);
	cout << Maximun_heart_rate_2 << endl;
	cout << "\nUsando la formula de Gellish" << endl;
	float Maximun_heart_rate_3 = 207 - (0.7 * edad);
	cout << Maximun_heart_rate_3 << endl;
	cout << "\nUsando la formila de Nes" << endl;
	float Maximun_heart_rate_4 = 211 - (0.64 * edad);
	cout << Maximun_heart_rate_4 << endl;

	if ((Maximun_heart_rate_1 > Maximun_heart_rate_2) && (Maximun_heart_rate_1 > Maximun_heart_rate_3) && (Maximun_heart_rate_1 > Maximun_heart_rate_4)) {
		max = Maximun_heart_rate_1;
	}
	if ((Maximun_heart_rate_1 < Maximun_heart_rate_2) && (Maximun_heart_rate_1 < Maximun_heart_rate_3) && (Maximun_heart_rate_1 < Maximun_heart_rate_4)) {
		min = Maximun_heart_rate_1;
	}

	if ((Maximun_heart_rate_2 > Maximun_heart_rate_1) && (Maximun_heart_rate_2 > Maximun_heart_rate_3) && (Maximun_heart_rate_2 > Maximun_heart_rate_4)) {
		max = Maximun_heart_rate_2;
	}
	if ((Maximun_heart_rate_2 < Maximun_heart_rate_1) && (Maximun_heart_rate_2 < Maximun_heart_rate_3) && (Maximun_heart_rate_2 < Maximun_heart_rate_4)) {
		min = Maximun_heart_rate_2;
	}

	if ((Maximun_heart_rate_3 > Maximun_heart_rate_2) && (Maximun_heart_rate_3 > Maximun_heart_rate_1) && (Maximun_heart_rate_3 > Maximun_heart_rate_4)) {
		max = Maximun_heart_rate_3;
	}
	if ((Maximun_heart_rate_3 < Maximun_heart_rate_2) && (Maximun_heart_rate_3 < Maximun_heart_rate_1) && (Maximun_heart_rate_3 < Maximun_heart_rate_4)) {
		min = Maximun_heart_rate_3;
	}

	if ((Maximun_heart_rate_4 > Maximun_heart_rate_2) && (Maximun_heart_rate_4 > Maximun_heart_rate_3) && (Maximun_heart_rate_4 > Maximun_heart_rate_1)) {
		max = Maximun_heart_rate_4;
	}
	if ((Maximun_heart_rate_4 < Maximun_heart_rate_2) && (Maximun_heart_rate_4 < Maximun_heart_rate_3) && (Maximun_heart_rate_4 < Maximun_heart_rate_1)) {
		min = Maximun_heart_rate_4;
	}

	
	cout << "\nEl MRH mayor o maximo es: " << max << endl; 
	cout << "El MRH menor o minimo es: " << min << endl;
	return 0;
}*/