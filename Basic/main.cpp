/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: johnson_marcus
 *
 * Created on January 17, 2019, 4:35 PM
 */

#include <cstdlib>
#include <iostream>
#include "Iteration.h"
#include "Recursion.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int choice;
	double s;

	Recursion rec;
	Iteration itr;

	cout << "Choose (1) for recursion or (2) for iteration: \n";
	cin >> choice;

	cout << "Enter Number: ";
	cin >> s;

	switch (choice) {
	case 1:
        cout << rec.product(s);
		break;
	case 2:
		cout << itr.productIteration(s);
		break;
	default:
		cout << "Enter appropriate choice\n";
	}
    
    return 0;
}

