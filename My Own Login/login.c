#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void verify(char input[]);

int main() {
  char input[64];
  printf("Enter Password: ");
  fgets(input, sizeof(input), stdin);
  
  verify(input);

  return 0;
}

void verify(char input[]) {
  if (strlen(input) == 6) {
    if (input[0] == 'N' && input[1] == 'o' && input[2] == 'i' && input[3] == 'c' && input[4] == 'e') {
      printf("Correct Password\n");
    } else {
      printf("Incorrect Password\n");
    }
  } else {
    printf("Incorrect Password\n");
  }
}