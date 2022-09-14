#include <iostream>
#include <map>
#include <unordered_map>
#include <string>


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

    std::map<std::string, std::string> myDictionary;

    // cara insert data ke dalam map
    myDictionary.insert(std::pair<std::string, std::string>("apple", "der Apfel"));
    myDictionary.insert(std::pair<std::string, std::string>("orange", "die Orange, die Apfelsine"));
    myDictionary.insert(std::pair<std::string, std::string>("strawberry", "die Erdbeere"));
    myDictionary.insert(std::pair<std::string, std::string>("banana", "die Banane"));

    // cara hapus satu item di dalam map
    myDictionary.erase("orange");

    // cara menampilkan item di dalam map
    for(auto pair: myDictionary){
        std::cout << pair.first << " - " << pair.second << std::endl;
    }

    std::cout << std::endl;

    std::unordered_map<std::string, std::string> yourDictionary; // jika data tidak ingin di urutkan

    yourDictionary.insert(std::pair<std::string, std::string>("apple", "der Apfel"));
    yourDictionary.insert(std::pair<std::string, std::string>("orange", "die Orange, die Apfelsine"));
    yourDictionary.insert(std::pair<std::string, std::string>("strawberry", "die Erdbeere"));
    yourDictionary.insert(std::pair<std::string, std::string>("banana", "die Banane"));

    // unordered_map akan menampilkan data sesuai yang pertama masuk (data tidak terurut)
    for(auto pair: yourDictionary){
        std::cout << pair.first << " - " << pair.second << std::endl;
    }

    std::cout << std::endl;

    // cara akses satu data berdasarkan key
    myDictionary["strawberry"] = "Die Erdbeere";
    std::cout << myDictionary["strawberry"] << std::endl;

    // mengetahui jumlah isi data dalam map
    std::cout << myDictionary.size() << " data di dalam myDictionary." << std::endl;
    std::cout << yourDictionary.size() << " data di dalam yourDictionary" << std::endl;


    return 0;
}
