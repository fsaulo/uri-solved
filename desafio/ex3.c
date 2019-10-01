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

// Esta função insere x entre v[k]
// e v[k+1] no vetor v[0..n]
// para qualquer inteiro k tal que
// 0 <= k <= n.

int insere_r (int k, int x, int n, int *v, int *p)
{
  int j = v[n-1];
  v[n] = j;

  if (n > k) {
    int y = insere_r (k, x, n-1, v, p);
    v[k] = y;
  }

// Esta parte incrementa o conteúdo de n apontado por p.

  else (*p)++;

// Esta parte aloca dinamicamente memória no sistema para v
// equivalente à (n+1).
// Assim, depois disso v[0..n-1] passa a ser v[0..n].

  v = (int*) malloc (sizeof(int) * (n+1));
  v[k] = x;

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

// Essa função recebe dois inteiros
// k e n, um vetor v[0..n] e o endereço de n (p).
// Imprime informaçoes a fim de demonstrar
// eficácia da função remove_r.

void imprime (int k, int x, int n, int v[])
{
  int i, z, *p;
  p = &n;
  printf ("Vetor v[0..%d]:\n\n", n-1);


  for (i = 0; i < n; i++)
    printf ("v[%d] = %d\n", i, v[i]);
  printf ("\n");

  z = insere_r (k, x, n, v, p);

  printf("Elemento a ser incrementado em v[%d] = %d\n", k, x);
  printf ("Vetor v[0..%d]:\n\n", n-1);

  for (i = 0; i < n; i++)
    printf ("v[%d] = %d\n", i, v[i]);
  printf ("\n");
}

int main (int argc, char const *argv[])
{
  int *v;
  int x, i, k=2, n=10;
  randomize ();
  x = randomInteger (0, 10);
  v = aloca_vetor (n);
  imprime (k, x, n, v);

  return 0;
}
