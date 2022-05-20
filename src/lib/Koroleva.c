#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "funcktion.h"

extern char doska[8][8];

int Koroleva(int x_start, int x_end, int y_start, int y_end, int hod, int kod_sbros,int deystvie)
{
	int proverochka=0,prover=1;
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
			if (doska[y_start][x_start]!='Q' && doska[y_start][x_start]!='q')
			{
			printf("Erorr: Vibranna nevernaya figura");
			vozvrat_kod=0;
			return vozvrat_kod;
			}
		}
		if (vozvrat_kod!=0)
			if (hod==0)
				if (doska[y_start][x_start]=='q')
				{
					printf("Erorr: Seychas hod belih, a ne chernih");
					vozvrat_kod=0;	
					return vozvrat_kod;
				}
		if (vozvrat_kod!=0)
			if (hod==1)		
				if (doska[y_start][x_start]=='Q')
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
				proverochka++;	
			}
		}
		if (x_start<x_end && y_start<y_end)
		{
			for (int i=y_start+1,q=x_start+1;i<y_end;i++,q++)
			{
				if (doska[i][q]!=' ')
				{
					proverochka++;
				}	
			}	
		}	
		if (x_start>x_end && y_start>y_end)
		{
			for (int i=y_start-1,q=x_start-1;i>y_end;i--,q--)
			{
				if (doska[i][q]!=' ')
				{
					proverochka++;
				}	
			}	
		}
		if (x_start>x_end && y_start<y_end)
		{
			for (int i=y_start+1,q=x_start-1;i<y_end;i++,q--)
			{
				if (doska[i][q]!=' ')
				{
					proverochka++;
				}	
			}	
		}
		if (x_start<x_end && y_start>y_end)
		{
			for (int i=y_start-1,q=x_start+1;i<y_end;i--,q++)
			{
				if (doska[i][q]!=' ')
				{
					proverochka++;
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
			if (doska[y_start][x_start]!='Q' && doska[y_start][x_start]!='q')
			{
			printf("Erorr: Vibranna nevernaya figura");
			vozvrat_kod=0;
			return vozvrat_kod;
			}
		}
		if (vozvrat_kod!=0)
			if (hod==0)
				if (doska[y_start][x_start]=='q')
				{
					printf("Erorr: Seychas hod belih, a ne chernih");
					vozvrat_kod=0;	
					return vozvrat_kod;
				}
		if (vozvrat_kod!=0)
			if (hod==1)		
				if (doska[y_start][x_start]=='Q')
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
				proverochka++;
			}
		}
		if (x_start<x_end && y_start<y_end)
		{
			for (int i=y_start+1,q=x_start+1;i<y_end;i++,q++)
			{
				if (doska[i][q]!=' ')
				{
					proverochka++;
				}	
			}	
		}	
		if (x_start>x_end && y_start>y_end)
		{
			for (int i=y_start-1,q=x_start-1;i>y_end;i--,q--)
			{
				if (doska[i][q]!=' ')
				{
					proverochka++;
				}	
			}	
		}
		if (x_start>x_end && y_start<y_end)
		{
			for (int i=y_start+1,q=x_start-1;i<y_end;i++,q--)
			{
				if (doska[i][q]!=' ')
				{
					proverochka++;
				}	
			}	
		}
		if (x_start<x_end && y_start>y_end)
		{
			for (int i=y_start-1,q=x_start+1;i<y_end;i--,q++)
			{
				if (doska[i][q]!=' ')
				{
					proverochka++;
				}	
			}	
		}	
	}
	if (proverochka==0)
	{
	Dvizenie(x_start,y_start,x_end,y_end);
	}
	else
	{
			prover=0;
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
				if (doska[y_start][x_start]!='Q' && doska[y_start][x_start]!='q')
				{
				printf("Erorr: Vibranna nevernaya figura");
				vozvrat_kod=0;
				return vozvrat_kod;
				}
			}
			if (vozvrat_kod!=0)
				if (hod==0)
					if (doska[y_start][x_start]=='q')
					{
						printf("Erorr: Seychas hod belih, a ne chernih");
						vozvrat_kod=0;	
						return vozvrat_kod;
					}
			if (vozvrat_kod!=0)
				if (hod==1)		
					if (doska[y_start][x_start]=='Q')
					{
						printf("Erorr: Seychas hod chernih, a ne belih");
						vozvrat_kod=0;	
						return vozvrat_kod;
					} 
			if (vozvrat_kod!=0)
			{	
				if ((x_start!=x_end) && (y_start!=y_end))
				{
					prover++;	
				}
			}
			if (x_start==x_end)
			{
				if (y_end>y_start)
				{
					for (int i=y_start+1;i<y_end;i++)
					{
						if (doska[i][x_start]!=' ')
						{
							prover++;
						}	
					}	
				}
				if (y_end<y_start)
				{
					for (int i=y_end+1;i<y_start;i++)
					{
						if (doska[i][x_start]!=' ')
						{
							prover++;
						}	
					}	
				}
			}
			if (y_start==y_end)
			{
				if (x_end>x_start)
				{
					for (int i=x_start+1;i<x_end;i++)
					{
						if (doska[y_start][i]!=' ')
						{
							prover++;
						}	
					}	
				}
				if (x_end<x_start)
				{
					for (int i=x_end+1;i<x_start;i++)
					{
						if (doska[y_start][i]!=' ')
						{
							prover++;
						}	
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
				if (doska[y_start][x_start]!='Q' && doska[y_start][x_start]!='q')
				{
				printf("Erorr: Vibranna nevernaya figura");
				vozvrat_kod=0;
				return vozvrat_kod;
				}
			}
			if (vozvrat_kod!=0)
				if (hod==0)
					if (doska[y_start][x_start]=='q')
					{
						printf("Erorr: Seychas hod belih, a ne chernih");
						vozvrat_kod=0;	
						return vozvrat_kod;
					}
			if (vozvrat_kod!=0)
				if (hod==1)		
					if (doska[y_start][x_start]=='Q')
					{
						printf("Erorr: Seychas hod chernih, a ne belih");
						vozvrat_kod=0;	
						return vozvrat_kod;
					} 
			if (vozvrat_kod!=0)
			{	
				if ((x_start!=x_end) && (y_start!=y_end))
				{
					prover++;	
				}
			}
			if (x_start==x_end)
			{
				if (y_end>y_start)
				{
					for (int i=y_start+1;i<y_end;i++)
					{
						if (doska[i][x_start]!=' ')
						{
						prover++;
						}	
					}	
				}
				if (y_end<y_start)
				{
					for (int i=y_end+1;i<y_start;i++)
					{
						if (doska[i][x_start]!=' ')
						{
							prover++;
						}	
					}	
				}
			}
			if (y_start==y_end)
			{
				if (x_end>x_start)
				{
					for (int i=x_start+1;i<x_end;i++)
					{
						if (doska[y_start][i]!=' ')
						{
							prover++;
						}	
					}	
				}
				if (x_end<x_start)
				{
					for (int i=x_end+1;i<x_start;i++)
					{
						if (doska[y_start][i]!=' ')
						{
							prover++;
						}	
					}	
				}	
			}
		}
	}
	if (prover==0)
	{
		Dvizenie(x_start,y_start,x_end,y_end);
		
	}
	if (prover!=0 && proverochka!=0)
	{
		printf("Error: neverno zadani koordinati dvizeniya");
		return 0;	
	}
	return kod_sbros;
}
