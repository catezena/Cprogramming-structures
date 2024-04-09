#include <stdio.h>
#include "function.h"

/*Function to show the structure array*/
void showSchools(struct School *schoolsArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) 
    {
        printf("Enter details for School %d:\n", i + 1);
        printf("School Name: ");
        scanf("%s", schoolsArray[i].name); 
        scanf("%s", schoolsArray[i].type); 
        printf("Population: ");
        scanf("%d", &schoolsArray[i].population);
        printf("County: ");
        scanf("%s", schoolsArray[i].county); // 
    }
}
/*Function to print the structure elements*/
void printSchools(struct School *schoolsArray, int arraySize) {
    printf("School Details:\n");
    for (int i = 0; i < arraySize; i++) 
    {
        printf("School %d:\n", i + 1);
        printf("Name: %s\n", schoolsArray[i].name);
        printf("Type: %s\n", schoolsArray[i].type);
        printf("Population: %d\n", schoolsArray[i].population);
        printf("County: %s\n", schoolsArray[i].county);
    }
}

