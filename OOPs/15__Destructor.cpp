#include <iostream>
using namespace std;

// Destructor
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void insert(int val)
    {
        Node *tmp = new Node(val);
        tmp->next = head;
        head = tmp;
    }

    void show()
    {
        for (Node *tmp = head; tmp != NULL; tmp = tmp->next)
        {
            cout << tmp->data << " ";
        }
        cout << endl;
    }

    ~LinkedList()
    {
        cout << "\nDestructor Called " << endl;
        while (head)
        {
            Node *tmp = head;
            head = head->next;
            cout << "Deleting " << tmp->data << endl;
            delete tmp;
        }
    }
};

int main()
{
    LinkedList l;
    l.insert(10);
    l.insert(20);
    l.insert(30);
    l.insert(40);
    l.show();

    return 0;
}
