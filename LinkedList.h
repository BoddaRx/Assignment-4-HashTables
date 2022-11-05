#ifndef LinkedList_h
#define LinkedList_h

#include <iostream>
#include <string>

using namespace std;

struct node
{
    string key;
    string value;
    node* next;
};

class LinkedList
{
private:
    int n_elements;
    Node* table[10];
    int hash(string key);
    
public:
    LinkedList()
    {
        n_elements = 0;
        for (int i = 0; i < 10; i++)
            table[i] = NULL;
    }
    
    int HashFunction_LL(string key)
    {
        int sum = 0;
        for (int i = 0; i < key.length(); i++)
            sum += key[i];
        return sum % 10;
    }
    
    void insert_LL(string ID, string Name)
    {
        Node* n = new Node;
        n->key = ID;
        n->value = Name;
        n->next = NULL;
        
        int index = HashFunction_LL(ID);
        
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
    
    void remove_LL(string Name)
    {
        int index = HashFunction_LL(Name);
        if (table[index] == NULL)
            cout << "Employee not found" << endl;
        else if (table[index]->key == Name)
        {
            Node* temp = table[index];
            table[index] = table[index]->next;
            delete temp;
            n_elements--;
        }
        else
        {
            Node* p1 = table[index], *p2 = table[index];
            while(p2 != NULL && p2->key != Name)
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
    
    void print_LL()
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

#endif /* LinkedList_h */
