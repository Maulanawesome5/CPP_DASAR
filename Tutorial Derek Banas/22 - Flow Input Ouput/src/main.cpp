#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    /**
     * @brief Flow IO
     * @author Maulana Aji Wicaksono
     * @attention Belajar read and write menjadi eksternal file.
     * Library <ftream> diperlukan untuk memakai ofstream dan ifstream
     * @warning my keyboard error. copy paste -> g, h, '_', "_"
    */

    ofstream writeToFile;
    ifstream readFromFile;
    string textToWrite = "";
    string textFromFile = "";

    // Menulis text dari console, disimpan ke dalam file test.txt
    writeToFile.open("test.text", ios_base::out | ios_base::trunc);
    if(writeToFile.is_open()){
        writeToFile << "Beginning of File\n";
        cout << "Enter data to write : ";
        getline(cin, textToWrite);
        writeToFile << textToWrite;
        writeToFile.close();
    }

    readFromFile.open("test.txt", ios_base::in);
    if(readFromFile.is_open()){
        while(readFromFile.good()){
            getline(readFromFile, textFromFile);
            cout << textFromFile << endl;
        }
        readFromFile.close();
    }


    return 0;
}

