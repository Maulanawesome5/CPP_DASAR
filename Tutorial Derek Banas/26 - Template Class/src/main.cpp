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

template <typename T, typename U>
class Person{
    public:
        T height;
        T weight;
        static int numOfPeople;

        Person(T h, U w){
            this->height = h;
            this->weight = w;
            numOfPeople++;
        }
        void getPersonData(){
            cout << "height : " << height << ", and weight : " << weight << endl;
        }
};

template<typename T, typename U> int Person<T, U>::numOfPeople;

int main(int argc, char const *argv[])
{
    // my keyboard error. copy paste t_is ---> g, h, '_', "_"
    Person<double, int> mikeTyson(5.83, 216);
    mikeTyson.getPersonData();
    cout << "Number of People : " << mikeTyson.numOfPeople << endl;


    return 0;
}
