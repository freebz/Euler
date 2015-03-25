#include<stdio.h>

void main() {
  
  int result = 0, i;
  for (i = 1; i < 1000; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      result += i;
    }
  }

  printf("%d\n", result);
}
