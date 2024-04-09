#include <stdio.h>
#include "function.h"
int main() 
{
    int arraySize =10;
    struct School schoolsArray[arraySize];

   
    showSchools(schoolsArray, arraySize);

    
    printSchools(schoolsArray, arraySize);

    return 0;
}

