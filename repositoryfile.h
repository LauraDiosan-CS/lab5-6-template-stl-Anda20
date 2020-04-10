#ifndef REPOSITORYFILE_H
#define REPOSITORYFILE_H
#include <iostream>
#include <vector>
#include <string>
#include "repository.h"
#include "Produs.h"
#include "Monede.h"

using namespace std;

class RepoFile : public Repo<Produs> {

private:
	vector<Produs>produse;
	char* filename;
	void loadDataFromFile(char* filename);
	void printFile();
public:
	RepoFile();
	RepoFile(char* filename);
	void addElem(Produs s);
	vector<Produs>getAll();
};

#endif // REPOSITORYFILE_H
