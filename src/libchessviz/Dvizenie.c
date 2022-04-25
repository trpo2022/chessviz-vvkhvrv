#include <stdio.h>
#include <string.h>
#include "funcktion.h"

extern char doska[8][8];

void Dvizenie(int x_start,int y_start,int x_end,int y_end)
{
    doska[y_end][x_end]=doska[y_start][x_start];
    doska[y_start][x_start]=' ';
}
