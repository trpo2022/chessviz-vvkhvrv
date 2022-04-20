#include <stdio.h>
#include <string.h>
#include "funcktion.h"

extern char doska[8][8];

int Proverka_vvedennogo(int kod_sbros)
{   
	int hod,x_start,x_end,y_start,y_end; 
	char hod_white[6];
	char hod_black[6];
	if (kod_sbros%2!=0)
		scanf("%s",hod_white);
	else
		scanf("%s",hod_black);
	if (kod_sbros%2!=0)	
		if (kod_sbros!=0)
			if (strlen(hod_white)!=5)
			{
				kod_sbros=0;
				printf("^\n");
				printf("|\n");
				printf("Erorr: Neverno vvedeniye dannie");
			}	
	if (kod_sbros%2==0)	
		if (kod_sbros!=0)
			if (strlen(hod_black)!=5)
			{
				kod_sbros=0;
				for (int i=0;i<=strlen(hod_white);i++)
				{
					printf(" ");		
				}
				printf("^\n");
				for (int i=0;i<=strlen(hod_white);i++)
				{
					printf(" ");		
				}
				printf("|\n");
				for (int i=0;i<=strlen(hod_white);i++)
				{
					printf(" ");		
				}
				printf("Erorr: Neverno vvedeniye dannie");
			}
	if (kod_sbros%2!=0)			
		if (kod_sbros!=0)
		{   
			if (hod_white[0]!='a' && hod_white[0]!='b' && hod_white[0]!='c' && hod_white[0]!='d' && hod_white[0]!='e' && hod_white[0]!='f' && hod_white[0]!='g' && hod_white[0]!='h')
			{
				kod_sbros=0;
				printf("^\n");
				printf("|\n");
				printf("Erorr: Neverno vvedeniye dannie");
			}
		}
	if (kod_sbros%2==0)
		if (kod_sbros!=0)
		{
			if (hod_black[0]!='a' && hod_black[0]!='b' && hod_black[0]!='c' && hod_black[0]!='d' && hod_black[0]!='e' && hod_black[0]!='f' && hod_black[0]!='g' && hod_black[0]!='h')
			{
				kod_sbros=0;
				for (int i=0;i<=strlen(hod_white);i++)
				{
					printf(" ");		
				}
				printf("^\n");
				for (int i=0;i<=strlen(hod_white);i++)
				{
					printf(" ");		
				}
				printf("|\n");
				for (int i=0;i<=strlen(hod_white);i++)
				{
					printf(" ");		
				}
				printf("Erorr: Neverno vvedeniye dannie");
			}
		}
	if (kod_sbros%2!=0)		
		if (kod_sbros!=0)
		{   
			if (hod_white[3]!='a' && hod_white[3]!='b' && hod_white[3]!='c' && hod_white[3]!='d' && hod_white[3]!='e' && hod_white[3]!='f' && hod_white[3]!='g' && hod_white[3]!='h')
			{
				kod_sbros=0;
				printf("   ^\n");
				printf("   |\n");
				printf("   Erorr: Neverno vvedeniye dannie");
			}		
		}
	if (kod_sbros%2==0)	
		if (kod_sbros!=0)
		{   
			if (hod_black[3]!='a' && hod_black[3]!='b' && hod_black[3]!='c' && hod_black[3]!='d' && hod_black[3]!='e' && hod_black[3]!='f' && hod_black[3]!='g' && hod_black[3]!='h')
			{
				kod_sbros=0;
				for (int i=0;i<=strlen(hod_white);i++)
				{
					printf(" ");		
				}
				printf("   ^\n");
				for (int i=0;i<=strlen(hod_white);i++)
				{
					printf(" ");		
				}
				printf("   |\n");
				for (int i=0;i<=strlen(hod_white);i++)
				{
					printf(" ");		
				}
				printf("   Erorr: Neverno vvedeniye dannie");
			}
		}
	if (kod_sbros%2!=0)	
	{	
		y_start=hod_white[1]-'0';
		y_start=(y_start-8)*(-1);
		y_end=hod_white[4]-'0';
		y_end=(y_end-8)*(-1);
		if (kod_sbros!=0)
		{   
			if (y_start<1 || y_start>8)
			{
				kod_sbros=0;
				printf(" ^\n");
				printf(" |\n");
				printf(" Erorr: Neverno vvedeniye dannie");
			}
			if (y_end<1 || y_end>8)
			{
				kod_sbros=0;
				printf("    ^\n");
				printf("    |\n");
				printf("    Erorr: Neverno vvedeniye dannie");
			}
		}
	}
	if (kod_sbros%2==0)
	{	
		y_start=hod_black[1]-'0';
		y_start=(y_start-8)*(-1);
		y_end=hod_black[4]-'0';
		y_end=(y_end-8)*(-1);
		if (kod_sbros!=0)
		{   
			if (y_start<1 || y_start>8)
			{
				kod_sbros=0;
				printf("      ^\n");
				printf("      |\n");
				printf("      Erorr: Neverno vvedeniye dannie");
			}
			if (y_end<1 || y_end>8)
			{
				kod_sbros=0;
				printf("        ^\n");
				printf("        |\n");
				printf("        Erorr: Neverno vvedeniye dannie\n");
			}
		}
	}
	if (kod_sbros%2!=0)
		if (kod_sbros!=0)
		{   
			if (hod_white[2]!='-' && hod_white[2]!='x')
			{
				kod_sbros=0;
				printf("  ^\n");
				printf("  |\n");
				printf("  Erorr: Neizvestnoe deystvie");
			}		
		}
	if (kod_sbros%2==0)	
		if (kod_sbros!=0)
		{   
			if (hod_black[2]!='-' && hod_black[2]!='x')
			{
				kod_sbros=0;
				for (int i=0;i<=strlen(hod_white);i++)
				{
					printf(" ");		
				}
				printf("  ^\n");
				for (int i=0;i<=strlen(hod_white);i++)
				{
					printf(" ");		
				}
				printf("  |\n");
				for (int i=0;i<=strlen(hod_white);i++)
				{
					printf(" ");		
				}
				printf("  Erorr: Neizvestnoe deystvie");
			}
		}
	if (kod_sbros%2!=0)
	{
		x_start=hod_white[0]- '0';
		x_start=x_start - 49;
		y_start=hod_white[1]-'0';
		y_start=(y_start-8)*(-1);
		x_end=hod_white[3]- '0';
		x_end=x_end - 49;
		y_end=hod_white[4]-'0';
		y_end=(y_end-8)*(-1);
		hod=0;
		if (kod_sbros!=0)
		{
			if (hod_white[2]=='-')
				kod_sbros=Dvizenie(x_start,x_end,y_start,y_end,hod,kod_sbros);
			else
				kod_sbros=Vzatie(x_start,x_end,y_start,y_end,hod,kod_sbros);	
		}
	}
	if (kod_sbros%2==0)
	{
		x_start=hod_black[0]- '0';
		x_start=x_start - 49;
		y_start=hod_black[1]-'0';
		y_start=(y_start-8)*(-1);
		x_end=hod_black[3]- '0';
		x_end=x_end - 49;
		y_end=hod_black[4]-'0';
		y_end=(y_end-8)*(-1);
		hod=1;
		if (kod_sbros!=0)
		{
			if (hod_black[2]=='-')
				kod_sbros=Dvizenie(x_start,x_end,y_start,y_end,hod,kod_sbros);
			else
				kod_sbros=Vzatie(x_start,x_end,y_start,y_end,hod,kod_sbros);
		}
	}
	return kod_sbros;
}
