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
struct Human {
    unsigned int age;
    float weight;
    float height;
    float bmi;
};

void displayHuman(struct Human h);
void calculateHumanBMI(struct Human *h);

#endif /* Human_h */
