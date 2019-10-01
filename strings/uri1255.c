#include <stdio.h>
#include <string.h>

int main ()
{
  struct freq
  {
    char dig; int numb;
  };
  int N, i, a, b; char text[201]; struct freq strc[26];
  int place, c, d, sniff=0;

  for(i = 0; i<26; i++)
  {
    strc[i].dig = 'a' + i;
    strc[i].numb = 0;
  }
  scanf("%d", &N);
  for(a = 0; a<N; a++)
  {
    char ch;
    while ((ch = getchar() != '\n') && ch != EOF);
    scanf ( "%[^\n]", text);

    for(b = 0; b<strlen(text); b++)
    {
      if(text[b] >= 'a' && text[b] <= 'z')
      {
        place = text[b] - 'a';
        strc[place].numb++;
      }
      if(text[b] >= 'A' && text[b] <= 'Z')
      {
        place = text[b] - 'A';
        strc[place].numb++;
      }
    }

    sniff = strc[0].numb;
    for(c = 1; c<26; c++)
    {
      if (strc[c].numb >= sniff)
      {
        sniff = strc[c].numb;
      }
    }
    for(d = 0; d<26; d++)
    {
      if(strc[d].numb == sniff)
      printf("%c", strc[d].dig);
    }
    printf("\n");

    for(i = 0; i<26; i++)
    {
      strc[i].dig = 'a' + i;
      strc[i].numb = 0;
    }
  }
  return 0;
}
