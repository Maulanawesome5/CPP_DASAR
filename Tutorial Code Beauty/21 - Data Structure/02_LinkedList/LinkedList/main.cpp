#include <iostream>

using namespace std;

class Node
{
    public:
        int Value;
        Node* Next;
};

// akses/menampilkan linked list
void printList(Node*);

int main()
{
    /**
     * Copy keyboard error -> g, G, h, H, '_', "_"
     *
     * Linked List
     * is a data structure which mean that it is use
     * to store and organize data but unlike array which
     * store data one after the other in memory, a linked list
     * is a non-continues collection.
     * Which mean that it does not store data one after
     * the other but the element of a linked list are randomly
     * positioned in memory.
     *
     * by Saldina Nurak.
    */

    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->Value = 1; /**< inisialisasi nilai */
    head->Next = second; /**< connect to next block address */
    second->Value = 2;
    second->Next = third;
    third->Value = 3;
    third->Next = NULL;

    // akses linked list
    printList(head);

    return 0;
}

void printList(Node* n)
{
    while(n != NULL)
    {
        cout << n->Value << endl;
        n = n->Next;
    }
}
