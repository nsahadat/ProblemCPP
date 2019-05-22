#include <iostream>
//using namespace std;

class Node
{
    public:
        int val;
        Node *next;


        Node(int Val);
        //virtual ~Node();
        void traverseList(Node *n);
        void reverseList(Node *current);

    //protected:

    //private:
};


int main()
{


    //cout << "Hello world!" << endl;
    //Node *head, *n1, *n2, *n3, *tail;   // initialize it
    int len = 20;
    Node *n[len];

/*
    // creating the nodes
    head = new Node();
    n1 = new Node();
    n2 = new Node();
    n3 = new Node();
    tail = new Node();
 */
    for (int i=0;i<len; i++)
    {
        n[i] = new Node(i);
    }

    // populate the linked list

    for (int i=0;i<len; i++)
    {
        //n[i]->val = i + 1;
        n[i]->next = n[i+1];
    }

    //n[len] = new Node();
    //n[len]->val = len + 1;
    n[len-1]->next = NULL;

/*
    head->val = 0;
    head->next = n1;

    n1->val = 1;
    n1->next = n2;

    n2->val = 2;
    n2->next = n3;

    n3->val = 3;
    n3->next = tail;

    tail->val = 4;
    tail->next = NULL;


    // creating the nodes
    /*
    head = new Node(0, n1);
    n1 = new Node(1, n2);
    n2 = new Node(2, n3);
    n3 = new Node(3, tail);
    tail = new Node(4, NULL);
    */
    Node LL(0);
    LL.traverseList(n[0]);
    LL.reverseList(n[0]);
    LL.traverseList(n[19]);

    return 0;
}

void Node:: traverseList(Node *n)
{
    using namespace std;
    while (n != NULL)
    {
        cout << n->val << endl;
        n = n->next;
    }
}

void Node:: reverseList(Node *current)
{
    Node *prev = NULL, *next = NULL;

    while (current != NULL)
    {
        next = current->next;   // store current next
        current->next = prev; // reverse the link

        // move forward
        prev = current;
        current = next;    // move on to the next value

    }
    current = prev;
}

Node::Node(int Val)
{
    val = Val;
    next = NULL;
}


