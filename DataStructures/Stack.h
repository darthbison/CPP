/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Stack.h
 * Author: johnson_marcus
 *
 * Created on January 21, 2019, 10:09 AM
 */

#ifndef STACK_H
#define STACK_H

#include<cstdlib>

struct stacknode {
    int info;
    struct stacknode *link;
} *top;

class Stack {
public:
    
    stacknode *push(stacknode *, int);
    stacknode *pop(stacknode *);
    void traverse(stacknode *);
    Stack() {
        top = NULL;
    }
private:

};

#endif /* STACK_H */

