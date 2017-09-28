//
//  Human.c
//  CStructures
//
//  Created by Nicholas Outram on 28/09/2017.
//  Copyright © 2017 Nicholas Outram. All rights reserved.
//

#include "Human.h"

void displayHuman(struct Human h) {
    printf("Weight: %f, Height: %f, BodyMassIndex: %f", h.weight, h.height, h.bmi);
    //Print a * for a BMI greater than 25
    if (h.bmi > 25.0) {
        printf("*\n");
    } else {
        printf("\n");
    }
}
