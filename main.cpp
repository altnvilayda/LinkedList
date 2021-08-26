#include <iostream>

using namespace std;


class Node
{
    public:
        int elem;
        Node* next;
};

class LinkList
{
    public:
        LinkList();

        void print();
        void add(Node*);
        void rmvBack();

        ~LinkList();

    private:
        Node* head;

};



int main()
{
    cout << "Hello world!" << endl;

    LinkList liste;

    Node* node1 = new Node;
    node1->elem = 1;

    liste.add(node1);
    liste.print();



    return 0;
}

LinkList::LinkList()
{
    head = NULL;
}
void LinkList::add(Node* x)
{
    x->next = head;
    head    = x;

}

void LinkList::print()
{
    Node* cursor = head;
    while(cursor != NULL)
    {
        cout << cursor->elem << endl;
        cursor = cursor->next;
    }

}


LinkList::~LinkList()
{

}



