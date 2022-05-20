#include <ctest.h>
#include <lib/funcktion.h>
#include <math.h>
#include <stdio.h>
#define size 128

char doska[8][8];

CTEST(chessviz, nevernie_dannie)
{
	char a[3]="dog";
	
	int exp = Proverka_vvedennogo(1,a);
	int res=0;
    res = res + 0;
    exp = exp + 0;
    ASSERT_EQUAL(exp, res);
}

CTEST(chessviz, peshka_neverno)
{
	Fill_doska_in_begin();
	int exp = Peshka(4,5,6,4,1,1,0);
	int res=0;
    res = res + 0;
    exp = exp + 0;
    ASSERT_EQUAL(exp, res);
}

CTEST(chessviz, peshka_verno)
{
	Fill_doska_in_begin();
	int exp = Peshka(4,4,6,4,1,1,0);
	int res=1;
    res = res + 0;
    exp = exp + 0;
    ASSERT_EQUAL(exp, res);
}

CTEST(chessviz, kon_verno)
{
	Fill_doska_in_begin();
	int exp = Kon(6,7,7,5,1,1,0);
	int res=1;
    res = res + 0;
    exp = exp + 0;
    ASSERT_EQUAL(exp, res);
}

CTEST(chessviz, kon_neverno)
{
	Fill_doska_in_begin();
	int exp = Kon(6,0,7,2,1,1,0);
	int res=0;
    res = res + 0;
    exp = exp + 0;
    ASSERT_EQUAL(exp, res);
}

