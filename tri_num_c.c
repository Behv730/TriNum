#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool isTriNumIter(int num);
static inline int sumNatNumsEuler(int num);

int main(int argc, char **argv) {
  // input handling
  if (argc != 2) {
    printf("[tri_num_c] Expected 1 argument\n");
    return 1;
  }

  int input_num = atoi(argv[1]);
  // result
  printf("[tri_num_c] %d is %s triangle number\n", input_num,
         isTriNumIter(input_num) ? "a" : "not a");
  return 0;
}

// itterative method of checking
bool isTriNumIter(int num) {
  int a = 0, sum = 0;
  while (1) {
    sum = sumNatNumsEuler(a++);
    if (sum > num) {
      return false;
    } else if (sum == num) {
      return true;
    }
    else{continue;};
  }
}

static inline int sumNatNumsEuler(int n) { return (n * (n + 1)) / 2; }
