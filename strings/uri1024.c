#include <stdio.h>
#include <string.h>

void cript(char str[])
{
  char wrd[1001]; int e, a;
  int i, size, nsize;
  for(i = 0; i<strlen(str);i++)
  {
    if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') str[i] += 3;
  }
  a=strlen(str)-1; e=0;
  while(str[a] != EOF)
  {
    wrd[e] = str[a];
    e++; a--;
  }
  size = strlen(wrd); nsize = strlen(wrd)/2;
  for(i=nsize; i<size; i++)
    wrd[i] -= 1;

    printf("%s\n", wrd);
  return;
}

int main()
{
  int N, i; char ch, word[1001];
  scanf("%d", &N);
  for(i=0; i<N; i++)
  {
    while ((ch = getchar() != '\n') && ch != EOF);
    scanf("%[^\n]", word);
    cript(word);
  }
  return 0;
}
