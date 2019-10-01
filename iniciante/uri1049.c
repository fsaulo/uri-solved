/*
  Animal URI 1049
                              */
#include <stdio.h>

int main()
{
  char c1[20], c2[20], c3[20];
  scanf("%s%s%s", &c1, &c2, c3);

  if(c1[0] == 'v')
  {
    if(c2[0] == 'a')
    {
      if(c3[0] == 'c')
      printf("aguia\n");
      else
      printf("pomba\n");
    }
    else if(c2[0] == 'm')
    {
      if(c3[0] == 'o')
      printf("homem\n");
      else
      printf("vaca\n");
    }
  }
  else
  {
    if(c1[0] == 'i')
    {
      if(c2[0] == 'a')
      {
        if(c3[0] == 'h')
        printf("sanguessuga\n");
        else
        printf("minhoca\n");
      }
      else if(c2[0] == 'i')
      {
        if(c3[2] == 'r')
        printf("lagarta\n");
        else
        printf("pulga\n");
      }
    }
  }
  return 0;
}
