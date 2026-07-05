// Chapter 8 — Structs
// Exercise: Race leaderboard

// Create a struct racer:

// struct racer {
//     char *name;
//     int car_number;
//     float lap_time;
// };

// Write a program that stores 5 racers, then prints the leaderboard from fastest to slowest.

// Your program should:

// Use a function to print one racer.
// Use a function to swap two racers.
// Use a function to find the fastest racer.
// Update one racer’s lap time through a pointer.

// This feels like one task: manage a small race leaderboard.


#include <stdio.h>


struct racer {
    char *name;
    int car_number;
    float lap_time;
};

void print_racer(struct racer race_id);

void swap_racers(struct racer *racer_id_1, struct racer *racer_id_2);

void fastest_racer(struct racer racers[]);

void change_lap_time(struct racer *racer_id, float new_time);


int main(){
    struct racer racer1;
    racer1.name = "Hamilton";
    racer1.car_number = 99;
    racer1.lap_time = 40.1;
    struct racer racer2 = {"Verstappen",11,40.5};
    struct racer racer3 = {"Alonso",22,40.3};
    swap_racers(&racer1,&racer2);

    struct racer racer_array[3] = {racer1,racer2,racer3};
     fastest_racer(racer_array);
    
     printf("racer %s's original lap time is %f\n", racer1.name, racer1.lap_time);
    change_lap_time(&racer1, 60.0);
     printf("racer %s's new lap time is %f\n", racer1.name, racer1.lap_time);


}



void print_racer(struct racer race_id){
    printf("The racer's name is %s, their car number is %d, their lap time is %f\n", race_id.name, race_id.car_number, race_id.lap_time);
}

void swap_racers(struct racer *racer_id_1, struct racer *racer_id_2){
    struct racer placeholder = *racer_id_1;
    *racer_id_1 = *racer_id_2;
    *racer_id_2 = placeholder;
    printf("successfully swapped %s and %s\n",racer_id_1->name,racer_id_2->name);
}

void fastest_racer(struct racer racers[]){
    int i = 3;
    struct racer fastest_racer = racers[0];

    for(i=0;i<3;i++){
        if(racers[i].lap_time < fastest_racer.lap_time){
            fastest_racer = racers[i];
        }
    }
    printf("the fastest racer is %s\n", fastest_racer.name);
    
}

void change_lap_time(struct racer *racer_id, float new_time){
    racer_id->lap_time = new_time;
}