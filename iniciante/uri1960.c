#include <stdio.h>

int main()
{
  int N,conRom, i;
  int split[]={1000,500,100,50,10,5,1}, left[6];
  char rom[]={"IVXLCDM"};

  scanf("%d", &N);
  if(N>=1000 || N<=0)
    return 0;

  for(i=0;i<7;i++)
  {
    conRom = N/split[i];
    N = N%split[i];
    left[i]=conRom;
  }
  /* HUNDREDS */
  if(left[1]==1 && left[2] != 4)
  {
    printf("%c", rom[5]);
    left[1]=0;
  }
  else if(left[1]==1 && left[2]==4)
  {
    printf("%c%c", rom[4],rom[6]);
    left[2]=0;
    left[1]=0;
  }
  if (left[2]>0 && left[2]<=3){
    for(i=0;i<left[2];i++)
      printf("%c", rom[4]);
      left[2]=0;
  }
  else if(left[2]==4 && left[1]==0)
  {
    printf("%c%c", rom[4],rom[5]);
    left[2]=0;
  }
  /*  DOZENS  */
  if(left[3]==1 && left[4] != 4)
  {
    printf("%c", rom[3]);
    left[3]=0;
  }
  else if(left[3]==1 && left[4]==4)
  {
    printf("%c%c", rom[2],rom[4]);
    left[3]=0;
    left[4]=0;
  }
  if (left[4]>0 && left[4]<=3){
    for(i=0;i<left[4];i++)
      printf("%c", rom[2]);
      left[4]=0;
  }
  else if(left[4]==4 && left[3]==0)
  {
    printf("%c%c", rom[2],rom[3]);
    left[4]=0;
  }

  /* UNITS  */

  if(left[5]==1 && left[6]==4)
  {
    printf("%c%c", rom[0],rom[2]);
    left[5]=0;
    left[6]=0;
  }
  else if(left[5]==1 && left[6]!=4)
  {
    printf("%c", rom[1]);
    left[5]=0;
  }
  if (left[6]>0 && left[6]<=3){
    for(i=0;i<left[6];i++)
      printf("%c", rom[0]);
      left[6]=0;
  }

  else if(left[6]==4 && left[5]==0)
  {
    printf("%c%c", rom[0],rom[1]);
    left[4]=0;
    left[6]=0;
  }
  printf("\n");

  return 0;
}
