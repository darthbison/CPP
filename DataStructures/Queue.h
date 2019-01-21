/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Queue.h
 * Author: johnson_marcus
 *
 * Created on January 21, 2019, 1:23 AM
 */

#ifndef QUEUE_H
#define QUEUE_H

struct queuenode {
    int data;
    queuenode *next;
} *front = NULL, *rear = NULL, *p = NULL, *np = NULL;

class Queue {
public:
    Queue();
    void push(int x);
    int remove();
private:

};

#endif /* QUEUE_H */

