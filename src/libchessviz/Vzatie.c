#include <stdio.h>
#include <string.h>
#include "funcktion.h"

extern char doska[8][8];

int Vzatie(int x_start, int x_end, int y_start, int y_end, int hod, int kod_sbros)
{
	int vozvrat_kod=kod_sbros;
	if (hod==0)
		if (doska[y_start][x_start]==' ')
		{
			printf("^\n");
			printf("|\n");
			printf("Erorr: Po dannim koordinatam net figur");
			vozvrat_kod=1;
		}
	if (hod==1)
		if (doska[y_start][x_start]==' ')
		{
			printf("      ^\n");
			printf("      |\n");
			printf("      Erorr: Po dannim koordinatam net figur");
			vozvrat_kod=1;
		}
	if (vozvrat_kod==0)
	{
		if (hod==0)
		{
			if (doska[y_end][x_end]==' ')
			{
				printf("    ^\n");
				printf("    |\n");
				printf("    Erorr: Zdes nechego brat");
				vozvrat_kod=1;
			}
		}
		else
			if (doska[y_end][x_end]==' ')
			{
				printf("         ^\n");
				printf("         |\n");
				printf("         Erorr: Zdes nechego brat");
				vozvrat_kod=1;
			}
	}
	if (vozvrat_kod==0)
	{
		if (hod==0)
		{
			if (doska[y_start][x_start]!='P' && doska[y_start][x_start]!='p')
			{
			printf("^\n");
			printf("|\n");
			printf("Erorr: Dannaya programma poka rabotaet tolko s peshkami");
			vozvrat_kod=1;
			}
		}
		else
			if (doska[y_start][x_start]!='P' && doska[y_start][x_start]!='p')
			{
			printf("     ^\n");
			printf("     |\n");
			printf("     Erorr: Dannaya programma poka rabotaet tolko s peshkami");
			vozvrat_kod=1;
			}
	}
	if (vozvrat_kod==0)
		if (hod==0)
			if (doska[y_start][x_start]=='p')
			{
				printf("^\n");
				printf("|\n");
				printf("Erorr: Eto hod belih, a ne chernih");
				vozvrat_kod=1;	
			}
	if (vozvrat_kod==0)
		if (hod==1)		
			if (doska[y_start][x_start]=='P')
			{
				printf("      ^\n");
				printf("      |\n");
				printf("      Erorr: Eto hod chernih, a ne belih");
				vozvrat_kod=1;	
			} 
	if (vozvrat_kod==0)
	{
		if (hod==0)
		{
			if ((x_start+1!=x_end && x_start-1!=x_end) || ((y_end-y_start)*(-1))>1 || ((y_end-y_start)*(-1))<1)
			{
				printf("%d\n",y_end-y_start);
				printf("^\n");
				printf("|\n");
				printf("Erorr: Peshki tak ne beret");
				vozvrat_kod=1;	
			}
		}
		else
		{
			if ((x_start+1!=x_end && x_start-1!=x_end) || y_end-y_start<1 || y_end-y_start>1)
			{
				printf("      ^\n");
				printf("      |\n");
				printf("      Erorr: Peshki tak ne beret");
				vozvrat_kod=1;	
			}
		}
	}
	doska[y_end][x_end]=doska[y_start][x_start];
	doska[y_start][x_start]=' ';
	return vozvrat_kod;
}
