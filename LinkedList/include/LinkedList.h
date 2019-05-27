#ifndef LINKEDLIST_H
#define LINKEDLIST_H


class LinkedList
{
    public:
        LinkedList();
        virtual ~LinkedList();
        void addNode(int newdata);
        void delNode(int finddata);
        void printNode(void);

    protected:

    private:
        struct Node
        {
            int data;
            Node* next;
        };

        Node *head;
        Node *curr;
        Node *temp;
};

#endif // LINKEDLIST_H
