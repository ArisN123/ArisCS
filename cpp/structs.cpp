#include <iostream>
#include <string>
#include <vector>

int main(){

    struct user{
        std::string name;
        int age;
        float score;

        void happy_birthday()const{
            std::cout << "Happy Birthday " << name << "\n";
        }

        void add_1_to_age(){
            age += 1;
        }
    };

    user user1 = {"Aris",24,5.5};
    user user2 = {"Chapas",25,4.5};
    
    std::vector<user*> userlist = {&user1,&user2};

    for(user* user:userlist){
        user->score += 1 ;
        std::cout << "My name is " << user->name << " my score is " << user->score << "\n";
    }

    for(user* user:userlist){
        std::cout << "My name is " << user->name << " my score is " << user->score << "\n";
    }

    user1.happy_birthday();

    user1.add_1_to_age();

    std::cout << user1.age << "\n";



}