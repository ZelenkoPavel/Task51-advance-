#pragma once
#include <iostream>

using namespace std;

class Counter
{
private:
	int min_values;
	int max_values;
	int counting;
public:
	Counter() : min_values(0), max_values(100), counting(min_values){}

	Counter(int min_values) :
		min_values(min_values), max_values(100), counting(min_values) {}

	Counter(int min_values, int max_values) :
		min_values(min_values), max_values(max_values), counting(min_values) {}

	~Counter(){}

	int getCounting();
	void magnificationsTheCounter();
};

