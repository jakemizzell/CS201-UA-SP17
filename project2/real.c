/**
 * real.c
 *
 * Written by Jake Mizzell for CS 201 Spring 2017
 *
 * This is a read number class.
 */

#include <stdio.h>
#include <stdlib.h>
#include "real.h"

real *newReal(double x) {
    real *p = malloc(sizeof(real));
    if (p == 0) {
        fprintf(stderr,"out of memmory\n");
        exit(-1);
    }
    p->value = x;
    return p;
}

double getReal(real *v) {
    return v->value;
}

double setReal(real *v,double x) {
    double old = v->value;
    v->value = x;
    return old;
}

void displayReal(FILE *fp,void *v) {
    fprintf(fp,"%f",getReal(v));
}

double compareReal(void *v,void *w) {
    return ((real *) v)->value - ((real *) w)->value;
}

void freeReal(real *v) {
    free(v);
}