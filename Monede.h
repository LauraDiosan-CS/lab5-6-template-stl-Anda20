#ifndef MONEDE_H
#define MONEDE_H
#include <iostream>
#include <vector>

using namespace std;

class Monede {
private:
	vector<int>monede;
public:
	void addMoneda(int m) {
		monede.push_back(m);
	}
	int getLen() {
		return monede.size();
	}
	vector<int>getAll() {
		return monede;
	}
	void decrement(int poz) {
		monede[poz]--;
	}
};

#endif // !MONEDE_H
