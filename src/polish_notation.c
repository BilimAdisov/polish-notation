#include <stdio.h>

#include <calcul.h>
#include <stack.h>

int main(void) {
  struct st *operation = NULL;
  char input_string[80], output_string[80];
  fflush(stdin);
  fgets(input_string, 80, stdin);
  parsing_in_polish_notation(operation, input_string, output_string);
  printf("\n%s\n", output_string);
  fflush(stdin);
  HEAD head;
  init(&head);
  int x = 5;
  double y = counter(output_string, &head, x);
  printf("%lf", y);
  return 0;
}