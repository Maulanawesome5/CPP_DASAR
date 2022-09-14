#include <iostream>
#include <map>
#include <list>
#include <string>

using namespace std;
int main(int argc, char const *argv[])
{
    /**
     * @brief Belajar tipe data map pada c++
     * Map merupakan tipe data collection yang terdiri dari
     * pasangan key - value (mirip dictionary di bahasa python).
     * map <string, string> artinya key bertipe data str, dan value bertipe str.
     * Map bersifat ordered ascending, artinya data akan diurutkan dari awal
     * misalkan disini memakai string, maka akan diurutkan sesuai alfabet
     * berdasarkan nama key-nya.
     * Lalu penamaan key juga tidak boleh duplikat atau kembar dengan key lainnya.
     * 
     * @warning keyboard error -> g, G, h, H, '_', "_"
     */

    // gabungan collection data map bertipe str dan list-str
    map<string, list<string>> pokedex;

    list<string> pikachu_attack {"thunder shock", "tail whip", "quick attack"};
    list<string> charmander_attack {"flame thrower", "scary face"};
    list<string> chikorita_attack {"razor leaf", "poison powder"};

    /** @brief cara memasukkan list ke dalam map */
    pokedex.insert(pair< string, list<string> >("Pikachu", pikachu_attack));
    pokedex.insert(pair< string, list<string> >("Charmander", charmander_attack));
    pokedex.insert(pair< string, list<string> >("Chikorita", chikorita_attack));

    for(auto pair: pokedex)
    {
        cout << pair.first << " - {";
        for(auto attack: pair.second)
        {
            cout << attack << ", ";
        }
        cout << "}" << endl;
    }


    return 0;
}
