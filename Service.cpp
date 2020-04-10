#include "Service.h"
#include <string.h>
#include <vector>
#include <iostream>
using namespace std;

Service::Service() {}

void Service::add(Produs e)
{
	repo.add(e);
}

void Service::remove(int pos)
{
	repo.remove(pos);
}

void Service::listAll()
{
	repo.listAll();
}

int Service::getLen()
{
	return repo.getLen();
}

void Service::rest(int pret, float suma)
{
	repo.rest(pret, suma);
}

vector<Produs>Service::getAll() {
	return repo.getAll();
}

void Service::addElem(Produs s) {
	repof.addElem(s);
}