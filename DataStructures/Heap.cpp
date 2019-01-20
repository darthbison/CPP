/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Heap.cpp
 * Author: johnson_marcus
 * 
 * Created on January 19, 2019, 7:47 PM
 */

#include "Heap.h"
#include<iostream>

using namespace std;

Heap::Heap() {}
/*
 * Return Heap Size
 */
int Heap::Size()
{
    return heap.size();
}
 
/*
 * Insert Element into a Heap
 */
void Heap::Insert(int element)
{
    heap.push_back(element);
    heapifyup(heap.size() -1);
}
/*
 * Delete Minimum Element
 */
void Heap::DeleteMin()
{
    if (heap.size() == 0)
    {
        cout<<"Heap is Empty"<<endl;
        return;
    }
    heap[0] = heap.at(heap.size() - 1);
    heap.pop_back();
    heapifydown(0);
    cout<<"Element Deleted"<<endl;
}
 
/*
 * Extract Minimum Element
 */
int Heap::ExtractMin()
{
    if (heap.size() == 0)
    {
        return -1;
    }
    else
        return heap.front();
}
 
/*
 * Display Heap
 */
void Heap::DisplayHeap()
{
    vector <int>::iterator pos = heap.begin();
    cout<<"Heap -->  ";
    while (pos != heap.end())
    {
        cout<<*pos<<" ";
        pos++;
    }
    cout<<endl;
}
 
/*
 * Return Left Child
 */
int Heap::left(int parent)
{
    int l = 2 * parent + 1;
    if(l < heap.size())
        return l;
    else
        return -1;
}
 
/*
 * Return Right Child
 */
int Heap::right(int parent)
{
    int r = 2 * parent + 2;
    if(r < heap.size())
        return r;
    else
        return -1;
}
 
/*
 * Return Parent
 */
int Heap::parent(int child)
{
    int p = (child - 1)/2;
    if(child == 0)
        return -1;
    else
        return p;
}
 
/*
 * Heapify- Maintain Heap Structure bottom up
 */
void Heap::heapifyup(int in)
{
    if (in >= 0 && parent(in) >= 0 && heap[parent(in)] > heap[in])
    {
        int temp = heap[in];
        heap[in] = heap[parent(in)];
        heap[parent(in)] = temp;
        heapifyup(parent(in));
    }
}
 
/*
 * Heapify- Maintain Heap Structure top down
 */
void Heap::heapifydown(int in)
{
 
    int child = left(in);
    int child1 = right(in);
    if (child >= 0 && child1 >= 0 && heap[child] > heap[child1])
    {
       child = child1;
    }
    if (child > 0)
    {
        int temp = heap[in];
        heap[in] = heap[child];
        heap[child] = temp;
        heapifydown(child);
    }
}

