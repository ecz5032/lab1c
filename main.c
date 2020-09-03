//Author: Eric Zhang ecz5032@psu.edu
//Collaborator: Ji Woong Park jjp6315@psu.edu
//Collaborator: Harmon Piatkowski hjp5276@psu.edu
//Collaborator: Chris Belt cob5463@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  double tempc;
  double tempf;
  char * temp = readline("Enter the temperature in celsius: ");
  tempc = atof(temp);
  tempf = tempc * 9/5 + 32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", tempc, tempf);
  
}