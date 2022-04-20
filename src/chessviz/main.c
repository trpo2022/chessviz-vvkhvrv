#include <stdio.h>
#include <libchessviz/funcktion.h>

extern char doska[8][8];

int main()
{   
	Fill_doska_in_begin();
	int who_hodit=1;
	while (who_hodit!=0)
	{
		Vivod_doski();
		who_hodit=Proverka_vvedennogo(who_hodit);
		if(who_hodit!=0)
			who_hodit++;
		printf("\n");	
	}
    return 0;
}
