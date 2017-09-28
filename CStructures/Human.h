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

void displayHuman(Human h);
void calculateHumanBMI(Human *h);
Human initHuman(int a, float wt, float ht);

#endif /* Human_h */
