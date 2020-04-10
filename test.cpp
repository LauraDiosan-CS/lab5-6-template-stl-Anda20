#include "repository.h"
#include "Produs.h"
#include "repositoryfile.h"
#include "test.h"
#include "Service.h"
#include <assert.h>
#include <cassert>
#include <iostream>

using namespace std;

void testProdus()
{
	char* nume = new char[100];
	strcpy_s(nume, 100, "candy");
	Produs p1 = Produs();
	assert(p1.getCod() == 0);
	assert(p1.getNume() == NULL);
	assert(p1.getPret() == 0);
	Produs p2 = Produs(231, nume, 3131);
	char* nume1 = new char[100];
	strcpy_s(nume1, 100, "Bounty");
	Produs p3 = Produs(p2);
	assert(p3.getCod() == 231);
	assert(p3.getNume() == "Bounty");
	assert(p3.getPret() == 3131);
	cout << "Testele au trecut cu succes" << endl;
}

void testRepo()
{
	char* nume = NULL;
	strcpy_s(nume, strlen("Biscuits") + 1, "Biscuits");
	Produs p = Produs(1, nume, 5);
	vector<Produs> v;
	Monede mon;
	mon.addMoneda(10);
	mon.addMoneda(10);
	mon.addMoneda(10);
	Repo <Produs> re(10, mon);
	re.add(p);
	assert(re.getLen() == 1);
	assert(re.getAll()[0].getCod() == 1);
	char* nume1 = NULL;
	strcpy_s(nume1, strlen("Peanuts") + 1, "Peanuts");
	Produs p1 = Produs(2, nume1, 7);
	re.add(p1);
	assert(re.getLen() == 2);
	assert(re.getAll()[1].getPret() == 7);
	delete[]nume;
	delete[]nume1;
	cout << "Testele  Repo au trecut!";
};

Service con;
Repo<Produs> repo;

void setUp() {
	repo = RepoFile();
	con = Service(repo);
}

void testRepoFile()
{
	setUp();
	vector<Produs>produse = con.getAll();
	assert(produse.size() == 0);
	char* nume = new char[100];
	strcpy_s(nume, 100, "Twix");
	Produs s = Produs(1, nume, 22);
	con.addElem(s);
	produse = con.getAll();

	assert(produse.size() == 1);
	char* nume1 = new char[100];
	strcpy_s(nume, 100, "Bounty");
	char* nume2 = new char[100];
	strcpy_s(nume, 100, "Mars");
	Produs s1 = Produs(1, nume1, 122);
	Produs s2 = Produs(2, nume2, 3232);
	con.addElem(s1);
	con.addElem(s2);
}