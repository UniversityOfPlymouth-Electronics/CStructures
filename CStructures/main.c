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
    struct Human person1;
    
    //Set properties
    person1.age = 35;
    person1.weight = 87.0;
    person1.height = 181.0;
    
    //Designated initialiser
    struct Human person2 = { .age = 45, .weight = 97.0, .height = 1.6, .bmi = 0.0} ;
    
    //Some possible errors (that might scare someone)
    struct Human person3;
    
    return 0;
}
