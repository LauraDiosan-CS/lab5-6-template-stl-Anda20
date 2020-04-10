#include "repositoryfile.h"
#include <string.h>
#include <fstream>


RepoFile::RepoFile(char* filename)
{
	this->filename = filename;
	loadDataFromFile(filename);
}

RepoFile::RepoFile() {}

void RepoFile::loadDataFromFile(char* filename) {
	ifstream fin;
	fin.open(filename);
	if (!fin) {
		cout << "erroare la deschiderea fisierului" << endl;
	}
	else {
		Produs s;
		string nume;
		int pret;
		int cod;
		//not end of file
		while (!fin.eof()) {
			fin >> cod >> nume >> pret;
			char* produsName = const_cast<char*>(nume.c_str());
			s = Produs(cod, produsName, pret);
			produse.push_back(s);

		}
		fin.close();
	}
}

void RepoFile::printFile() {
	ofstream outputFile;
	outputFile.open(filename);

	for (Produs s : produse) {
		outputFile << s.getCod() << " " << s.getNume() << " " << s.getPret() << endl;
	}
}

void RepoFile::addElem(Produs s) {
	produse.push_back(s);
	printFile();

}

vector<Produs>RepoFile::getAll() {
	return produse;
}