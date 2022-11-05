#ifndef Hash_h
#define Hash_h
#include "Employee.h"
#include <iostream>
#include <string>

using namespace std;

struct Node
{
    string key;
    string value;
    Node* next;
};

class HashTable
{
private:
    int n_elements;
    Node* table[10];
    int hash(string key);
    
public:
    HashTable()
    {
        n_elements = 0;
        for (int i = 0; i < 10; i++)
            table[i] = NULL;
    }
    
    int HashFunction(string key)
    {
        int sum = 0;
        for (int i = 0; i < key.length(); i++)
            sum += key[i];
        return sum % 10;
    }
    
    void insert(string ID, string Name)
    {
        Node* n = new Node;
        n->key = ID;
        n->value = Name;
        n->next = NULL;
        
        int index = HashFunction(ID);
        
        if (table[index] == NULL)
        {
            table[index] = n;
            n_elements++;
        }
        else
        {
            Node * temp = table[index];
            while (temp->key != ID && temp->next != NULL)
                temp = temp->next;
            if (temp->key == ID)
                cout << "Employee exists." << endl;
            else
            {
                temp->next = n;
                n_elements++;
            }
        }
    }
    
    void remove (string ID)
    {
        int index = HashFunction(ID);
        if (table[index] == NULL)
            cout << "Employee not found" << endl;
        else if (table[index]->key == ID)
        {
            Node* temp = table[index];
            table[index] = table[index]->next;
            delete temp;
            n_elements--;
        }
        else
        {
            Node* p1 = table[index], *p2 = table[index];
            while(p2 != NULL && p2->key != ID)
            {
                p1 = p2;
                p2 = p2->next;
            }
            if (p2 == NULL)
                cout << "Employee not found" << endl;
            else
            {
                p1->next = p2->next;
                delete p2;
                n_elements--;
            }
        }
    }
    
    void print()
    {
        for(int i = 0; i < 10; i++)
        {
            if(table[i] != NULL)
            {
                cout << i << ":  ";
                Node* temp = table[i];
                while (temp != NULL)
                {
                    cout << temp->key << ", " << temp->value << endl << '\t';
                    temp = temp->next;
                }
                cout << endl;
            }
        }
    }
    
};

#endif /* Hash_h */
