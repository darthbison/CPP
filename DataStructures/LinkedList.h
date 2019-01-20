/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedList.h
 * Author: johnson_marcus
 *
 * Created on January 20, 2019, 9:48 AM
 */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include<cstdio>

struct node {
    int info;
    struct node *next;
} *start;

class LinkedList {
 
public:
    
    node* create_node(int);
    void insert_begin();
    void insert_pos();
    void insert_last();
    void delete_pos();
    void sort();
    void search();
    void update();
    void reverse();
    void display();

    LinkedList() {
        start = NULL;
    }

private:

};

#endif /* LINKEDLIST_H */

