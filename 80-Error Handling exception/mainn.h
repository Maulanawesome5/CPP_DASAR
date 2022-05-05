#include <iostream>
#include <exception>

try{
    throw "Sesuatu";
}catch(const char* e){
    std::cout << e << std::endl;
}
