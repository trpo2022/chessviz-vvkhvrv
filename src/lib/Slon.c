#include <stdio.h>
#include <string.h>
#include <math.h>
#include "funcktion.h"

extern char doska[8][8];

int Slon(int x_start, int x_end, int y_start, int y_end, int hod, int kod_sbros,int deystvie)
{
	int vozvrat_kod=kod_sbros;
	if (hod==1)
	{
		hod=0;
	}
	else
	{
		hod=1;
	}
	if (deystvie==0)
	{
		if (doska[y_start][x_start]==' ')
		{
			printf("Erorr: Po dannim koordinatam net figur");
			vozvrat_kod=0;
			return vozvrat_kod;
		}
		if (vozvrat_kod!=0)
		{
			if (doska[y_end][x_end]!=' ')
			{
				printf("Erorr: Kletka-cel uze zanita");
				vozvrat_kod=0;
				return vozvrat_kod;
			}
		}
		if (vozvrat_kod!=0)
		{
			if (doska[y_start][x_start]!='B' && doska[y_start][x_start]!='b')
			{
			printf("Erorr: Vibranna nevernaya figura");
			vozvrat_kod=0;
			return vozvrat_kod;
			}
		}
		if (vozvrat_kod!=0)
			if (hod==0)
				if (doska[y_start][x_start]=='b')
				{
					printf("Erorr: Seychas hod belih, a ne chernih");
					vozvrat_kod=0;	
					return vozvrat_kod;
				}
		if (vozvrat_kod!=0)
			if (hod==1)		
				if (doska[y_start][x_start]=='B')
				{
					printf("Erorr: Seychas hod chernih, a ne belih");
					vozvrat_kod=0;	
					return vozvrat_kod;
				} 
		if (vozvrat_kod!=0)
		{	
			int odin=y_end-y_start;
			int dva=x_end-x_start;
			if (odin<0)
			{
				odin=odin*(-1);
			}
			if (dva<0)
			{
				dva=dva*(-1);
			}
			if (odin!=dva)
			{
				printf("Erorr: Slon tak ne hodit");
				vozvrat_kod=0;
				return vozvrat_kod;	
			}
		}
		if (x_start<x_end && y_start<y_end)
		{
			for (int i=y_start+1,q=x_start+1;i<y_end;i++,q++)
			{
				if (doska[i][q]!=' ')
				{
					printf("Error: Na traektorii dvizeniya figuri est pripatstvie");
					vozvrat_kod=0;	
					return vozvrat_kod;
				}	
			}	
		}	
		if (x_start>x_end && y_start>y_end)
		{
			for (int i=y_start-1,q=x_start-1;i>y_end;i--,q--)
			{
				if (doska[i][q]!=' ')
				{
					printf("Error: Na traektorii dvizeniya figuri est pripatstvie");
					vozvrat_kod=0;	
					return vozvrat_kod;
				}	
			}	
		}
		if (x_start>x_end && y_start<y_end)
		{
			for (int i=y_start+1,q=x_start-1;i<y_end;i++,q--)
			{
				if (doska[i][q]!=' ')
				{
					printf("Error: Na traektorii dvizeniya figuri est pripatstvie");
					vozvrat_kod=0;	
					return vozvrat_kod;
				}	
			}	
		}
		if (x_start<x_end && y_start>y_end)
		{
			for (int i=y_start-1,q=x_start+1;i<y_end;i--,q++)
			{
				if (doska[i][q]!=' ')
				{
					printf("Error: Na traektorii dvizeniya figuri est pripatstvie");
					vozvrat_kod=0;	
					return vozvrat_kod;
				}	
			}	
		}
	}
	else
	{
		if (doska[y_start][x_start]==' ')
		{
			printf("Erorr: Po dannim koordinatam net figur");
			vozvrat_kod=0;
			return vozvrat_kod;
		}
		if (hod==0)
		{
			if (vozvrat_kod!=0)
			{
				if (doska[y_end][x_end]==' ' || doska[y_end][x_end]=='P' || doska[y_end][x_end]=='R' || doska[y_end][x_end]=='Q' || doska[y_end][x_end]=='K' || doska[y_end][x_end]=='B' || doska[y_end][x_end]=='N')
				{
					printf("Erorr: Nedopustimaya cel");
					vozvrat_kod=0;
					return vozvrat_kod;
				}
			}
		}
		else
		{
			if (vozvrat_kod!=0)
			{
				if (doska[y_end][x_end]==' ' || doska[y_end][x_end]=='p' || doska[y_end][x_end]=='r' || doska[y_end][x_end]=='q' || doska[y_end][x_end]=='k' || doska[y_end][x_end]=='b' || doska[y_end][x_end]=='n')
				{
					printf("Erorr: Nedopustimaya cel");
					vozvrat_kod=0;
					return vozvrat_kod;
				}
			}	
		}
		if (vozvrat_kod!=0)
		{
			if (doska[y_start][x_start]!='B' && doska[y_start][x_start]!='b')
			{
			printf("Erorr: Vibranna nevernaya figura");
			vozvrat_kod=0;
			return vozvrat_kod;
			}
		}
		if (vozvrat_kod!=0)
			if (hod==0)
				if (doska[y_start][x_start]=='b')
				{
					printf("Erorr: Seychas hod belih, a ne chernih");
					vozvrat_kod=0;	
					return vozvrat_kod;
				}
		if (vozvrat_kod!=0)
			if (hod==1)		
				if (doska[y_start][x_start]=='B')
				{
					printf("Erorr: Seychas hod chernih, a ne belih");
					vozvrat_kod=0;	
					return vozvrat_kod;
				} 
		if (vozvrat_kod!=0)
		{	
			int odin=y_end-y_start;
			int dva=x_end-x_start;
			if (odin<0)
			{
				odin=odin*(-1);
			}
			if (dva<0)
			{
				dva=dva*(-1);
			}
			if (odin!=dva)
			{
				printf("Erorr: Slon tak ne hodit");
				vozvrat_kod=0;
				return vozvrat_kod;	
			}
		}
		if (x_start<x_end && y_start<y_end)
		{
			for (int i=y_start+1,q=x_start+1;i<y_end;i++,q++)
			{
				if (doska[i][q]!=' ')
				{
					printf("Error: Na traektorii dvizeniya figuri est pripatstvie");
					vozvrat_kod=0;	
					return vozvrat_kod;
				}	
			}	
		}	
		if (x_start>x_end && y_start>y_end)
		{
			for (int i=y_start-1,q=x_start-1;i>y_end;i--,q--)
			{
				if (doska[i][q]!=' ')
				{
					printf("Error: Na traektorii dvizeniya figuri est pripatstvie");
					vozvrat_kod=0;	
					return vozvrat_kod;
				}	
			}	
		}
		if (x_start>x_end && y_start<y_end)
		{
			for (int i=y_start+1,q=x_start-1;i<y_end;i++,q--)
			{
				if (doska[i][q]!=' ')
				{
					printf("Error: Na traektorii dvizeniya figuri est pripatstvie");
					vozvrat_kod=0;	
					return vozvrat_kod;
				}	
			}	
		}
		if (x_start<x_end && y_start>y_end)
		{
			for (int i=y_start-1,q=x_start+1;i<y_end;i--,q++)
			{
				if (doska[i][q]!=' ')
				{
					printf("Error: Na traektorii dvizeniya figuri est pripatstvie");
					vozvrat_kod=0;	
					return vozvrat_kod;
				}	
			}	
		}	
	}
	Dvizenie(x_start,y_start,x_end,y_end);
	return vozvrat_kod;	
}
