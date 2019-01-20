/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   HashMapExample.cpp
 * Author: johnson_marcus
 * 
 * Created on January 19, 2019, 6:48 PM
 */

#include "HashMap.h"
#include "HashEntry.h"
#include<cstdlib>
#include<string>
#include<cstdio>
#include<iostream>

using namespace std;
const int TABLE_SIZE = 128;

HashEntry **table;

HashMap::HashMap() {
    table = new HashEntry * [TABLE_SIZE];
    for (int i = 0; i < TABLE_SIZE; i++) {
        table[i] = NULL;
    }
}

/*
 * Hash Function
 */
int HashMap::HashFunc(int key) {
    return key % TABLE_SIZE;
}

/*
 * Insert Element at a key
 */
void HashMap::Insert(int key, int value) {
    int hash = HashFunc(key);
    while (table[hash] != NULL && table[hash]->key != key) {
        hash = HashFunc(hash + 1);
    }
    if (table[hash] != NULL)
        delete table[hash];
    table[hash] = new HashEntry(key, value);
}

/*
 * Search Element at a key
 */
int HashMap::Search(int key) {
    int hash = HashFunc(key);
    while (table[hash] != NULL && table[hash]->key != key) {
        hash = HashFunc(hash + 1);
    }
    if (table[hash] == NULL)
        return -1;
    else
        return table[hash]->value;
}

/*
 * Remove Element at a key
 */
 void HashMap::Remove(int key) {
    int hash = HashFunc(key);
    while (table[hash] != NULL) {
        if (table[hash]->key == key)
            break;
        hash = HashFunc(hash + 1);
    }
    if (table[hash] == NULL) {
        cout << "No Element found at key " << key << endl;
        return;
    } else {
        delete table[hash];
    }
    cout << "Element Deleted" << endl;
}

HashMap::~HashMap() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (table[i] != NULL)
            delete table[i];
        delete[] table;
    }
}