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
    calculateHumanBMI(&temp);
    return temp;    //Return a copy
}

//Accessors
int updateAge(Human *h, int a) {
    int prev = h->age;
    h->age = a;
    return prev;    //Return a copy of the previous value (can be useful)
}
float updateWeight(Human *h, float wt) {
    float prev = h->weight;
    h->weight = wt;
    calculateHumanBMI(h);      //NOTE - the bmi is updated when you change the weight
    return prev;
}
float updateHeight(Human *h, float ht) {
    float prev = h->height;
    h->height = ht;
    calculateHumanBMI(h);
    return prev;
}





