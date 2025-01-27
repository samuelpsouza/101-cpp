#include <stdio.h>

int main(void)
{
  int scores[3];
  int scores[0] = 72;
  int scores[1] = 73;
  int scores[2] = 33;

  printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);

  return 0;
}

float average(int length, int array[])
{
  int sum = 0;

  for (int i = 0; i < length; i++)
  {
    sum += array[i];
  }

  return sum / (float)length;
}
