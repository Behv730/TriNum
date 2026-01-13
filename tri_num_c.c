#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool isTriNumIter(unsigned int num);

bool isTriNumAlg(unsigned int num);
static inline unsigned int sumNatNumsEuler(unsigned int num);

int main(int argc, char **argv) {
  // input handling
  // Usage: ./is_tri_num -[option] -[number]
  // options: -i fyrir iterative
  //          -a fyrir algebraic

  if (argc != 2) {
    printf("[tri_num_c] Expected 1 argument\n");
    return 1;
  }

  unsigned int input_num = strtoul(argv[1], NULL,0); // TODO: error check, char eda ehv
  // result
  printf("[tri_num_c] %u is %s triangle number\n", input_num,
         isTriNumIter(input_num) ? "a" : "not a");
  return 0;
}

static inline unsigned int sumNatNumsEuler(unsigned int n) { return (n * (n + 1)) / 2; }

// itterative method of checking
bool isTriNumIter(unsigned int num) {
  int a = 0, sum = 0;
  while (1) {
    sum = sumNatNumsEuler(a++);
    if (sum > num) {
      return false;
    } else if (sum == num) {
      return true;
    }
  }
}

bool isTriNumAlg(unsigned int num) {
  // hvad ef num er -tala?
  float N = (1 + sqrtf(1 + (4 * 2 * num))) / 2;
  if (N == ceilf(N)){return true;};
  return false;
  //
};
