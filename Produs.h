#pragma once
#include <iostream>
using namespace std;

class Produs
{
private:
	int cod;
	char* nume;
	int	pret;
public:
	Produs();
	Produs(int cod, char* nume, int pret);
	Produs(const Produs& produs);
	~Produs();
	int getCod()
	{
		return this->cod;
	}
	char* getNume()
	{
		return this->nume;
	}
	int getPret()
	{
		return this->pret;
	}
	void setCod(int c);
	void setNume(char* n);
	void setPret(int p);
	Produs& operator=(const Produs& p);
};






