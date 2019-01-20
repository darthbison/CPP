/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Heap.h
 * Author: johnson_marcus
 *
 * Created on January 19, 2019, 7:47 PM
 */

#ifndef HEAP_H
#define HEAP_H

#include <vector>

class Heap {
private:
    std::vector <int> heap;
    int left(int parent);
    int right(int parent);
    int parent(int child);
    void heapifyup(int index);
    void heapifydown(int index);
public:

    Heap();
    void Insert(int element);
    void DeleteMin();
    int ExtractMin();
    void DisplayHeap();
    int Size();


};

#endif /* HEAP_H */

