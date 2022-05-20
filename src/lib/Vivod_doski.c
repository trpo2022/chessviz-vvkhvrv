#include <stdio.h>
#include "funcktion.h"

extern char doska[8][8];

void Vivod_doski()
{
     for (int column_number=0;column_number<=8;column_number++)
	{	   
		if (column_number!=8)
			printf("%d ",8-column_number);
		else
		   printf("  ");
		for (int line_number=0;line_number<=7;line_number++)
	        if (column_number!=8)
			printf("%c ",doska[column_number][line_number]);
		else
		{
			enum { KOD_SIMVOLA_a = 97};
		        putchar(line_number+KOD_SIMVOLA_a);
		        printf(" ");
		}
		printf("\n");
		if (column_number==7)
	    	printf("\n");
	}	
}
