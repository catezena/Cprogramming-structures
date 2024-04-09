#ifndef FUNCTION_H
#define FUNCTION_H

struct School {
    char name[10];
    char type[15];
    int population;
    char county[47];
};
void showSchools(struct School *schoolsArray, int arraySize);
void printSchools(struct School *schoolsArray, int arraySize);
#endif

