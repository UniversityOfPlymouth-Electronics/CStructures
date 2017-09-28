//
//  Human.h
//  CStructures
//
//  Created by Nicholas Outram on 28/09/2017.
//  Copyright © 2017 Nicholas Outram. All rights reserved.
//

#ifndef Human_h
#define Human_h

#include <stdio.h>
typedef struct {
    unsigned int age;
    float weight;
    float height;
    float bmi;
} Human;

//Inplace calculation
void calculateBmi(Human *h);
int displayHuman(Human h);

//Initialise
Human initHuman(unsigned int a, float w, float h);

#endif /* Human_h */
