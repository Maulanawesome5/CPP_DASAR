#include <iostream>

using namespace std;

int main()
{
    /* BMI (Body Mass Index) Calculator
     * weight(kg) / height * height(m)
     * underweight < 18,5
     * normal weight 18,5 ... 24,9
     * overweight > 25
    */

    float weight, height;
    cout << "Please enter your weight(kg) : ";
    cin >> weight;
    cout << "\nThen please enter your height(m) : ";
    cin >> height;

    float bmi;
    bmi = weight / (height * height);
    if(bmi < 18.5) cout << "Underweight" << endl;
    else if(bmi > 25) cout << "Overweight" << endl;
    else cout << "Normal weight" << endl;

    cout << "Your BMI is " << bmi << endl;

    return 0;
}
