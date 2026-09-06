

#include <iostream>

#include <vector> 


int main(){

    std::vector<int> numbers = {10,20,30};

    std::cout << numbers[0] << "\n";

    numbers.push_back(50);

    numbers[1] = 67;

    std::cout << numbers[1] << "\n";

    std::cout << numbers[numbers.size()-1] << "\n";

    numbers.pop_back();

    std::cout << numbers[numbers.size()-1] << "\n";

}