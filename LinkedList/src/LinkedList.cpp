#include "LinkedList.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList()
{
    head = NULL;
    curr = NULL;
    temp = NULL;
    //ctor
}

LinkedList::~LinkedList()
{
    //dtor
}

void LinkedList::addNode(int newdata)
{
    Node *nn = new Node;
    nn->data = newdata;
    nn->next = NULL;

    if (head != NULL)           // if no head node
    {
        curr = head;
        while(curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = nn;

    }
    else                        // if head node exist
    {
        head = nn;

    }
}


void LinkedList::delNode(int finddata)
{

}

void LinkedList::printNode(void)
{
    curr = head;
    while (curr != NULL)
    {
        cout << curr->data << endl;
        curr = curr->next;
    }

}
