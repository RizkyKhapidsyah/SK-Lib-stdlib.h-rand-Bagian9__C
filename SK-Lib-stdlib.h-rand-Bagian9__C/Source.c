#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

/*
    Source by AlphaCodingSkills (https://www.alphacodingskills.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    int rand_num;

    //initialize random seed
    srand(time(NULL));

    //generating 20 random number between 1 and 100
    printf("Random numbers in [1, 100]:\n");
    for (int i = 0; i < 20; i++) {
        rand_num = rand() % 100 + 1;
        printf("%d ", rand_num);
    }

    _getch();
    return 0;
}