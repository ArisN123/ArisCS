#include <iostream>


#include <string>


struct student{
    private:
    std::string name;
    int age;
    std::string hair_color = "brown";
    
    public: 
    student(std::string student_name, int student_age) : name(student_name), age(student_age){}
    

    void age_plus(int input_num){
        this->age += input_num;
    }

    void get_age(){
        std::cout << age << "\n";
    }
    void get_hair_color(){
        std::cout << hair_color << "\n";
    }

};


int main(){

    student student_1{"Aris",24};

    student_1.get_hair_color();

    student_1.get_age();

    student_1.age_plus(5);

    student_1.get_age();

}