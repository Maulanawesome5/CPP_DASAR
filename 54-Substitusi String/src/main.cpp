#include <iostream>
#include <string>

using namespace std;


int main(int argc, char const *argv[])
{
    string kalimat1("aku suka kamu suka, siapa? dia!");
    string kalimat2("wakanda forevah!!!");
    
    cout << "1. " << kalimat1 << endl;
    cout << "2. " << kalimat2 << endl << endl;
    
    // Swap string
    cout << "swap string" << endl;
    kalimat1.swap(kalimat2);
    cout << "1. " << kalimat1 << endl;
    cout << "2. " << kalimat2 << endl << endl;

    // Replace, mengganti string
    cout << "replace string" << endl;
    kalimat2.replace(27, 3, "otong");
    kalimat1.replace(kalimat1.find("ah"), 2, "er");
    cout << "1. " << kalimat1 << endl;
    cout << "2. " << kalimat2 << endl << endl;

    // Insert string
    kalimat1.insert(8, "dan hatiku ");
    cout << "insert string" << endl;
    cout << "1. " << kalimat1 << endl;
    cout << "2. " << kalimat2 << endl << endl;

    return 0;
}

