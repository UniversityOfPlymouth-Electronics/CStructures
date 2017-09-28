//
//  Human.c
//  CStructures
//
//  Created by Nicholas Outram on 28/09/2017.
//  Copyright © 2017 Nicholas Outram. All rights reserved.
//

#include "Human.h"
//Modify in place
void calculateBmi(Human *h) {
    h->bmi = h->weight / (h->height * h->height);
}

//Display information about a Human
int displayHuman(Human h) {
    if (h.bmi == 0.0) {
        printf("Unitialised\n");
        return -1;
    }
    printf("Weight: %f, Height: %f, BodyMassIndex: %f", h.weight, h.height, h.bmi);
    if (h.bmi > 25.0) {
        printf("*\n");
    } else {
        printf("\n");
    }
    return 0;
}

//Initialise
Human initHuman(unsigned int a, float w, float h) {
    Human temp = {a, w, h};
    calculateBmi(&temp);
    return temp;
}

