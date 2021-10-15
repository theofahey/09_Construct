//
//  construct.c
//  Systems
//
//  Created by Theodore Fahey on 10/14/21.
//


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
struct ferrySandwich {char * p; float k; };

void printferrySandwich(struct ferrySandwich * yum ){
    printf("This Sandwich is %s and it costs %f\n", yum->p, yum->k);
}
struct ferrySandwich * newSandwich(char * p1, float k1){
    struct ferrySandwich * f = malloc(sizeof(struct ferrySandwich));
    f->p = p1;
    f->k = k1;
    return f;
}
int main(){
    char p[] = "Chopped Cheese";
    float k = 7.99;
    struct ferrySandwich f = *(newSandwich(p,k));
    printferrySandwich(&f);
    srand(time(NULL));
    int k1 = rand();
    printf("Random Price Value: \t");
    f = *(newSandwich(p,k1));
    printferrySandwich(&f);
    free(*f);
}
