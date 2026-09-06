

#include <iostream>

#include <string>


int increase_by_2(int& x){

    x+=2;
    
    return x;

}

int main(){

    int age = 5;


    increase_by_2(age);

    std::cout << "value of age is " << age << "\n";


    return 0;
}