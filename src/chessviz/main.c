#include <stdio.h>
#include <libchessviz/funcktion.h>

extern char doska[8][8];

int main()
{
    char hodi[7];
    Fill_doska_in_begin();
    int who_hodit=1;
    while (who_hodit!=0)
    {
        Vivod_doski();
        scanf("%s",hodi);
        who_hodit=Proverka_vvedennogo(who_hodit,hodi);
        if(who_hodit!=0)
        {
            who_hodit++;
        }
        printf("\n");
    }
    return 0;
}

