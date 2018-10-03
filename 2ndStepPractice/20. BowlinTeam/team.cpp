#include <iostream>

int main (int argc,char *argv[])
{
  int lefties, righties, funk; // lefties, righties can only play one hand. funk can do both
int teamSize; // max team size
scanf("%d%d%d", &lefties , &righties , &funk );

  while (funk >0)
  {
    if (lefties<righties){
      lefties ++;
      funk --;
    }
    else
    {
      righties++;
      funk--;
    }
  }
if(lefties>righties)
{
  teamSize = righties * 2 ;
}
else
{
    teamSize = lefties * 2 ;
}
printf("%d",teamSize);


  return 0;
}
