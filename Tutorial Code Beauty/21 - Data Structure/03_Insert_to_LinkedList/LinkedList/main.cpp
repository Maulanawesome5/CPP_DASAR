#include <iostream>

using namespace std;

class Node
{
    public:
        int Value;
        Node* Next;
};

void printList(Node*); // function untuk akses/menampilkan linked list
void insertAtFront(Node**, int); // function untuk insert data dari bagian ujung depan block
void insertAtEnd(Node**, int); // function untuk insert data dari bagian ujung belakang block
void insertAfter(Node*, int); // function untuk insert data pada spesifik node

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

    // akses, insert data di dalam linked list
    // insertAtFront(&head, -1);
    // insertAtFront(&head, -2);
    // insertAtEnd(&head, 4);
    // insertAtEnd(&head, 5);
    insertAfter(head, -1);
    insertAfter(second, -2);
    printList(head);

    return 0;
}

void insertAfter(Node* previous, int newVal)
{
    /* Step to inserting data to some specific node */

    // 1. Check if previous node is NULL
    if(previous == NULL)
    {
        cout << "Previous can not be NULL";
        return;
    }

    // 2. Prepare a new node
    Node* newNode = new Node();
    newNode->Value = newVal;

    // 3. Insert newNode after previous
    newNode->Next = previous->Next;
    previous->Next = newNode;
}

void insertAtEnd(Node** head, int newVal)
{
    /* Step to insert data from end of block */

    // 1. Prepare a newNode
    Node* newNode = new Node();
    newNode->Value = newVal;
    newNode->Next = NULL;

    // 2. If linked list is empty, newNode will be a head node
    if(*head == NULL)
    {
        *head = newNode;
        return;
    }

    // 3. Find the last node
    Node* lastNode = *head;
    while(lastNode->Next != NULL)
    {
        lastNode = lastNode->Next;
    }

    // 4. Insert newNode after last node (at the end)
    lastNode->Next = newNode;
}

void insertAtFront(Node** head, int newVal)
{
    /* Step to insert data from front of header block */

    // 1. prepare a new node
    Node* newNode = new Node();
    newNode->Value = newVal;

    // 2. Put it in front of current head
    newNode->Next = *head;

    // 3. Move head of the list to point to the newNode
    *head = newNode;
}

void printList(Node* n)
{
    while(n != NULL)
    {
        cout << n->Value << endl;
        n = n->Next;
    }
}
