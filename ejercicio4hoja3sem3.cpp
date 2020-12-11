/*
Para que un obrero pueda calcular su salario semanal,es necesario que
tenga en cuenta las siguientes consideraciones: Si trabaja hasta 40 horas
o menos se le paga $16 por cada hora

2
Si trabaja más de 40 horas se le paga $16 por cada una de las primeras 40 horas 
y $20 por  cada hora extra. Realice una aplicación en C++ que teniendo como dato de 
entrada el número de horas, calcule el salario semanal de un obrero.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int calculasalariosemanal(int horas)
{
	float costo=0;
	costo = (horas <= 40) ? horas * 16 : 16*40 +(horas-40)*20;
	return costo;

}

int main()
{

	int horas;
	float pagosalario;
	cout << "ingrese numero de horas: ";
	cin >> horas;
	pagosalario = calculasalariosemanal(horas);
	cout << pagosalario;

	_getch();
	


}