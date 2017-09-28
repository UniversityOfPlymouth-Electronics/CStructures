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

    
    //Initialise and set properties
    Human person1 = initHuman(35, 80.0, 1.81);
    //Caluclate BMI
    calculateHumanBMI(&person1); //INPLACE - PERFORM FUNCTION ON person1 INSTANCE
    //Display
    displayHuman(person1);
    
    //Designated initialiser
    Human person2 = initHuman(45, 97.0, 1.6);
    calculateHumanBMI(&person2); //INPLACE - PERFORM FUNCTION ON person2 INSTANCE
    displayHuman(person2);
    
    //COMMON ERRORS
    
    //FORGOT TO INITIALISE
    Human person3 = initHuman(65, 102.0, 1.9);
    calculateHumanBMI(&person3);
    displayHuman(person3);
    
    //NOT YET CALCULATED BMI
    Human person4 = initHuman(21, 65.0, 1.5);
    displayHuman(person4);

    //UPDATE without recalculation
    person2.weight = 89.0;
    displayHuman(person2);

    return 0;
}
