/*Marcus Johnson
 129976
 Probability and Statistics Project */

#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

// This is the function that handles each P(t) for the 2 by 2 matrix
void calculate(int t, float v1, float v2, float v3, float v4) {

	//Declare integer variable
	int i, j, k;
	int n = 1;
	// Declare float array matrices
	float Q[2][2] = { { v1, v2 }, { v3, v4 } };
	float P[2] = { 1, 0 };
	float P2[2];
	float prod[2];

	// Declare control loop that handles each P(t)
	while (n <= t) {

		cout << "For P(" << n << "):\n";

		float sum = 0;
		j = 0;

		// Declare for loop responsible for multiplying matrices values
		for (k = 0; k < 2; k++) {

			for (i = 0; i < 2; i++) {
				prod[i] = P[i] * Q[i][k];
			}

			// Declare for loop responsible for adding matrices values
			for (int a = 0; a < 2; a++) {
				sum = sum + prod[a];
			}

			P2[j] = sum;
			cout << "Value: " << P2[j] << endl;
			sum = 0;
			j++;

		}

		// Set the temporary P matrix equal to the primary P matrix
		for (int d = 0; d < 2; d++) {
			P[d] = P2[d];
		}

		cout << endl;

		n++;
	}
}

// This is the function that handles each P(t) for the 3 by 3 matrix
void calculate(int t, float v1, float v2, float v3, float v4, float v5,
		float v6, float v7, float v8, float v9) {

	//Declare integer variable
	int i, j, k;
	int n = 1;
	// Declare float array matrices
	float Q[3][3] = { { v1, v2, v3 }, { v4, v5, v6 }, { v7, v8, v9 } };
	float P[3] = { 1, 0, 0 };
	float P2[3];
	float prod[3];

	// Declare control loop that handles each P(t)
	while (n <= t) {

		cout << "For P(" << n << "):" << endl;

		float sum = 0;
		j = 0;

		// Declare for loop responsible for multiplying matrices values
		for (k = 0; k < 3; k++) {

			for (i = 0; i < 3; i++) {
				prod[i] = P[i] * Q[i][k];
			}

			// Declare for loop responsible for adding matrices values
			for (int a = 0; a < 3; a++) {
				sum = sum + prod[a];
			}

			P2[j] = sum;
			cout << "Value: " << P2[j] << endl;
			sum = 0;
			j++;

		}

		// Set the temporary P matrix equal to the primary P matrix
		for (int d = 0; d < 3; d++) {
			P[d] = P2[d];
		}

		cout << endl;
		n++;
	}
}

// This is the function that handles each P(t) for the 4 by 4 matrix
void calculate(int t, float v1, float v2, float v3, float v4, float v5,
		float v6, float v7, float v8, float v9, float v10, float v11, float v12,
		float v13, float v14, float v15, float v16) {

	//Declare integer variable
	int i, j, k;
	int n = 1;
	// Declare float array matrices
	float Q[4][4] = { { v1, v2, v3, v4 }, { v5, v6, v7, v8 }, { v9, v10, v11,
			v12 }, { v13, v14, v15, v16 } };
	float P[4] = { 1, 0, 0, 0 };
	float P2[4];
	float prod[4];

	// Declare control loop that handles each P(t)
	while (n <= t) {

		cout << "For P(" << n << "):" << endl;

		float sum = 0;
		j = 0;

		// Declare for loop responsible for multiplying matrices values
		for (k = 0; k < 4; k++) {

			for (i = 0; i < 4; i++) {
				prod[i] = P[i] * Q[i][k];
			}

			// Declare for loop responsible for adding matrices values
			for (int a = 0; a < 4; a++) {
				sum = sum + prod[a];
			}

			P2[j] = sum;
			cout << "Value: " << P2[j] << endl;
			sum = 0;
			j++;

		}

		// Set the temporary P matrix equal to the primary P matrix
		for (int d = 0; d < 4; d++) {
			P[d] = P2[d];
		}

		cout << endl;
		n++;
	}
}

// This function will provide infomation for the 2 by 2 matrix
void twomatrix() {

	int prob;
	float a = rand() % 10;
	float b = rand() % 10;
	float c = rand() % 10;
	float d = rand() % 10;

	cout << "Random Matrix values will be stored from left to right." << endl;
	cout << "Your Matrix:" << endl;
	cout << "[" << a << "   " << b << "]" << endl;
	cout << "[" << c << "   " << d << "]" << endl;

	cout << "Enter a value t for p(t)" << endl;
	cin >> prob;
	calculate(prob, a, b, c, d);
}

// This function will provide information for the 3 by 3 matrix
void threematrix() {
	int prob;

	cout << "Random Matrix values will be stored from left to right." << endl;
	float a = rand() % 10;
	float b = rand() % 10;
	float c = rand() % 10;
	float d = rand() % 10;
	float e = rand() % 10;
	float f = rand() % 10;
	float g = rand() % 10;
	float h = rand() % 10;
	float i = rand() % 10;

	cout << "\nYour Matrix:" << endl;
	cout << "[" << a << "   " << b << "   " << c << "]" << endl;
	cout << "[" << d << "   " << e << "   " << f << "]" << endl;
	cout << "[" << g << "   " << h << "   " << i << "]" << endl;

	cout << "Enter a value t for p(t)" << endl;
	cin >> prob;
	calculate(prob, a, b, c, d, e, f, g, h, i);
}

// This function will provide information for the 4 by 4 matrix
void fourmatrix() {
	int prob;
	cout << "Random Matrix values will be stored from left to right." << endl;

	float a = rand() % 10;
	float b = rand() % 10;
	float c = rand() % 10;
	float d = rand() % 10;
	float e = rand() % 10;
	float f = rand() % 10;
	float g = rand() % 10;
	float h = rand() % 10;
	float i = rand() % 10;
	float j = rand() % 10;
	float k = rand() % 10;
	float l = rand() % 10;
	float m = rand() % 10;
	float n = rand() % 10;
	float o = rand() % 10;
	float p = rand() % 10;

	cout << "\nYour Matrix:" << endl;
	cout << "[" << a << "   " << b << "   " << c << "   " << d << "]" << endl;
	cout << "[" << e << "   " << f << "   " << g << "   " << h << "]" << endl;
	cout << "[" << i << "   " << j << "   " << k << "   " << l << "]" << endl;
	cout << "[" << m << "   " << n << "   " << o << "   " << p << "]" << endl;

	cout << "Enter a value t for p(t)" << endl;
	cin >> prob;
	calculate(prob, a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);
}

// Main Function
int main() {

	char characters = ' ';

	cout << "Marcus Johnson\n";
	cout << "Probability and Statistics\n";
	cout << "Project involving Markov Chains 2\n";
	cout << "This program finds the convergence to a 2 by 2, 3 by 3, or a 4 by 4 matrix.\n";

	while (characters != 'd') {
		cout
				<< "Choose a (2 by 2), b (3 by 3), c (4 by 4), or d (End Program): "
				<< endl;
		cin >> characters;
		switch (characters) {
		case 'a':
			twomatrix();
			break;
		case 'b':
			threematrix();
			break;
		case 'c':
			fourmatrix();
			break;
		case 'd':
			break;
		default:
			break;
		}
	}

	return 0;
}

