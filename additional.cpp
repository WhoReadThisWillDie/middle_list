#include "middle_list.h"

void print_vector(vector <char> &mass)
{
	if (mass.size() > 0) {
		for (int i = 0; i < mass.size(); i++) {
			cout << mass[i] << " ";
		}
	}
}
