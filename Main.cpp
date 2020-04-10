#include "Service.h"
#include "ui.h"
#include "test.h"
#include "repository.h"
#include <cstring>
using namespace std;

int main()
{
	/*testProdus();
	testRepo();*/
	Repo <Produs> repo = repo;
	Service ctrl = Service(repo);
	UI ui {ctrl};
	ui.run();

	return 0;
} 