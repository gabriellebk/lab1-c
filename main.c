// Author: Gabrielle Brunner-King gsb5225@psu.edu
// Collaborator: Eric Benditt erb5623@psu.edu
// Collaborator: Khalid AlMahmood kfa5270@psu.edu
// Collaborator: Bakhtiar Reza bmr5782@psu.edu

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(void) {
  char *temp = readline("Enter temperature in celsius: ");
  double val = atof(temp);
  double far = (val*1.8)+32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n",val,far);
  return 0;
}