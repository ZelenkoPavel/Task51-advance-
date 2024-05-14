#include <iostream>
#include "Counter.h"

using namespace std;

int main() {
	Counter counter(0, 3);

	for (int i = 0; i < 8; i++)
	{
		cout << counter.getCounting() << endl;

		counter.magnificationsTheCounter();
	}

	return 0;
}