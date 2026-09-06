

#include <iostream>

#include <string>

int main(){

    int value_1 = 5;

    int& reference_value_1 = value_1;

    std::cout << "value 1 is " << value_1 << "\n";

    reference_value_1 = 10;

    std::cout << "value 1 is " << value_1 << "\n";



    return 0;
}