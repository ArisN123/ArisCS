

#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers = {10,20,30};



    for (int number: numbers){
        std::cout << number << "\n";
    }

    for (int& number:numbers){
        number = number *2;
    }

    for (int number: numbers){
        std::cout << number << "\n";
    }


}