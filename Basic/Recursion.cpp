/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Recursion.h"

Recursion::Recursion() {}

// Define function that takes the product of n numbers
double Recursion::product(double n)
{
        if (n==1 || n==0)
        return 1;
        else
        return (product(n-1)*n);

}