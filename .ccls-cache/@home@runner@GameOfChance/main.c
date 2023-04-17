#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status { CONTINUE, WON, LOST };

int rollDice(void);

int main(void) {

  srand(time(NULL));

  int sum;
  int myPoint;
  enum Status gameStatus;

  sum = rollDice();

  switch (sum) {
  case 7:
  case 11:
    gameStatus = WON;
    break;

  case 2:
  case 3:
  case 12:
    gameStatus = LOST;
    break;

  default:
    myPoint = sum;
    gameStatus = CONTINUE;
    printf("My point is %d: \n", myPoint);
    break;
  }

  while (CONTINUE == gameStatus) {
      sum = rollDice();

      if (sum == myPoint) {
        gameStatus = WON;
      } else if (sum == 7) {
        gameStatus = LOST;
      }
    }
    // display won or lost message
    if (WON == gameStatus) {
      puts("Player wins");
    } else {
      puts("Player lost");
    }

  return 0;
}

int rollDice(void) {
  int dice1, dice2;

  dice1 = 1 + rand() % 6;
  dice2 = 1 + rand() % 6;

  printf("Player rolled: %d + %d = %d\n ", dice1, dice2, dice1+dice2);

  return dice1 + dice2;
}