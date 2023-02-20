#include <stdio.h>

int main() {
  int min = 1, max = 1000, guess;
  char response;

  printf("Think of a number between 1 and 1000, and I'll try to guess it within 12 questions.\n");

  while (min <= max) {
    guess = (min + max) / 2;
    printf("Is your number higher than %d? (y/n): ", guess);
    scanf(" %c", &response);

    if (response == 'y' || response == 'Y') {
      min = guess + 1;
    } else if (response == 'n' || response == 'N') {
      max = guess - 1;
    }

    if (min == max) {
      printf("Your number is %d\n", min);
      return 0;
    }
  }

  printf("Sorry, I was not able to guess your number within 12 questions.\n");
  return 0;
}
