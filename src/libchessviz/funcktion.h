 #ifndef function
 #define function
 
extern char doska[8][8];

int Vzatie(int x_start, int x_end, int y_start, int y_end, int hod, int kod_sbros);
int Dvizenie(int x_start, int x_end, int y_start, int y_end, int hod, int kod_sbros);
int Proverka_vvedennogo(int kod_sbros);
void Vivod_doski();
void Fill_doska_in_begin();

 #endif
