/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StackImpl.h
 * Author: johnson_marcus
 *
 * Created on January 21, 2019, 10:10 AM
 */

#ifndef STACKIMPL_H
#define STACKIMPL_H

#include<iostream>
#include "Stack.h"

using namespace std;


/*
 * Push Element into the Stack
 */
stacknode *Stack::push(stacknode *top, int item)
{
    stacknode *tmp;
    tmp = new (struct stacknode);
    tmp->info = item;
    tmp->link = top;
    top = tmp;
    return top;
}
 
/*
 * Pop Element from the Stack
 */
stacknode *Stack::pop(stacknode *top)
{
    stacknode *tmp;
    if (top == NULL)
        cout<<"Stack is Empty"<<endl;
    else
    {       
        tmp = top;
        cout<<"Element Popped: "<<tmp->info<<endl;
        top = top->link;
        delete(tmp);
    }
    return top;
}
 
/*
 * Traversing the Stack
 */
void Stack::traverse(stacknode *top)
{       
    stacknode *ptr;
    ptr = top;
    if (top == NULL)
        cout<<"Stack is empty"<<endl;
    else
    {
        cout<<"Stack elements :"<<endl;
        while (ptr != NULL)
        {
            cout<<ptr->info<<endl;
            ptr = ptr->link;
        }
    }
}


#endif /* STACKIMPL_H */

