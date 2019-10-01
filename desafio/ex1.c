#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// A função randomize inicializa o gerador
// de números aleatórios de modo que os
// resultados das invocações de randomInteger
// sejam imprevisíveis.

void randomize (void)
{
    srand (time (NULL));
}
// A função randomInteger devolve um inteiro
// aleatório entre low e high inclusive,
// ou seja, no intervalo fechado low..high.
// Vamos supor que low <= high e que
// high - low + 1 <= RAND_MAX + 1.
// (O código foi copiado da biblioteca random
// de Eric Roberts.)

int randomInteger (int low, int high)
{
    int k;
    double d;
    d = (double) rand () / ((double) RAND_MAX + 1);
    k = d * (high - low + 1);
    return low + k;
}

// Esta função recebe um vetor v[0..n-1]
// e um índice k tal que 0 <= k < n.
// Ela devolve v[k] e remove esse
// elemento do vetor.

int remove_r (int k, int n, int v[], int *p) {
   int x = v[k];
   if (k < n-1) {
      int y = remove_r (k+1, n, v, p);
      v[k] = y;
   }
   else (*p)--;

   return x;
}

// A seguinte função recebe um numero inteiro n > 0
// e uma sequencia de n numeros inteiros
// retorna o endereço de v[0..n-1]
// preenchido com n elementos.

int * aloca_vetor (int n)
{
  int *v, i=0;
  v = (int*) malloc (sizeof(int) * n);
  randomize ();
  while (i < n) {
    v[i] = randomInteger (0, 10);
    i++;
  }
  return v;
}
//Essa função recebe dois inteiros
//k e n, um vetor v[0..n] e o endereço de n (p).
//Imprime informaçoes a fim de demonstrar
//eficácia da função remove_r.

void imprime (int k, int n, int v[])
{
  int i, x, *p;
  p = &n;
  printf ("Vetor v[0..%d]:\n", n-1);
  printf("Elemento a ser removido v[%d] = %d\n\n", k, v[k]);

  for (i = 0; i < n; i++)
    printf ("v[%d] = %d\n", i, v[i]);
  printf ("\n");

  x = remove_r (k, n, v, p);

  printf ("Vetor v[0..%d]:\n", n-1);
  printf("Elemento removido v[%d] = %d\n\n", k, x);

  for (i = 0; i < n; i++)
    printf ("v[%d] = %d\n", i, v[i]);
  printf ("\n");
}

int main (int argc, char const *argv[])
{
  int *v;
  int k, i, n=100;
  randomize ();
  k = randomInteger (0, 99);
  v = aloca_vetor (n);
  imprime (k, n, v);
  return 0;
}
