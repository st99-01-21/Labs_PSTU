#pragma once
#include <string>

int determinant(int matrix[3][3]);
int determinantX1(int coefMatrix[3][3], int constTermsMatrix[3]);
int determinantX2(int coefMatrix[3][3], int constTermsMatrix[3]);
int determinantX3(int coefMatrix[3][3], int constTermsMatrix[3]);

extern int i, j;

extern int coeffs[3][3];
extern int constants[3];

extern int system1[3][4];
extern int system2[3][4];
extern int system3[3][4];
extern int system4[3][4];

