/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: johnson_marcus
 *
 * Created on January 17, 2019, 4:30 PM
 */

#include <cstdlib>
#include <iostream>

#include "HashMap.h"
#include "Heap.h"
#include "LinkedListImpl.h"
#include "QueueImpl.h"
#include "StackImpl.h"

using namespace std;

void HashMapExample();
void HeapExample();
void LinkedListExample();
void QueueExample();
void StackExample();

/*
 * 
 */
int main(int argc, char** argv) {

    //HashMapExample();
    //HeapExample();
    //LinkedListExample();
    //QueueExample();
    StackExample();

    return 0;
}

void StackExample() {
    int choice, item;
    Stack sl;
    while (1)
    {
        cout<<"\n-------------"<<endl;
        cout<<"Operations on Stack"<<endl;
        cout<<"\n-------------"<<endl;
        cout<<"1.Push Element into the Stack"<<endl;
        cout<<"2.Pop Element from the Stack"<<endl;
        cout<<"3.Traverse the Stack"<<endl;
        cout<<"4.Quit"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter value to be pushed into the stack: ";
            cin>>item;
            top = sl.push(top, item);
            break;
        case 2:
            top = sl.pop(top);
            break;
        case 3:
            sl.traverse(top);
            break;
        case 4:
            exit(1);
            break;
        default:
            cout<<"Wrong Choice"<<endl;
        }
    }
}

void QueueExample() {
    int n, c = 0, x;
    Queue q;
    cout << "Enter the number of values to be pushed into queue\n";
    cin>>n;
    while (c < n) {
        cout << "Enter the value to be entered into queue\n";
        cin>>x;
        q.push(x);
        c++;
    }
    cout << "\n\nRemoved Values\n\n";
    while (true) {
        if (front != NULL)
            cout << q.remove() << endl;
        else
            break;
    }
    //getch();
}

void LinkedListExample() {
    int choice, nodes, element, position, i;
    LinkedList sl;
    start = NULL;
    while (1) {
        cout << endl << "---------------------------------" << endl;
        cout << endl << "Operations on singly linked list" << endl;
        cout << endl << "---------------------------------" << endl;
        cout << "1.Insert Node at beginning" << endl;
        cout << "2.Insert node at last" << endl;
        cout << "3.Insert node at position" << endl;
        cout << "4.Sort Link List" << endl;
        cout << "5.Delete a Particular Node" << endl;
        cout << "6.Update Node Value" << endl;
        cout << "7.Search Element" << endl;
        cout << "8.Display Linked List" << endl;
        cout << "9.Reverse Linked List " << endl;
        cout << "10.Exit " << endl;
        cout << "Enter your choice : ";
        cin>>choice;
        switch (choice) {
            case 1:
                cout << "Inserting Node at Beginning: " << endl;
                sl.insert_begin();
                cout << endl;
                break;
            case 2:
                cout << "Inserting Node at Last: " << endl;
                sl.insert_last();
                cout << endl;
                break;
            case 3:
                cout << "Inserting Node at a given position:" << endl;
                sl.insert_pos();
                cout << endl;
                break;
            case 4:
                cout << "Sort Link List: " << endl;
                sl.sort();
                cout << endl;
                break;
            case 5:
                cout << "Delete a particular node: " << endl;
                sl.delete_pos();
                break;
            case 6:
                cout << "Update Node Value:" << endl;
                sl.update();
                cout << endl;
                break;
            case 7:
                cout << "Search element in Link List: " << endl;
                sl.search();
                cout << endl;
                break;
            case 8:
                cout << "Display elements of link list" << endl;
                sl.display();
                cout << endl;
                break;
            case 9:
                cout << "Reverse elements of Link List" << endl;
                sl.reverse();
                cout << endl;
                break;
            case 10:
                cout << "Exiting..." << endl;
                exit(1);
                break;
            default:
                cout << "Wrong choice" << endl;
        }
    }
}

void HeapExample() {
    Heap h;
    while (1) {
        cout << "------------------" << endl;
        cout << "Operations on Heap" << endl;
        cout << "------------------" << endl;
        cout << "1.Insert Element" << endl;
        cout << "2.Delete Minimum Element" << endl;
        cout << "3.Extract Minimum Element" << endl;
        cout << "4.Print Heap" << endl;
        cout << "5.Exit" << endl;
        int choice, element;
        cout << "Enter your choice: ";
        cin>>choice;
        switch (choice) {
            case 1:
                cout << "Enter the element to be inserted: ";
                cin>>element;
                h.Insert(element);
                break;
            case 2:
                h.DeleteMin();
                break;
            case 3:
                cout << "Minimum Element: ";
                if (h.ExtractMin() == -1) {
                    cout << "Heap is Empty" << endl;
                } else
                    cout << "Minimum Element:  " << h.ExtractMin() << endl;
                break;
            case 4:
                cout << "Displaying elements of Hwap:  ";
                h.DisplayHeap();
                break;
            case 5:
                exit(1);
            default:
                cout << "Enter Correct Choice" << endl;
        }
    }
}

void HashMapExample() {
    HashMap hash;
    int key, value;
    int choice;
    while (1) {
        cout << "\n----------------------" << endl;
        cout << "Operations on Hash Table" << endl;
        cout << "\n----------------------" << endl;
        cout << "1.Insert element into the table" << endl;
        cout << "2.Search element from the key" << endl;
        cout << "3.Delete element at a key" << endl;
        cout << "4.Exit" << endl;
        cout << "Enter your choice: ";
        cin>>choice;
        switch (choice) {
            case 1:
                cout << "Enter element to be inserted: ";
                cin>>value;
                cout << "Enter key at which element to be inserted: ";
                cin>>key;
                hash.Insert(key, value);
                break;
            case 2:
                cout << "Enter key of the element to be searched: ";
                cin>>key;
                if (hash.Search(key) == -1) {
                    cout << "No element found at key " << key << endl;
                    continue;
                } else {
                    cout << "Element at key " << key << " : ";
                    cout << hash.Search(key) << endl;
                }
                break;
            case 3:
                cout << "Enter key of the element to be deleted: ";
                cin>>key;
                hash.Remove(key);
                break;
            case 4:
                exit(1);
            default:
                cout << "\nEnter correct option\n";
        }
    }
}

