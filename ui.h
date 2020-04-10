#ifndef UI_H
#define UI_H
#include <iostream>
#include "Service.h"

class UI
{
private:
	Service service;
	void add(Produs e);
	void remove(int pos);
	void listAll();
	//void update(int pos, Produs e);
	int getLen();
	void rest(int pret, float suma);
	void afisare();
public:

	UI(const Service& c) : service(c) {}
	void run();

};
#endif // !UI_H
