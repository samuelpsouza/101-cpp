#include <stdio.h>
#include <stdlib.h>

struct point {
  float x;
  float y;
};

int main(int argc, char *argv[])
{
  struct point p;

  printf("Type the point coordinates (x,y)\n");
  scanf("%f %f", &p.x, &p.y);
  printf("The point is (%.2f,%.2f)\n", p.x, p.y);

  return EXIT_SUCCESS;
}
