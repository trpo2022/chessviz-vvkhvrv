 #ifndef function
 #define function
 
extern char doska[8][8];

void Dvizenie(int x_start,int y_start,int x_end,int y_end);
int Kon(int x_start, int x_end, int y_start, int y_end, int hod, int kod_sbros,int deystvie);
int Korol(int x_start, int x_end, int y_start, int y_end, int hod, int kod_sbros,int deystvie);
int Koroleva(int x_start, int x_end, int y_start, int y_end, int hod, int kod_sbros,int deystvie);
int Ladya(int x_start, int x_end, int y_start, int y_end, int hod, int kod_sbros,int deystvie);
int Peshka(int x_start, int x_end, int y_start, int y_end, int hod, int kod_sbros,int deystvie);
int Proverka_vvedennogo(int kod_sbros,char *hodi);
int Slon(int x_start, int x_end, int y_start, int y_end, int hod, int kod_sbros,int deystvie);
void Vivod_doski();
void Fill_doska_in_begin();

 #endif
