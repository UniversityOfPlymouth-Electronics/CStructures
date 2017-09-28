//
//  main.c
//  CStructures
//
//  Created by Nicholas Outram on 28/09/2017.
//  Copyright © 2017 Nicholas Outram. All rights reserved.
//

#include <stdio.h>
#include "Human.h"

int main(int argc, const char * argv[]) {

    //Create a variable of type human
    Human person1;
    
    //Set properties
    person1.age = 35;
    person1.weight = 87.0;
    person1.height = 181.0;
    
    //Calculate the bmi and display the results
    calculateBmi(&person1); //Pass by reference
    displayHuman(person1);  //Pass by value
    
    //Designated initialiser
    Human person2 = { .age = 45, .weight = 97.0, .height = 1.6, .bmi = 0.0} ;
    displayHuman(person2);
    
    //Some possible errors (that might scare someone)
    Human person3;
    calculateBmi(&person3);
    displayHuman(person3);
    
    //Better, but not perfect
    Human person4 = initHuman(27, 80.0, 1.79);
    displayHuman(person4);
    person4.weight = 85.0;
    displayHuman(person4);  //Not good - forgot to update
    
    return 0;
}
