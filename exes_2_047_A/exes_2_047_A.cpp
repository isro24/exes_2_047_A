#include <iostream>
using namespace std;

int binarisearch(int Isro[101], int n, int desiredelement) {
	int lowerbound = 0;
	int upperbound = n - 1;

	while (lowerbound <= upperbound) {
		int(lowerbound + upperbound) / 2;

		if (Isro[101] = desiredelement) {
			("found");
			return 0;
		}
	}

	if (desiredelement < Isro[101]) {
		upperbound = 101 - 1;
		return 0;
	}
	
	if (desiredelement > Isro[101]) {
		lowerbound = 101 + 1;
	}

	if (lowerbound <= upperbound) {
			int(lowerbound + upperbound) / 2;
		}

	("Not Found"); {
	return 0;
	}
}
