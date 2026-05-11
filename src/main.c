#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#define GET_W_DIFF(w1, w2) (w1 / w2)

#define P_RATE 60
#define FRICTION 0.2

typedef struct {
    float x;
    float y;
} Point;

typedef struct {
    float m;
    float d;
} Vector;

typedef struct {
    Point p;
    uint_fast8_t n;
    Vector v;
    float w;
} Ball;

void collide(Ball b1, Ball b2);

void pstep(int pRate, float friction);

int main(int argc, char *argv[]) {

    printf("Hello world!");
    return EXIT_SUCCESS;
}

void collide(Ball b1, Ball b2)
