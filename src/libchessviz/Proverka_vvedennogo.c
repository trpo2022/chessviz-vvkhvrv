#include <stdio.h>
#include <string.h>
#include "funcktion.h"

extern char doska[8][8];

int Proverka_vvedennogo(int kod_sbros,char *hodi)
{   
	
	int hod,x_start,x_end,y_start,y_end,deystvie; 
	if (kod_sbros!=0)
		if (strlen(hodi)!=5 && strlen(hodi)!=6)
		{
			kod_sbros=0;
			printf("Erorr: Neverno vvedeniye dannie");
		}	
			
	if (kod_sbros!=0 && strlen(hodi)==5)
	{   
		if (hodi[0]!='a' && hodi[0]!='b' && hodi[0]!='c' && hodi[0]!='d' && hodi[0]!='e' && hodi[0]!='f' && hodi[0]!='g' && hodi[0]!='h')
		{
			kod_sbros=0;
			printf("Erorr: Neverno vvedeniye dannie");
		}
	}
	if (kod_sbros!=0 && strlen(hodi)==6)
	{
		if (hodi[1]!='a' && hodi[1]!='b' && hodi[1]!='c' && hodi[1]!='d' && hodi[1]!='e' && hodi[1]!='f' && hodi[1]!='g' && hodi[1]!='h')
		{
			kod_sbros=0;
			printf("Erorr: Neverno vvedeniye dannie");
		}
	}	
	if (kod_sbros!=0 && strlen(hodi)==5)
	{   
		if (hodi[3]!='a' && hodi[3]!='b' && hodi[3]!='c' && hodi[3]!='d' && hodi[3]!='e' && hodi[3]!='f' && hodi[3]!='g' && hodi[3]!='h')
		{
			kod_sbros=0;
			printf("Erorr: Neverno vvedeniye dannie");
		}		
	}
	if (kod_sbros!=0 && strlen(hodi)==6)
	{   
		if (hodi[4]!='a' && hodi[4]!='b' && hodi[4]!='c' && hodi[4]!='d' && hodi[4]!='e' && hodi[4]!='f' && hodi[4]!='g' && hodi[4]!='h')
		{
			kod_sbros=0;
			printf("Erorr: Neverno vvedeniye dannie");
		}		
	}
	if (strlen(hodi)==5)	
	{	
		y_start=hodi[1]-'0';
		y_start=(y_start-8)*(-1);
		y_end=hodi[4]-'0';
		y_end=(y_end-8)*(-1);
		if (kod_sbros!=0)
		{   
			if (y_start<0 || y_start>7)
			{
				kod_sbros=0;
				printf("Erorr: Neverno vvedeniye dannie");
			}
			if (y_end<0 || y_end>7)
			{
				printf("Erorr: Neverno vvedeniye dannie");
			}
		}
	}
	else
	{	
		y_start=hodi[2]-'0';
		y_start=(y_start-8)*(-1);
		y_end=hodi[5]-'0';
		y_end=(y_end-8)*(-1);
		if (kod_sbros!=0)
		{   
			if (y_start<0 || y_start>7)
			{
				kod_sbros=0;
				printf("Erorr: Neverno vvedeniye dannie");
			}
			if (y_end<0 || y_end>7)
			{
				kod_sbros=0;
				printf("Erorr: Neverno vvedeniye dannie\n");
			}
		}
	}
	if (strlen(hodi)==5)
	{
		if (kod_sbros!=0)
		{   
			if (hodi[2]!='-' && hodi[2]!='x')
			{
				kod_sbros=0;
				printf("Erorr: Neizvestnoe deystvie");
			}		
		}
	}
	else
	{
		if (kod_sbros!=0)
		{   
			if (hodi[3]!='-' && hodi[3]!='x')
			{
				kod_sbros=0;
				printf("Erorr: Neizvestnoe deystvie");
			}		
		}
	}
	if (strlen(hodi)==5)
	{
		x_start=hodi[0]- '0';
		x_start=x_start - 49;
		y_start=hodi[1]-'0';
		y_start=(y_start-8)*(-1);
		x_end=hodi[3]- '0';
		x_end=x_end - 49;
		y_end=hodi[4]-'0';
		y_end=(y_end-8)*(-1);
		hod=kod_sbros%2;
		if (kod_sbros!=0)
		{
			
			if (hodi[2]=='-')
			{
			
				kod_sbros=Peshka(x_start,x_end,y_start,y_end,hod,kod_sbros,0);
			}
			else
			{
			
				kod_sbros=Peshka(x_start,x_end,y_start,y_end,hod,kod_sbros,1);
			}
		}
	}
	else
	{
		x_start=hodi[1]- '0';
		x_start=x_start - 49;
		y_start=hodi[2]-'0';
		y_start=(y_start-8)*(-1);
		x_end=hodi[4]- '0';
		x_end=x_end - 49;
		y_end=hodi[5]-'0';
		y_end=(y_end-8)*(-1);
		hod=kod_sbros%2;
		if (hodi[3]=='-')
		deystvie=0;
		else
		deystvie=1;
		if (kod_sbros!=0)	
		{
			if (hodi[0]=='R')
			{
				kod_sbros=Ladya(x_start,x_end,y_start,y_end,hod,kod_sbros,deystvie);
			}
			if (hodi[0]=='B')
			{
				kod_sbros=Slon(x_start,x_end,y_start,y_end,hod,kod_sbros,deystvie);
			}
			if (hodi[0]=='N')
			{
				kod_sbros=Kon(x_start,x_end,y_start,y_end,hod,kod_sbros,deystvie);
			}
			if (hodi[0]=='Q')
			{
				kod_sbros=Koroleva(x_start,x_end,y_start,y_end,hod,kod_sbros,deystvie);
			}
			if (hodi[0]=='K')
			{
				kod_sbros=Korol(x_start,x_end,y_start,y_end,hod,kod_sbros,deystvie);
			}
		}
	}
	return kod_sbros;
}
