#include <stdio.h>
char board[8][8];

void Fill_board_in_begin()
{
    board[0][0]='r';
    board[0][1]='n';
    board[0][2]='b';
    board[0][3]='q';
    board[0][4]='k';
    board[0][5]='b';
    board[0][6]='n';
    board[0][7]='r';
    for (int column_number=0;column_number<=7;column_number++)
    {
	    board[1][column_number]='p';
    }
    for (int column_number=2;column_number<=5;column_number++)
    {
	    for (int line_number=0;line_number<=7;line_number++)
		    board[column_number][line_number]=' ';
    }
    board[7][0]='R';
    board[7][1]='N';
    board[7][2]='B';
    board[7][3]='Q';
    board[7][4]='K';
    board[7][5]='B';
    board[7][6]='N';
    board[7][7]='R';
    for (int column_number=0;column_number<=7;column_number++)
    {
        board[6][column_number]='P';
    }
}

void Vivod_board()
{
     for (int column_number=0;column_number<=8;column_number++)
     {	   
	    if (column_number!=8)
	       printf("%d ",8-column_number);
	    else
	       printf("  ");
	    for (int line_number=0;line_number<=7;line_number++)
	       if (column_number!=8)
		  printf("%c ",board[column_number][line_number]);
	       else
	       {
		  enum { kodsimvola_a = 97};
		  putchar(line_number+kodsimvola_a);
		  printf(" ");
	       }
	    printf("\n");
	    if (column_number==7)
	       printf("\n");
     }	
}

int main()
{   
    Fill_board_in_begin();
    Vivod_board();
    return 0;
}
