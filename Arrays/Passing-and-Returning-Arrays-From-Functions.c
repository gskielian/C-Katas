#include <stdio.h>

void printCharArray(char *array);

int main(void) {
  char aQuickCharArray[]="Remember this shorthand method for initializing a char array automatically includes the \\0 character";
  
  printCharArrayInReverse(aQuickCharArray);
  
  return 0;
}

void printCharArray(char *array) {
  
  printf("Remember only to use printf when the string is null terminated. \n\n Your string says: %s",array);
  
}
