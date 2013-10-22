#include <stdio.h>

int main(int argc, char *argv[]) {
  
  //integer array
  
  
  int tenZeroes[10] = {0}; //initializes all elements with zero
  
  int oneAnd9Zeros[10] = {1}; // everything not specified in an integer array is initialized to zero
  
  //memset(&input, 0, arraylength*sizeof(int));
  
  //Printing integer arrays to test
  
  int i;
  int arraySize=10;


   printf("printing \"tenZeroes\" \n");
  for (i=0; i < arraySize ; i++) {
    printf("%d",tenZeroes[i]);
  }
  printf("\n");

   printf("printing \"oneAnd9Zeros\" \n");
  for (i=0; i < arraySize ; i++) {
    printf("%d",oneAnd9Zeros[i]);
  }
  printf("\n");
  
  
  
  
  //Examples for character arrays with a \0 at the end, these can be printed with printf
  
    char anArray[]={'H','o','l','a','\0'}; //clearly this is 5 characters long
  
    //Shorthand way of initializing an array
  
    char quickArray[]="Hola"; // IMPT: the size of this is also 5 characters *** the '\0' is implied at the end
    
    //create the array then setting it, this creates an array of \0, then we fill it.

    char arrayFill[5]; //initialize an array with no values

    //once an array is intialized, we must change the characters one by one
    //
    arrayFill[0]='H';
    arrayFill[1]='o';
    arrayFill[2]='l';
    arrayFill[3]='a';
    arrayFill[4]='\0';


   
  //printing the arrays for test
  
    printf("%s \n", anArray);
    printf("%s \n", quickArray);
    printf("%s \n", arrayFill);
  
  
  
  
  
  
  
  //Character arrays without \0 at the end must be printed with putchar (this section is not tested yet)
  
  char noStopChar[]={'H','o','l','a'} // JUST 4 Elements
  
  //To Print everything we must use a for loop
  
  for (i = 0; i < 4; i++) {
    putChar(noStopChar[i]); //putChar prints single character to stdout
  }
  
  
  return 0;
  
}
