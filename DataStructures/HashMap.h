/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   HashMapExample.h
 * Author: johnson_marcus
 *
 * Created on January 19, 2019, 6:48 PM
 */

#ifndef HASHMAPEXAMPLE_H
#define HASHMAPEXAMPLE_H

#include<cstdlib>
#include<string>
#include<cstdio>



using namespace std;

class HashMap {
    private:
        
    public:   
      HashMap();
      int HashFunc(int key);
      void Insert(int key, int value);
      int Search(int key);
      void Remove(int key);
      virtual ~HashMap();
	

};

#endif /* HASHMAPEXAMPLE_H */

