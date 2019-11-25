#include <stdio.h>

void TorreHanoi (int disco, char x, char a, char aux);
int
main (void)
{
  int max;
  printf("Ingresa el numero de discos ");
  scanf ("%d", &max);
  TorreHanoi (max, 'A', 'B', 'C');
  printf ("\n");
  return 0;
}

void
TorreHanoi (int disco, char x, char a, char aux)
{
  if (disco == 1)
    {
      printf ("Disco %d: %c -> %c\n", disco, x, a);
      return;
    }
  TorreHanoi (disco - 1, x, aux, a);
  printf ("Disco %d: %c -> %c\n", disco, x, a);
  TorreHanoi (disco - 1, aux, a, x);
}
