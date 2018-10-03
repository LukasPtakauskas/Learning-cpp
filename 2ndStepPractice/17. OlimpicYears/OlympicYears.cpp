#include <iostream>

int main(int argc,char *argv[]){
  int year; // the year in question
  int firstOlympicYear = 1896; // 1896 is the first olympic year.
  int olympicCount; // which olympic year is it?

scanf("%d",&year);

if ((year-firstOlympicYear)%4==0 && year>=firstOlympicYear)
{
  olympicCount = (year - firstOlympicYear) / 4 + 1 ;
  printf("TAIP %d", olympicCount);
}
else
{
printf("NE");
}


  return 0;
}
