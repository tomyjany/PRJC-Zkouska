//
//          TOHLE JE POUZE PRO SPUSTENI PROGRAMU
//                  Nacitani a alokovani pole ve zkousce nebyla potreba
//
#include <stdlib.h>
#include <stdio.h>

#ifndef TEST_1_DEFINED
#define TEST_1_DEFINED
extern const int test1width;
extern const int test1height;
extern const int test1Array[4][5];
extern const int test1result[10];
extern const int test1resultLength;

#endif

int **allocateArray(int width, int height);

void freeArray(int **arr, int width, int height);

int **getTestArray();

void printArray(int **arr, int width, int height);

void printResult(int **result);
