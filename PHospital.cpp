#include <iostream>
#include <stdio.h>
#include<map>
#include<string>
#include<iomanip>
#include<utility>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <fstream>


using namespace std;
void agregarpaciente();
int main();
void factura();

class empa
{
private:
	map<string, int>dato;
public:
	void agregarpaciente();
	int main();
	void factura();

};
struct paciente
{

	int cant;
	double precio;
	string nombre_p;
}



super[10];
char name[75];
ofstream entrada;
ofstream entrada1;
ifstream entrada2("ProductosPaciente.txt");

float totalv = 0;
double totalar = 0;
double total = 0, isv = 0;
char resp;
int j = 0;
int resp2 = 1;
int conj = 0;

void agregarpaciente()
{


	float totalv = 0;
	double totalar = 0;
	double total = 0, isv = 0;
	string nomb;
	int cod;

	int i = 0;
	int j = 0;

	int cant1 = 0;
	int cant11 = 0;
	string rut;
	int sueldo;

	cout << "Ingrese cuantos pacientes desea agregar (que no exceda de 10 personas): ";
	cin >> resp2;
	if (resp2 >= 11)
	{
		system("cls");
		cout << "Error, cantidad exedida agotados\nGracias por preferirnos";
		main();
	}
	else
	{



		for (i = 0; i <= resp2; i++)
		{
			do
			{
				cout << "____________________________________________________________________________" << endl;
				cout << "1.folleto" << endl;
				cout << "2.Hospitalizacion,unidades de cuidado salas de cirugia,consulta externa" << endl;
				cout << "3.procedimiento quirurgico" << endl;
				cout << "4.habitacion" << endl;
				cout << "5.compa�ante permanente" << endl;
				cout << "6.transito pasillos" << endl;
				cout << "7.areas administrativas" << endl;
				cout << "8.personal del laboratorio" << endl;
				cout << "_____________________________________________________________________________" << endl;
				cout << "Ingrese el numero: " << endl;
				cin >> cod;

				switch (cod)
				{


				case 1:


					super[i].nombre_p = "folleto";
					cout << "\t------recomendaciones de cuidado en casa------\t" << endl;
					cout << "_____________________________________________________" << endl;
					cout << "->aislamiento por 15 dias" << endl;
					cout << "->desinfeccion en salas comunes" << endl;
					cout << "->uso de tapabocas" << endl;
					entrada << "Nombre : " << super[i].nombre_p;
					super[i].precio = 5.5;

					do {

						cout << "Ingrese cantidad que se vende: " << endl;
						cin >> super[i].cant;


						if (super[i].cant > resp2)
							cout << "Cantidad sobrepasa los articulos que lleva " << endl;

					} while (super[i].cant > resp2);

					entrada << "cantidad " << super[i].cant << endl;
					entrada1 << super[i].cant << " ";

					break;
				case 2: super[i].nombre_p = "urgencias";
					cout << "\t respirador,visor,careta,guantes,vestido quirurgico \t" << endl;

					entrada << "producto: " << super[i].nombre_p;
					super[i].precio = 6.5;
					do {

						cout << "Ingrese cantidad que se vende: " << endl;
						cin >> super[i].cant;


						if (super[i].cant > resp2)
							cout << "Cantidad sobrepasa los articulos que lleva " << endl;

					} while (super[i].cant > resp2);


					break;
				case 3: super[i].nombre_p = "procedimiento quirurgico";
					cout << "respirador,visor,gorro,polainas"<<endl;
					entrada << "Nombre producto: " << super[i].nombre_p;
					super[i].precio = 5.2;
					do {

						cout << "Ingrese cantidad que se vende: " << endl;
						cin >> super[i].cant;


						if (super[i].cant > resp2)
							cout << "Cantidad sobrepasa los articulos que lleva " << endl;

					} while (super[i].cant > resp2);
					break;
				case 4: super[i].nombre_p = "habitacion";
					cout << "si va a entrar a la habitacion" << endl;
					cout << "mascarilla , bata,guantes, monogafas ,botas" << endl;
					entrada << "Nombre producto: " << super[i].nombre_p;
					super[i].precio = 3.8;
					do {

						cout << "Ingrese cantidad que se vende: " << endl;
						cin >> super[i].cant;


						if (super[i].cant > resp2)
							cout << "Cantidad sobrepasa los articulos que lleva " << endl;

					} while (super[i].cant > resp2);
					break;
				case 5: super[i].nombre_p = "compa�ante permanente";
					cout << "mascarilla quirurgica,bata,guantes" << endl;
					entrada << "Nombre producto: " << super[i].nombre_p;
					super[i].precio = 22.8;
					do {

						cout << "Ingrese cantidad que se vende: " << endl;
						cin >> super[i].cant;


						if (super[i].cant > resp2)
							cout << "Cantidad sobrepasa los articulos que lleva " << endl;

					} while (super[i].cant > resp2);
					break;
				case 6: super[i].nombre_p = "transito pasillos";
					cout << "actividad que no involucre contacto con pacientes de  COVID-19" << endl;
					cout << "---No requiere elementos personales----" << endl;
					entrada << "Nombre producto: " << super[i].nombre_p;
					super[i].precio = 14.5;
					do {

						cout << "Ingrese cantidad que se vende: " << endl;
						cin >> super[i].cant;


						if (super[i].cant > resp2)
							cout << "Cantidad sobrepasa los articulos que lleva " << endl;

					} while (super[i].cant > resp2);
					break;
				case 7: super[i].nombre_p = "areas administrativas";
					cout << "---involucra riesgo de pacientes con covid-19---" << endl;
					cout << "Mascarillas,ventanilla de vidrio por favor" << endl;
					entrada << "Nombre producto: " << super[i].nombre_p;
					super[i].precio = 1.5;
					do {

						cout << "Ingrese cantidad que se vende: " << endl;
						cin >> super[i].cant;


						if (super[i].cant > resp2)
							cout << "Cantidad sobrepasa los articulos que lleva " << endl;

					} while (super[i].cant > resp2);
					break;
				case 8: super[i].nombre_p = "personal del laboratorio ";
					cout << "manipulacion de muestras" << endl;
					cout << "mascarilla quirurgica,abta,guante no esteril,careta" << endl;
					entrada << "Nombre producto: " << super[i].nombre_p;
					super[i].precio = 50;
					do {

						cout << "Ingrese cantidad que se vende: " << endl;
						cin >> super[i].cant;


						if (super[i].cant > resp2)
							cout << "Cantidad sobrepasa los articulos que lleva " << endl;

					} while (super[i].cant > resp2);
					break;
				default:cout << "cantidad de pacientes exedida, se estan agotando " << endl;
					break;
				}
			} while (cod > 10);




			conj++;
			j = super[i].cant + j;
			if (j >= resp2)
			{
				i = 11;

				factura();
			}
		}
	}
}

void factura()
{

	float totalv = 0;
	double totalar = 0;
	double total = 0, isv = 0;

	system("cls");
	cout << "\t------------------------bienvenido a IETS------------------------\t" << endl;
	cout << "\t-------------instituto de evaluacion tecnologica en salud---------------------------------\t" << endl;
	cout << "\t---------------------------inventario-----------------------\t" << endl;
	cout << "Nombre: " << name << endl;


	cout << "Cant/Arti " << "\t " << "Nom/Art" << " \t " << " Precio " << endl;

	for (int i = 0; i <= conj - 1; i++)

	{

		cout << super[i].cant << " \t " << super[i].nombre_p << " \t " << super[i].precio << endl;
		totalv = totalv + (super[i].precio * super[i].cant);
		totalar = totalar + super[i].cant;
		isv = isv + totalv * 0.15;
		total = totalv + isv;

	}

	entrada << "Total " << total << " " << endl;
	entrada1 << total << " ";
	entrada << "**************************" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "Subtotal: " << totalv << endl;
	cout << "Impuesto del hospital: " << isv << endl;
	cout << "Tipo de EPP vendidos: " << totalar << endl;
	cout << "Total: " << total << endl;

	system("PAUSE");
	entrada.close();
	do
	{
		system("cls");
		cout << "\t-------------instituto de evaluacion tecnologica en salud---------------------------------\t" << endl;
		cout << "gracias por preferirnos" << endl;
		cout << "Desea ingresa otro paciente? S/N " << endl;
		cin >> resp;
		resp = toupper(resp);
		if (resp == 'S')
		{

			resp2 = 0;
			j = 0;
			conj = 0;
			main();
		}
	} while (resp == 'S');
}

typedef pair<string, double> venta_dia;

int main()
{



	entrada.open("Productopaciente.txt", ios::out | ios::app);
	entrada1.open("ProductosPaciente.txt", ios::out | ios::app);
	if ((entrada.fail()) && (entrada1.fail()))
	{
		cout << "ERROR AL ABRIR EL ARCHIVO" << "\n";
	}
	else
	{
		cout << "****************************" << endl;
		cout << "---IETS-- " << endl;
		cout << "--COVID-19--" << endl;
		cout << "Para finalizar ingrese 0" << endl;
		cout << "Ingrese nombre: " << endl;
		cin >> name;
		entrada << " Nombre de folleto: " << name << " ";
		entrada1 << name << " ";
		agregarpaciente();

		cout << "\n----semana---\n";
		cout << ".......inventario.........\n";
		map<string, double> semana;

		semana.insert(venta_dia("->lunes: ", 300.65));
		semana.insert(venta_dia("->martes: ", 456.12));
		semana.insert(venta_dia("->miercoles: ", 254.65));
		semana.insert(venta_dia("->jueves: ", 555.56));
		semana.insert(venta_dia("->viernes: ", 300.65));
		double total = 0;

		map<string, double>::iterator p = semana.begin();
		while (p != semana.end())
		{
			cout << setw(10) << p->first << setw(12) << p->second << endl;
			total += p->second;
			p++;
		}

		cout << "........................\n";
		cout << setw(10) << "total:" << setw(12) << total << endl;

		return 0;
	}
}