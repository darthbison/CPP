/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   HashEntry.h
 * Author: johnson_marcus
 *
 * Created on January 19, 2019, 6:50 PM
 */

#ifndef HASHENTRY_H
#define HASHENTRY_H

class HashEntry {
public:
    int key;
    int value;
    HashEntry(int key, int value);
    HashEntry(const HashEntry& orig);
    virtual ~HashEntry();

private:

};

#endif /* HASHENTRY_H */

