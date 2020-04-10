#ifndef REPO_H_
#define REPO_H_
#include <iostream>
#include <vector>
#include "Produs.h"
#include "Monede.h"
using namespace std;

template <typename T>
class Repo
{
private:
	vector<Produs> v;
	int len;
	Monede monede;
public:
	Repo() {};
	// default constructor for a DynamicVector
	Repo(const int ln, const Monede mon) :len(ln), monede(mon) {}

	void add(T e) {
		v.push_back(e);
	};

	void remove(int pos) {
		v.erase(v.begin() + pos - 1);
	}

	void listAll() {
		unsigned int i;
		for (i = 0; i < v.size(); i++) {
			cout << v[i].getCod() << " " << v[i].getNume() << " " << v[i].getPret() << endl;
		}
	}

	void update(int pos, T e);

	int getLen() const { return v.size(); }

	std::vector<Produs> getAll() const { return v; }

	int rest(int pret, int suma) {
		//(float)pret;
		int r = suma - pret;
		return r;


		/*if (r < 0) {
			cout << "Bani insuficienti" << endl;

		}
		else {
			while (r >= 0) {

				if (((r - 0.5) >= 0) && (monede.getAll()[2] > 0)) {
					r -= 0.5;

					monede.decrement(2);
				}
				else break;
			}
			while (r >= 0) {

				if ((r >= 0.1) && (monede.getAll()[1] > 0)) {
					r = float(r - 0.1);

					monede.decrement(1);
				}
				else break;
			}
			while (r >= 0) {

				if ((r >= 0.05) && (monede.getAll()[0] > 0)) {
					r = float(r - 0.05);

					monede.decrement(0);
				}
				else break;
			}

			if (r == 0) {
				cout << "Aparatul a dat rest cu succes! " << endl;
			}
			else { cout << "Aparatul nu are monezile necesare pentru rest" << endl; }

			cout << "Aparatul mai are acum: " << monede.getAll()[2] << " monezi de 50 de bani, " << monede.getAll()[1] << " monezi de 10 de bani, " << monede.getAll()[0] << " monezi de 5 de bani. ";
		}*/
	}

};

#endif /* REPO_H_ */

