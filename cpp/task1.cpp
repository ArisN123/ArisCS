// score tracker 

#include <iostream>

#include <vector>

#include <string>

void print_items_in_vector(std::vector<int>& x){
    for (int y: x){
    std::cout << y << "\n"; 
   }
   
}

int main(){
    //def vars
    int sum = 0;
    int new_score = 0;
    int score_to_add = 0;
    std::string players_name = "";
    std::vector<int> scores = {10,20,30};

    // get player name 
   std::cout << "what is your name? \n";
   std::cin >> players_name;

   
   //ask player what score to add; add it to scores
   std::cout << "what score would you like to add? \n";
   std::cin >> new_score;
   scores.push_back(new_score);


    // print scores 
   print_items_in_vector(scores);


   //ask player what bonus amount to add to scores
   std::cout << "what bonus amoutn should be added to every score? \n";
   std::cin >> score_to_add; 


   //add additive score to scores
   for (int& score: scores){
    score += score_to_add;
   }

   //announce new scores
   std::cout << "New scores! \n";
   print_items_in_vector(scores);

   //announce score count
   std::cout << "Score count!\n" << scores.size() << "\n";

   //sum value of scores
   for (int score: scores){
    sum += score; 
   }
   std::cout << "Score Sum!\n" << sum << "\n";

   //remove last value and print scores
   scores.pop_back();
   print_items_in_vector(scores);

}
