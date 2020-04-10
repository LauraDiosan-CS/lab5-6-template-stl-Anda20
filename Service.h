#ifndef SERVICE_H
#define SERVICE_H
#include "Monede.h"
#include "Produs.h"
#include "repository.h"
#include "repositoryfile.h"
#include <vector>
#include <iostream>
using namespace std;

class Service
{
private:
	Repo<Produs> repo;
	RepoFile repof;

public:
	Service();

	Service(Repo<Produs> r) : repo(r) {}
	void add(Produs e);
	void remove(int pos);
	void listAll();
	int getLen();
	void rest(int pret, float suma);
	vector<Produs>getAll();
	void addElem(Produs s);
};


#endif // ! SERVICE_H
