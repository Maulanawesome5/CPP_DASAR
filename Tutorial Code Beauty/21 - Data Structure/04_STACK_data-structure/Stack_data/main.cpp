#include <iostream>
#include <stack>

using namespace std;

// function to write out the stack
void printStackElement(stack<int> stackVal)
{
    while(!stackVal.empty())
    {
        cout << stackVal.top() << endl;
        stackVal.pop();
    }
}

int main()
{
    /**
     * Keyboard rusak -> g, G, h, H, '_', "_"
     *
     * Stack
     * Stack is a type of data collection which uses LIFO
     * technique in order to store element. And LIFO
     * stand for Last In First Out.
    */

    stack<int> numStack;

    // stack push function
    numStack.push(1);
    numStack.push(2);
    numStack.push(3);
    numStack.push(4);

    // stack pop function -> firstly remove the last element
    numStack.pop();

    // custom function to write out element of stack
    printStackElement(numStack);

    // stack empty function -> return true if the stack is empty
    /*
    if( numStack.empty() ) cout << "Stack is empty" << endl;
    else cout << "Stack is not empty" << endl;
    */

    // stack size function -> count how many element in the stack
    cout << "Stack size is " << numStack.size() << endl;


    return 0;
}
