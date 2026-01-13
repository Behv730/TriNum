// co-author: DagrunKristin aka DaggaSwag
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool isTriNumIter(unsigned int num);

bool isTriNumAlg(unsigned int num);
static inline unsigned int sumNatNumsEuler(unsigned int num);

int main(int argc, char **argv) { if (argc != 3) {
    printf("[tri_num_c] ERROR Expected 2 argument\n");
    printf("[tri_num_c] ERROR Usage: ./is_tri_num -[option] [the number]\n");
    printf("[tri_num_c] ERROR options: -i for iterative method\n");
    printf("[tri_num_c] ERROR          -a for algebraic method\n");
    return 1;
  }

  unsigned int input_num =
      strtoul(argv[2], NULL, 0); // TODO: error check, char eda ehv

  if (input_num == 21 || input_num == 7 || input_num == 3){
    printf("[tri_num_c] Did you know that 3 * 7 is 21?\n[tri_num_c] and 3 AND "
           "21 are triangle numbers?!\n[tri_num_c] NANI?!?!");
    return 0;
  }

  switch (argv[1][1]) {
  case 'i':
    printf("[tri_num_c] %u is %s triangle number\n[tri_num_c] obtained using "
           "iterative method",
           input_num, isTriNumIter(input_num) ? "a" : "not a");
    break;

  case 'a':
    printf("[tri_num_c] %u is %s triangle number\n[tri_num_c] obtained using "
           "algebraic method",
           input_num, isTriNumAlg(input_num) ? "a" : "not a");
    break;
  // This is for a special someone :*
  case 'd':
  case 'D':
    printf("Cutieeeeeee\n");
    break;

  default:
    printf("[tri_num_c] ERROR expected -a or -i but got %c\n", argv[1][1]);
    printf("[tri_num_c] ERROR get a live looser");
  }

  return 0;
}

static inline unsigned int sumNatNumsEuler(unsigned int n) {
  return (n * (n + 1)) / 2;
}

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

// algebraic method
bool isTriNumAlg(unsigned int num) {
  // byggd a D-reglu aka imbu/batman
  // x_1,x_2 = (-b +- sqrt(b^2-4ac))/2a
  float N = (1 + sqrtf(1 + (4 * 2 * num))) / 2;
  if (N == ceilf(N)) {
    return true;
  }; // checka ef N er heiltala
  return false;
};
