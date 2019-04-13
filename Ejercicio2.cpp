//Librerias
#include<iostream>
//Espacio de trabajo
using namespace std;
//Funcion principal
void main()
{
	

	double *A, *B, *C;
	A = new double;
	B = new double;
	C= new double;
	
	double*area1,*area2,*resultado;

	area1 = new double;
	area2 = new double;
	resultado = new double;
	//Lecturas
	cout << "escribe el valor de A: ";
	cin >> *A;
	cout << "escribe el valor de B: ";
	cin >> *B;
	cout << "escribe el valor de C: ";
	cin >> *C;
	//Calculos
	*area1 = *B**C;
*area2 =(*A -*C)**B/ 2;
//salidas
	cout << "el area de la figura es : " << area1 + area2;

	system("pause>NULL");
}