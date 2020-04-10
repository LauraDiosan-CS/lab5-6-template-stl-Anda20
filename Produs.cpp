#include "Produs.h"
#include <string.h>
#include <iostream>
using namespace std;

Produs::Produs()
{
	this->cod = 0;
	this->nume = NULL;
	this->pret = 0;
}

Produs::Produs(int cod, char* nume, int pret)
{
	this->cod = cod;
	this->nume = new char[strlen(nume) + 1];
	strcpy_s(this->nume, strlen(nume) + 1, nume);
	this->pret = pret;
}

Produs::Produs(const Produs& p)
{
	this->cod = p.cod;
	this->nume = new char[strlen(p.nume) + 1];
	strcpy_s(this->nume, strlen(p.nume) + 1, p.nume);
	this->pret = p.pret;
}

Produs::~Produs()
{
	if (this->nume != NULL)
	{
		delete[]this->nume;
		this->nume = NULL;
	}
}

void Produs::setCod(int c)
{
	this->cod = c;
}

void Produs::setNume(char* n)
{
	if (this->nume)
	{
		delete[]this->nume;

	}
	this->nume = new char[strlen(n) + 1];
	strcpy_s(this->nume, strlen(n) + 1, n);
}

void Produs::setPret(int p)
{
	this->pret = p;
}

Produs& Produs::operator=(const Produs& p)
{
	if (this != &p)
	{
		this->setCod(p.cod);
		this->setNume(p.nume);
		this->setPret(p.pret);
	}
	return *this;
}