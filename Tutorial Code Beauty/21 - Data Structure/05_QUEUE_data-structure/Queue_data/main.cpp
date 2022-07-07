#include <iostream>
#include <queue>

using namespace std;

// custom function to preview all element of Queue
void printQueue(queue<int> queueNumbers)
{
    while( !queueNumbers.empty() )
    {
        cout << queueNumbers.front() << " ";
        queueNumbers.pop();
    }
    cout << endl;
}

int main()
{
    /**
     * Keyboard rusak -> g, G, h, H, '_', "_"
     *
     * QUEUE
     * QUEUE is a FIFO (First In First Out) data structure.
     * The first element of the queue will be push out first
    */

    queue<int> myNumQueue;
    myNumQueue.push(1);
    myNumQueue.push(2);
    myNumQueue.push(3);

    /* Default function to manage queue data type */
    cout << "Size of my Queue : " << myNumQueue.size() << endl;
    cout << "First element of my Queue : " << myNumQueue.front() << endl;
    cout << "Last element of my Queue  : " << myNumQueue.back() << endl;

    /* Custom function to write all queue element */
    cout << "\nMy queue element: " << endl;
    printQueue(myNumQueue);

    return 0;
}
