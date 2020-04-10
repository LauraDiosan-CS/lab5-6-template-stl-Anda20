#include "ui.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void UI::afisare() {
	cout << "1.Adaugati un produs" << endl;
	cout << "2.Afisati toate produsele" << endl;
	cout << "3.Cumparati un produs" << endl;
	cout << "4.Exit" << endl;
}

void UI::add(Produs e)
{
	service.add(e);
}

void UI::remove(int pos)
{
	service.remove(pos);
}
void UI::listAll()
{
	service.listAll();
}

int UI::getLen()
{
	return service.getLen();
}
void UI::rest(int pret, float suma)
{
	service.rest(pret, suma);
}
void UI::run()
{
	cout << "\n";
	bool c = true;
	int choice, cod;
	int pret;
	char* nume = new char[20];
	Monede mon;
	mon.addMoneda(10);
	mon.addMoneda(10);
	mon.addMoneda(40);

	Repo <Produs> re(10, mon);
	while (c) {
		afisare();
		cin >> choice;
		switch (choice) {
		case 1: {
			cout << "Introduceti codul produsului: " << endl;
			cin >> cod;
			cout << "Introduceti numele produsului: " << endl;
			cin >> nume;
			cout << "Introduceti pretul produsului: " << endl;
			cin >> pret;
			Produs p = Produs(cod, nume, pret);
			re.add(p);
			cout << "\n";
			break;
		}
		case 2: {
			re.listAll();
			cout << "\n";
			break;
		}
		case 3: {
			int cod;
			float suma;

			cout << "Introduceti codul produsului " << endl;
			cin >> cod;
			cout << "Introduceti o suma in bancomat " << endl;
			cin >> suma;
			re.rest(re.getAll()[cod - 1].getPret(), suma);
			cout << "\n";
			break;
		}
		case 4: {
			cout << "Aplicatia s-a inchis";
			c = false;
			cout << "\n";
			break; }
		default:
		{
			cout << "Not a Valid Choice. \n";
			cout << "Choose again.\n";
			break; }
		}

	}

	system("pause");

}

