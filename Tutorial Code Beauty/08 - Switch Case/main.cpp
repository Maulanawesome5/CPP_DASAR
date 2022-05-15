#include <iostream>

using namespace std;

int main()
{
    /*
     * percabangan Switch Case
     * studi kasus kalkulator console
    */

    float num1, num2;
    char operators;

    cout << "**CodeBeauty Calculator**" << endl;
    cin >> num1 >> operators >> num2;

    switch(operators){
        case '-':
            cout << num1 << operators << num2 << " = ";
            cout << num1 - num2 << endl;
            break;

        case '+':
            cout << num1 << operators << num2 << " = ";
            cout << num1 + num2 << endl;
            break;

        case '/':
            cout << num1 << operators << num2 << " = ";
            cout << num1 / num2 << endl;
            break;

        case '*':
            cout << num1 << operators << num2 << " = ";
            cout << num1 * num2 << endl;
            break;

        case '%':
            bool isNum1Int, isNum2Int;
            isNum1Int = ((int)num1 == num1);
            isNum2Int = ((int)num2 == num2);

            if(isNum1Int && isNum2Int){
                cout << num1 << operators << num2 << " = ";
                cout << (int)num1 % (int)num2 << endl;
                break;
            } else {
                cout << "Not valid !" << endl;
            }
            break;

        default:
            cout << "Default: Not valid operation !" << endl;
    }


    return 0;
}
