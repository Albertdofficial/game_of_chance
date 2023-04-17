#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {CONTINUE, WON, LOST};

int rollDice(void);


int main(void) {
 
  srand(time(NULL));
  


  return 0;
}

int rollDice(void){
int dice1, dice2;

 dice1 = 1 + rand() % 6;
 dice2 = 1 + rand() % 6;

  printf("dice1: %d dice2: %d ",dice1, dice2);

return dice1 + dice2;



}