#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include<string.h>
#include "header.h"
#define pi 3.1415





void main()
{
jump:
    printf("Use this calculator to work out the weight of a metal bar by inputting it's dimensions\n\n");
    printf("Please choose the metal type:\n\nM = Mild Steel\nC = Cast Iron\nA = Aluminum\n");
    char metal, bar, name1[] = "Mild Steel", name2[] = "Cast Iron", name3[] = "Aluminum", name[15];
    char n1[] = "Flat Bar", n2[] = "Square Bar", n3[] = "Round Bar", n4[] = "Angle Bar", n5[] = "Hex Bar", b_t[15];
    int quantity, c;
    float bar_length, bar_width, bar_width2, bar_depth, vol, weightkg, weightlbs;
    scanf("\n%c", &metal);

    if (metal != 'M' && metal != 'm' && metal != 'C' && metal != 'c' && metal != 'A' && metal != 'a')
    {
        printf("Invalid input, Enter again \n");
        goto jump;
    }
    if (metal == 'M' || metal == 'm')
        strcpy(name, name1);
    if (metal == 'C' || metal == 'c')
        strcpy(name, name2);
    if (metal == 'A' || metal == 'a')
        strcpy(name, name3);
jump1:
    printf("\nPlease choose a bar type/profile\nF = Flat Bar\nS = Square Bar\nR = Round Bar\nA = Angle Bar\nH = Hex Bar\n");
    scanf("\n%c", &bar);
    if (bar != 'F' && bar != 'f' && bar != 'S' && bar != 's' && bar != 'A' && bar != 'a' && bar != 'R' && bar != 'r' && bar != 'H' && bar != 'h')
    {
        printf("Invalid input, Enter again \n");
        goto jump1;
    }
    if (bar == 'F' || bar == 'f')
        strcpy(b_t, n1);
    if (bar == 'S' || bar == 's')
        strcpy(b_t, n2);
    if (bar == 'R' || bar == 'r')
        strcpy(b_t, n3);
    if (bar == 'A' || bar == 'a')
        strcpy(b_t, n4);
    if (bar == 'H' || bar == 'h')
        strcpy(b_t, n5);
jump2:
    printf("How many bars of %s %s?\n", name, b_t);
    scanf("%d", &quantity);
    if (quantity * -1 >= 0)
    {
        printf("Invalid quantity, enter again\n");
        goto jump2;
    }
jump3:

    printf("Calculate the approximate weight of %d %s %s(s)\n", quantity, name, b_t);
    char m[2];
    printf("Please specify the measurement unit you will use for all dimensions:\nmm = millimeters\ncm = centimeters\nm = metres\nin = inches\nft = feet\n");
    scanf("\n %s", m);
    for (int i = 0; i < 2; i++)
    {
        m[i] = tolower((unsigned char)m[i]);
    }

    /*if(m != "m" && m != "mm" && m != "cm" && m != "in" && m != "ft" ){
        printf("Invalid input, enter again........\n");
        goto jump3;
    }
    */
    printf("Specify the length of bar in %s:", m);
    scanf("%f", &bar_length);

    if (bar == 'F' || bar == 'f')
    {
    jump4:
        printf("Please specify the bar width in %s.\n", m);
        scanf("\n%f", &bar_width);
        printf("Please specify the thickness of the bar in %s.\n", m);
        scanf("\n%f", &bar_depth);

        if (bar_depth <= 0 || bar_width <= 0)
        {
            printf("Entered a value in negative, enter proper value.\n");
            goto jump4;
        }
        // calculate the volume
        vol = convertmm(m, bar_width) * convertmm(m, bar_depth) * convertmm(m, bar_length) / 1e9;

        // calculate the weight in kgs and lbs of the metal base density * calculated volume
        weightkg = metal_dens(&metal) * vol;
        weightlbs = weightkg * 2.20462;

        printf("%d Bar(s) of %.4f X %.4f X %.4f %s %s\n", quantity, bar_length, bar_width, bar_depth, name, b_t);

        printf("\n\nTotal weight in kgs = %.4f\n", weightkg * quantity);
        printf("Total weight in lbs = %.4f\n", weightlbs * quantity);

        if (quantity != 1)
        {
            printf("\n\nIndividual Bar Weight in kgs = %.4f\n", weightkg);
            printf("Individual Bar Weight in lbs = %.4f\n", weightlbs);
        }
    }
    else if (bar == 'S' || bar == 's')
    {
    jump5:
        printf("Please specify the bar width in %s.\n", m);
        scanf("\n%f", &bar_width);
        printf("Please specify the thickness of the bar in %s.\n", m);
        scanf("\n%f", &bar_depth);

        if (bar_depth <= 0 || bar_width <= 0)
        {
            printf("Entered a value in negative, enter proper value.\n");
            goto jump5;
        }
        // calculate the volume
        vol = convertmm(m, bar_width) * convertmm(m, bar_depth) * convertmm(m, bar_length) / 1e9;

        // calculate the weight in kgs and lbs of the metal base density * calculated volume
        weightkg = metal_dens(&metal) * vol;
        weightlbs = weightkg * 2.20462;

        printf("%d Bar(s) of %.4f X %.4f X %.4f %s %s\n", quantity, bar_length, bar_width, bar_depth, name, b_t);

        printf("\n\nTotal weight in kgs = %.4f\n", weightkg * quantity);
        printf("Total weight in lbs = %.4f\n", weightlbs * quantity);

        if (quantity != 1)
        {
            printf("\n\nIndividual Bar Weight in kgs = %.4f\n", weightkg);
            printf("Individual Bar Weight in lbs = %.4f\n", weightlbs);
        }
    }
    else if (bar == 'R' || bar == 'r')
    {
    jump6:
        printf("Please specify the bar width in %s.\n", m);
        scanf("\n%f", &bar_width);

        if (bar_width <= 0)
        {
            printf("Entered a value in negative, enter proper value.\n");
            goto jump6;
        }
        // calculate the volume
        vol = (convertmm(m, bar_length) * pi * pow((convertmm(m, bar_width) / 2), 2)) / 1e9;

        // calculate the weight in kgs and lbs of the metal base density * calculated volume
        weightkg = metal_dens(&metal) * vol;
        weightlbs = weightkg * 2.20462;

        printf("%d Bar(s) of %.4f X %.4f X %s %s\n", quantity, bar_length, bar_width, name, b_t);

        printf("\n\nTotal weight in kgs = %.4f\n", weightkg * quantity);
        printf("Total weight in lbs = %.4f\n", weightlbs * quantity);

        if (quantity != 1)
        {
            printf("\n\nIndividual Bar Weight in kgs = %.4f\n", weightkg);
            printf("Individual Bar Weight in lbs = %.4f\n", weightlbs);
        }
    }
    else if (bar == 'H' || bar == 'h')
    {
    jump7:
        printf("Please specify the bar width in %s.\n", m);
        scanf("\n%f", &bar_width);

        if (bar_width <= 0)
        {
            printf("Entered a value in negative, enter proper value.\n");
            goto jump7;
        }
        // calculate the volume
        vol = (convertmm(m, bar_length) * 1.732 * convertmm(m, bar_width) * convertmm(m, bar_width) / 2) / 1e9;

        // calculate the weight in kgs and lbs of the metal base density * calculated volume
        weightkg = metal_dens(&metal) * vol;
        weightlbs = weightkg * 2.20462;

        printf("%d Bar(s) of %.4f X %.4f %s %s\n", quantity, bar_length, bar_width, name, b_t);

        printf("\n\nTotal weight in kgs = %.4f\n", weightkg * quantity);
        printf("Total weight in lbs = %.4f\n", weightlbs * quantity);

        if (quantity != 1)
        {
            printf("\n\nIndividual Bar Weight in kgs = %.4f\n", weightkg);
            printf("Individual Bar Weight in lbs = %.4f\n", weightlbs);
        }
    }
    else
    {
    jump8:
        printf("Please specify the bar width in %s.\n", m);
        scanf("\n%f", &bar_width);

        printf("Please specify the bar width2 in %s.\n", m);
        scanf("\n%f", &bar_width2);

        printf("Please specify the thickness of the bar in %s.\n", m);
        scanf("\n%f", &bar_depth);

        bar_width2 = bar_width2 - bar_depth;

        if (bar_width <= 0 || bar_width2 <= 0 || bar_depth <= 0)
        {
            printf("Entered a value in negative, enter proper value.\n");
            goto jump8;
        }
        // calculate the volume
        vol = (convertmm(m, bar_width) + convertmm(m, bar_width2)) * convertmm(m, bar_depth) * convertmm(m, bar_length) / 1e9;

        // calculate the weight in kgs and lbs of the metal base density * calculated volume
        weightkg = metal_dens(&metal) * vol;
        weightlbs = weightkg * 2.20462;

        printf("%d Bar(s) of %.4f X %.4f X %.4f X %.4f %s %s\n", quantity, bar_length, bar_width, bar_width2, bar_depth, name, b_t);

        printf("\n\nTotal weight in kgs = %.4f\n", weightkg * quantity);
        printf("Total weight in lbs = %.4f\n", weightlbs * quantity);

        if (quantity != 1)
        {
            printf("\n\nIndividual Bar Weight in kgs = %.4f\n", weightkg);
            printf("Individual Bar Weight in lbs = %.4f\n", weightlbs);
        }
    }
}