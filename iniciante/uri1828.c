#include <stdio.h>
#include <string.h>

int main()
{
  const char *gm1="pedra", *gm2="papel", *gm3="tesoura", *gm4="lagarto", *gm5="Spock";
  char s[20], r[20], ch, *she, *raj; int run=1,cas=1,n,i; char hap[100][100]={"Bazinga!","Raj trapaceou!","De novo!"};
  int score;
  scanf("%d", &n);
  for(i=0;i<n;i++)
  {
      while((ch = getchar() != '\n') && ch != EOF);
      scanf("%s %s",s,r);
      she = s; raj = r;
      if(!strcmp(she, raj))
         {score = 2;}
        else
        {
          if(!strcmp(she,gm1) && !strcmp(raj,gm2)) score = 1; else if(!strcmp(she,gm2) && !strcmp(raj,gm1)) score = 0;
          if(!strcmp(she,gm1) && !strcmp(raj,gm3)) score = 0; else if(!strcmp(she,gm3) && !strcmp(raj,gm1)) score = 1;
          if(!strcmp(she,gm1) && !strcmp(raj,gm4)) score = 0; else if(!strcmp(she,gm4) && !strcmp(raj,gm1)) score = 1;
          if(!strcmp(she,gm1) && !strcmp(raj,gm5)) score = 1; else if(!strcmp(she,gm5) && !strcmp(raj,gm1)) score = 0;
          if(!strcmp(she,gm2) && !strcmp(raj,gm3)) score = 1; else if(!strcmp(she,gm3) && !strcmp(raj,gm2)) score = 0;
          if(!strcmp(she,gm2) && !strcmp(raj,gm4)) score = 1; else if(!strcmp(she,gm4) && !strcmp(raj,gm2)) score = 0;
          if(!strcmp(she,gm2) && !strcmp(raj,gm5)) score = 0; else if(!strcmp(she,gm5) && !strcmp(raj,gm2)) score = 1;
          if(!strcmp(she,gm3) && !strcmp(raj,gm4)) score = 0; else if(!strcmp(she,gm4) && !strcmp(raj,gm3)) score = 1;
          if(!strcmp(she,gm3) && !strcmp(raj,gm5)) score = 1; else if(!strcmp(she,gm5) && !strcmp(raj,gm3)) score = 0;
          if(!strcmp(she,gm4) && !strcmp(raj,gm5)) score = 0; else if(!strcmp(she,gm5) && !strcmp(raj,gm4)) score = 1;
        }


      printf("Caso #%d: %s\n", cas, hap[score]); cas++;
  }
  return 0;
}
