#include <iostream>
/*
Seką sudaro tam tikro pavidalo skaičiai:
1*1,2*3,3*5,4*7,5*9,...
Apskaičiuokite pirmųjų n sekos narių sumą.
*/

//seka A = A1 * A2
//A1 [n] = n
//A2 [n] = n*2 - 1 // nelyginiai

int main(int argc, char *argv[]){

int number; // how many numbers to be summed up?
int sum=0; // sum of the numbers in the forementioned sequence

scanf("%d",&number);//input
//calculation of sum
for(int i=1 ; i<=number;i++)
{
  //printf("%d + %d\n",sum,(i*(i*2-1)));// testing
  sum = sum + i*(i*2-1);
}

printf("%d",sum);// output

  return 0;
}
