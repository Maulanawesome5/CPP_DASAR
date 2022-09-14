#include <iostream>
#include <string>

using namespace std;

class Node {
    public:
        int value;
        Node* next;
        Node* previous;
};

void print_forward(Node*); // Function to print front element from class Node
void print_backward(Node*); // Function to print back element from class Node

int main(int argc, char const *argv[])
{
    /**
     * @brief Belajar tipe data Double Linked List
     * Double Linked List merupakan pengembangan dari data collection Linked List (single).
     * Double linked list memiliki dua pointer yang menghubungkan antara list sebelumnya dan list selanjutnya.
     * Pointer previous list pertama = NULL
     * Pointer next list terakhir = NULL
     * 
     * Kelemahan double linked list :
     * Karena terdapat dua pointer, pemakaian memory bertambah besar.
     * Harus berhati-hati jika ingin menghapus atau mengubah list, karena saling terhubung
     * akibat memakai dua pointer (previous dan next).
     * 
     * @warning keyboard error -> g, G, h, H, '_', "_"
     */

    Node* head;
    Node* tail;

    /** @brief tahapan membuat double linked list
     * Membuat node pertama
     * 1. Membuat node baru
     * 2. node -> value = 4
     * 3. node -> next = nullptr, node -> previous = nullptr
     * 4. head = node, tail = node
    */
    Node* myNode = new Node();
    myNode->value = 4;
    myNode->next = nullptr;
    myNode->previous = nullptr;
    head = myNode;
    tail = myNode;

    /** @brief tahapan membuat double linked list
     * Membuat node kedua dan seterusnya
     * 1. Membuat node baru
     * 2. node -> value = 5
     * 3. node -> next = nullptr, node -> previous = tail
     * 4. tail->next = node, tail = node
    */
    myNode = new Node();
    myNode->value = 5;
    myNode->next = nullptr;
    myNode->previous = tail;
    tail->next = myNode;
    tail = myNode;

    myNode = new Node();  // 3rd element
    myNode->value = 6;
    myNode->next = nullptr;
    myNode->previous = tail;
    tail->next = myNode;
    tail = myNode;

    myNode = new Node();  // 4th element
    myNode->value = 7;
    myNode->next = nullptr;
    myNode->previous = tail;
    tail->next = myNode;
    tail = myNode;

    print_forward(head);
    print_backward(tail);


    return 0;
}

void print_forward(Node* head)
{
    Node* traverser = head;
    cout << "\nPrint forward" << endl;
    while(traverser != nullptr){
        cout << traverser->value << endl;
        traverser = traverser->next;
    }
}

void print_backward(Node* tail)
{
    Node* traverser = tail;
    cout << "\nPrint backward" << endl;
    while(traverser != nullptr){
        cout << traverser->value << endl;
        traverser = traverser->previous;
    }
}
