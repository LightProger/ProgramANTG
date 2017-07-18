#include <stdio.h>

int main (void)
{
  // Переменные
  char one = 1;
  char two = 2;
  char three = 3;
  char four = 4;
  char five =5;

  // Указатели
  char* onePointer = NULL;
  char* twoPointer = NULL;
  char* threePointer = NULL;
  char* fourPointer = NULL;
  char* fivePointer = NULL;

  // Присваиваем указателям значение переменных
  onePointer = &one;
  twoPointer = &two;
  threePointer = &three;
  fourPointer = &four;
  fivePointer = &five;

  // Выводим значения переменных
  printf ("One variable: %i\n", one);
  printf ("Two variable: %i\n", two);
  printf ("Three variable: %i\n", three);
  printf ("Four variable: %i\n", four);
  printf ("FIve variable: %i\n\n", five);

  // Выводим адреса переменных
  printf ("One adress: %p\n", onePointer);
  printf ("Two adress: %p\n", twoPointer);
  printf ("Three adress: %p\n", threePointer);
  printf ("Four adress: %p\n", fourPointer);
  printf ("FIve adress: %p\n\n", fivePointer);

  // Получаем значения переменных, через разименнованый указатель
  printf ("One value: %i\n", *onePointer);
  printf ("Two value: %i\n", *twoPointer);
  printf ("Three value: %i\n", *threePointer);
  printf ("Four value: %i\n", *fourPointer);
  printf ("FIve value: %i\n", *fivePointer);

  return 0;
}