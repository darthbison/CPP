/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Iteration.h"

Iteration::Iteration(){}

// Define function that takes the product of n numbers
double Iteration::productIteration(double n) {
	//Initialize counter at 1
	double p = 1;
	double result;
	if (n == 0 || n == 1)
		return 1;
	else
	{
		for (p = n; p >= 2; p--)
		{
			result = (n) * p;
		}
	}
	return result;
}
