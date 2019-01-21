/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   QueueImpl.h
 * Author: johnson_marcus
 *
 * Created on January 21, 2019, 1:25 AM
 */

#ifndef QUEUEIMPL_H
#define QUEUEIMPL_H

#include <cstdlib>
#include <iostream>
#include "Queue.h"

using namespace std;

Queue::Queue() {
}

void Queue::push(int x) {
    np = new queuenode;
    np->data = x;
    np->next = NULL;
    if (front == NULL) {
        front = rear = np;
        rear->next = NULL;
    } else {
        rear->next = np;
        rear = np;
        rear->next = NULL;
    }
}

int Queue::remove() {
    int x;
    if (front == NULL) {
        cout << "empty queue\n";
    } else {
        p = front;
        x = p->data;
        front = front->next;
        delete(p);
        return (x);
    }
    return 0;
}



#endif /* QUEUEIMPL_H */

