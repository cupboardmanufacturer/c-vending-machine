#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  float pepsi = 3.00;
  float coca = 3.00;
  float fanta = 3.00;
  float sprite = 3.00;
  float water = 1.50;
  float lemonade = 2.00;
  float lays = 1.50;
  float doritos = 1.50;
  float ruffles = 1.50;
  float cheetos = 1.50;
  float takis = 1.50;
  float snickers = 1.00;
  float kitkat = 1.00;
  float hersheys = 1.00;
  float MnMs = 1.00;
  float mints = 0.50;
  float gum = 1.50;
  char orb[] = "???";
  char sel[2];
  float money;
  float moneyN;
  float change;
  char name[10];
  char yn;
  char t[10]; // idk nothing i think

  printf("\n\n\n    a1    a2    a3    a4    a5\n");
  printf("   pepsi cola fanta sprite water\n");
  printf("   $3.00 $3.00 $3.00 $3.00 $1.50\n\n");
  printf("   a6     a7    a8      a9      b1\n");
  printf("lemonade lays doritos ruffles cheetos\n");
  printf(" $2.00  $1.50  $1.50   $1.50   $1.50\n\n");
  printf("  b2      b3      b4     b5      b6\n");
  printf("takis  snickers kitkat hersheys MnMs\n");
  printf("$1.50    $1.00   $1.00   $1.00 $1.00\n\n");
  printf("            b7     b8    z0\n");
  printf("           mints   gum   orb\n");
  printf("           $0.50  $1.50  $???\n\n");

  printf("enter code:");
  scanf("%s", sel);

  if (strcmp(sel, "a1") == 0) {
    strcpy(name, "pepsi");
    moneyN = 3.00;
  } else if (strcmp(sel, "a2") == 0) {
    strcpy(name, "cola");
    moneyN = 3.00;
  } else if (strcmp(sel, "a3") == 0) {
    strcpy(name, "fanta");
    moneyN = 3.00;
  } else if (strcmp(sel, "a4") == 0) {
    strcpy(name, "sprite");
    moneyN = 3.00;
  } else if (strcmp(sel, "a5") == 0) {
    strcpy(name, "water");
    moneyN = 1.50;
  } else if (strcmp(sel, "a6") == 0) {
    strcpy(name, "lemonade");
    moneyN = 2.00;
  } else if (strcmp(sel, "a7") == 0) {
    strcpy(name, "lays");
    moneyN = 1.50;
  } else if (strcmp(sel, "a8") == 0) {
    strcpy(name, "doritos");
    moneyN = 1.50;
  } else if (strcmp(sel, "a9") == 0) {
    strcpy(name, "ruffles");
    moneyN = 1.50;
  } else if (strcmp(sel, "b1") == 0) {
    strcpy(name, "cheetos");
    moneyN = 1.50;
  } else if (strcmp(sel, "b2") == 0) {
    strcpy(name, "takis");
    moneyN = 1.50;
  } else if (strcmp(sel, "b3") == 0) {
    strcpy(name, "snickers");
    moneyN = 1.00;
  } else if (strcmp(sel, "b4") == 0) {
    strcpy(name, "kitkat");
    moneyN = 1.00;
  } else if (strcmp(sel, "b5") == 0) {
    strcpy(name, "hersheys");
    moneyN = 1.00;
  } else if (strcmp(sel, "b6") == 0) {
    strcpy(name, "MnMs");
    moneyN = 1.00;
  } else if (strcmp(sel, "b7") == 0) {
    strcpy(name, "mints");
    moneyN = 0.50;
  } else if (strcmp(sel, "b8") == 0) {
    strcpy(name, "gum");
    moneyN = 1.50;
  } else if (strcmp(sel, "z0") == 0) {
    printf("Error:HUT54IHT54ITH");
    printf("enter to continue\n");
    while (getchar() != '\n')
      ;
    getchar();
    main();
  } else {
    printf("invalad code");
    printf("press enter to continue\n");
    while (getchar() != '\n')
      ;
    getchar();
    main();
  }

  printf("you are getting %s\n", name);
  printf("y/n ");
  scanf(" %c", &yn);

  if (yn == 'n') {
    main();
  }

  printf("insert money:");
  scanf("%f", &money);
  change = money - moneyN;
  if (change < 0) {
    printf("not enough money");
    printf("\npress enter to continue\n");
    while (getchar() != '\n')
      ;
    getchar();
    main();
  }
  printf("your change is %.2f", change);
  runAgain();
}





int runAgain(void) {

  char again;
  printf("\nget another item? (y/n)  ");
  scanf(" %c", &again);

  if (again == 'y') {

    system("clear");
    main();

  } else if (again == 'n') {
    return 0;

  } else {

    printf("invalad input");
    runAgain();

  }
  return 0;
}
