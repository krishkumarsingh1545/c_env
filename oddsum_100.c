#include <stdio.h>

int main() {
  int c = 1, s;
  while (c <= 100) {
    s = s + c;
    c = c + 2;
  }
  printf("The sum of odd numbers from 1 to 100 : %d", s);
  return 0;
}