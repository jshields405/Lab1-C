// Author Jack Shields jcs6283@psu.edu
// Collaborator Chao-Yang Fang cbf5338@psu.edu
// Collaborator Tuan Nguyen tmn5319@psu.edu
// Collaborator Adam Greenberg aqg5910@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *celString = readline("Enter temperature in celsius: ");
  double celDoub = atof(celString);
  double fahr = celDoub * 9/5 + 32;
  printf("%f° in celsius is equivalent to %f° Fahrenheit.\n", celDoub, fahr);
  return 0; 
  }