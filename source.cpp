#include <cstdlib>
#include <ctime>
#include <iostream>

#define MAJOR_VERSION 0
#define MINOR_VERSION 1

using namespace std;

void additionExercise(double* sc, double scUnit, unsigned short digits) {
	int a, b, c;
	srand(time(NULL));

	a = rand() % 9 + 1; b = rand() % 9 + 1;

	cout << a << " + " << b << " = \n>> "; cin >> c;

	if (c == a + b) {
		*sc += scUnit;
		cout << "Correct\n\n";
	} else cout << "Incorrect\n\n";
}

int main() {
	double score = 0; unsigned short questionIndex = 0;

	cout << "Calculation Exerciser " << MAJOR_VERSION << "." << MINOR_VERSION << "\n"
		<< "Copyright (c) The Xphere.\n\n"
		<< "https://github.com/xphere07/Calculation-Exerciser\n"
	// 	<< "Type 'help' to get help."
		<< "\n\n";

	cout << ">> ";
	cin >> questionIndex;
	cout << "\n\n";

	for (int i = 0; i < questionIndex; ++i) {
		cout << i + 1 << ". ";
		additionExercise(&score, 100 / questionIndex, 1);
	}

	cout << "Score: " << score << endl;

	return 0;
}
