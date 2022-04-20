#include <stdio.h>
#include "funcktion.h"

extern char doska[8][8];

void Fill_doska_in_begin()
{
    doska[0][0]='r';
    doska[0][1]='n';
    doska[0][2]='b';
    doska[0][3]='q';
    doska[0][4]='k';
    doska[0][5]='b';
    doska[0][6]='n';
    doska[0][7]='r';
    for (int column_number=0;column_number<=7;column_number++)
    {
	    doska[1][column_number]='p';
    }
    for (int column_number=2;column_number<=5;column_number++)
    {
	    for (int line_number=0;line_number<=7;line_number++)
		    doska[column_number][line_number]=' ';
    }
    doska[7][0]='R';
    doska[7][1]='N';
    doska[7][2]='B';
    doska[7][3]='Q';
    doska[7][4]='K';
    doska[7][5]='B';
    doska[7][6]='N';
    doska[7][7]='R';
    for (int column_number=0;column_number<=7;column_number++)
    {
        doska[6][column_number]='P';
    }
}
