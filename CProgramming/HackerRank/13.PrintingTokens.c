#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char *s;
  s = malloc(1024 * sizeof(char));
  scanf("%[^\n]", s);
  s = realloc(s, strlen(s) + 1);
  // Write your logic to print the tokens of the sentence here.
  while (*s != '\0') {
    if (*s != ' ')
      printf("%c", *s);
    else
      printf("\n");
    s++;
  }
  return 0;
  free(s);
}

