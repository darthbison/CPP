/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   HashEntry.cpp
 * Author: johnson_marcus
 * 
 * Created on January 19, 2019, 6:50 PM
 */

#include "HashEntry.h"

HashEntry::HashEntry(int key, int value) {
    this->key = key;
    this->value = value;
}

HashEntry::HashEntry(const HashEntry& orig) {
}

HashEntry::~HashEntry() {
}

