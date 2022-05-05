#include <iostream>

/* Namespace
 * Namespace merupakan penanda atau signature dari suatu fungsi, variabel, class, dsb.
 * Namespace berfungsi untuk menghindari ambigu karena penamaan yang sama.
*/

void fungsi(){
    std::cout << "Hello world!" << std::endl;
}

namespace kustom{
    int b = 10;

    void fungsi(){
        std::cout << "Hello world! dalam namespace kustom" << std::endl;
    }
}

int main()
{
    fungsi();
    // std::cout << b << std::endl; // error: 'b' was not declare in this scope
    std::cout << kustom::b << std::endl;
    kustom::fungsi(); // akan ambigous jika kustom:: dihapus




    return 0;
}
