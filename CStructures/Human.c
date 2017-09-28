//
//  Human.c
//  CStructures
//
//  Created by Nicholas Outram on 28/09/2017.
//  Copyright © 2017 Nicholas Outram. All rights reserved.
//

#include "Human.h"

void displayHuman(Human h) {
    printf("Weight: %f, Height: %f, BodyMassIndex: %f", h.weight, h.height, h.bmi);
    //Print a * for a BMI greater than 25
    if (h.bmi > 25.0) {
        printf("*\n");
    } else {
        printf("\n");
    }
}

void calculateHumanBMI(Human *h) {
    h->bmi = h->weight / (h->height * h->height);
}

Human initHuman(int a, float wt, float ht)
{
    Human temp = { .age = a, .weight = wt, .height = ht};
    return temp;    //Return a copy
}


