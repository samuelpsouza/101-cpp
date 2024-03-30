#include <stdio.h>

int main(void)
{
  int[3] scores;

  int[0] scores = 72;
  int[1] scores = 73;
  int[2] scores = 33;
  



  printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);

  return 0;
}

float average(int length, int array[]){
  int sum = 0;

  for(int i = 0; i < length; i++) {
    sum += array[i];
  }

  return sum / (float) length;
}
