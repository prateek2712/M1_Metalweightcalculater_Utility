#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>




void main(){
    jump:
    printf("Use this calculator to work out the weight of a metal bar by inputting it's dimensions\n\n");
    printf("Please choose the metal type:\n\nM = Mild Steel\nC = Cast Iron\nA = Aluminum\n");
    char metal, bar, name1[] = "Mild Steel", name2[] = "Cast Iron", name3[]="Aluminum", name[15];
    char n1[] = "Flat Bar", n2[] = "Square Bar", n3[] = "Round Bar", n4[] = "Angle Bar", n5[] = "Hex Bar", n[15];
    int quantity, c;
    float bar_length;
    scanf("\n%c", &metal);

    if(metal != 'M' && metal != 'm' && metal != 'C' && metal != 'c' && metal != 'A' && metal != 'a'){
        printf("Invalid input, Enter again \n");
        goto jump;
    }
    if(metal == 'M' || metal == 'm')strcpy(name, name1);
    if(metal == 'C' || metal == 'c')strcpy(name, name2);
    if(metal == 'A' || metal == 'a')strcpy(name, name3);
    jump1:
    printf("\nPlease choose a bar type/profile\nF = Flat Bar\nS = Square Bar\nR = Round Bar\nA = Angle Bar\nH = Hex Bar\n");
    scanf("\n%c", &bar);
    if(bar != 'F' && bar != 'f' && bar != 'S' && bar != 's' && bar != 'A' && bar != 'a'&& bar != 'R' && bar != 'r'&& bar != 'H' && bar != 'h'){
        printf("Invalid input, Enter again \n");
        goto jump1;
    }
    if(bar == 'F' || bar == 'f')strcpy(n, n1);
    if(bar == 'S' || bar == 's')strcpy(n, n2);
    if(bar == 'R' || bar == 'r')strcpy(n, n3);
    if(bar == 'A' || bar == 'a')strcpy(n, n4);
    if(bar == 'H' || bar == 'h')strcpy(n, n5);
    jump2:
    printf("How many bars of %s %s?\n", name, n);
    scanf("%d", &quantity);
    if(quantity * -1 >= 0){
        printf("Invalid quantity, enter again\n");
        goto jump2;
    }
    jump3:

    printf("Calculate the approximate weight of %d %s %s(s)\n", quantity, name, n);
    char m[2];
    printf("Please specify the measurement unit you will use for all dimensions:\nmm = millimeters\ncm = centimeters\nm = metres\nin = inches\nft = feet\n");
    scanf("\n %s", m);
    for(int i = 0; i<2; i++){
        m[i] = tolower((unsigned char) m[i]);
    }

    /*if(m != "m" && m != "mm" && m != "cm" && m != "in" && m != "ft" ){
        printf("Invalid input, enter again........\n");
        goto jump3;
    }
    */
    printf("Specify the length of bar in %s:", m);
    scanf("%f", &bar_length);






}
