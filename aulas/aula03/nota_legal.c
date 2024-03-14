#include <stdio.h>

int main() {
  printf("\x1b[33m-------------------------\n");
  printf("   N O T A  L E G A L\n");
  printf("-------------------------\n\x1b[0m");
  printf("\x1b[32mITEM          QTD VALOR\x1b[0m\n");
  printf("\x1b[34m%-13s %03i %5.2f\n","Banana nanica",1,15.00);
  printf("%-13s %03i %5.2f\n","Maca fuji",10,50.00);
  printf("%-13s %03i %5.2f\x1b[0m\n","Uva globo",5,26.00);
  printf("\x1b[33m-------------------------\n");
  printf("\x1b[30mTOTAL.........:R$ %4.2f\n",91.00);

  /*printf("Banana nanica    1  15.00\n");
  printf("Maca fuji       10  50.00\n");
  printf("Uva globo        5  26.00\n");*/
    
  
  return 0;
}