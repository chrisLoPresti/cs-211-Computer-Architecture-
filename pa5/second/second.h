#include <stdio.h>
#include<stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include<math.h>


 struct Variable{
    
    char * name;
    int val;
     int found;
     int done;
     
} typedef Variable;


 struct Instruction{
    
    char * op;
    Variable ** inputList;
    Variable ** outPutList;
    Variable ** selector;
    struct Instruction * nextInstruction;
     int inNum;
     int outNum;

} typedef Instruction;




void countTemps();
void initializeInputs();
void initializeOutPuts();
void initializeTemps();
void initializeInstrudtions();
void grayCode();
void followInstructions( long grayCode);
void sortInstructions();
