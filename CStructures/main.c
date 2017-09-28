//
//  main.c
//  CStructures
//
//  Created by Nicholas Outram on 28/09/2017.
//  Copyright © 2017 Nicholas Outram. All rights reserved.
//

//**************************************************************
//THIS USES GIT VERSION CONTROL TO SHOW PROGRESSIVE IMPROVEMENTS
//**************************************************************

#include <stdio.h>
#include "Human.h"

int main(int argc, const char * argv[]) {

    //Create a variable of type human
    Human person1;
    
    //Set properties
    person1.age = 35;
    person1.weight = 80.0;
    person1.height = 1.81;
    //Caluclate BMI
    calculateHumanBMI(&person1); //INPLACE - PERFORM FUNCTION ON person1 INSTANCE
    //Display
    displayHuman(person1);
    
    //Designated initialiser
    Human person2 = { .age = 45, .weight = 97.0, .height = 1.6, .bmi = 0.0} ;
    calculateHumanBMI(&person2); //INPLACE - PERFORM FUNCTION ON person2 INSTANCE
    displayHuman(person2);
    
    return 0;
}
