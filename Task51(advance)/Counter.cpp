#include "Counter.h"


int resetting(int min_values, int max_values, int counting) {
	if (counting >= max_values) {
		return min_values + counting % max_values;
	}

	return counting;
}

int Counter::getCounting() {
	counting = resetting(min_values, max_values, counting);

	return counting;
}
void Counter::magnificationsTheCounter() {
	counting = resetting(min_values, max_values, counting);

	counting++;
}