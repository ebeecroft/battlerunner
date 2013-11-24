#include <stdlib.h>
int datagrabberfunc(char *argv[], int &counter)
{
   //Returns the data from an argv to the calling variable
   int data = 0;
   data = atoi(argv[counter]);
   counter++;
   return data;
}
