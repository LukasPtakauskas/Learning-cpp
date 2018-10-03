#include <iostream>
#include <math.h>

/*
Panaudodami žemiau aprašytą algoritmą, ištraukite šaknį iš skaičiaus n nenaudodami sqrt komandos.
fakesqrt(a) = ((a + n/a) / 2)
Algoritmas : Ištraukime šaknį iš skaičiaus 10.
Pirmiausia pasirenkame bet kokį pradinį artinį, tarkime a=1.
Skaičiuojame sekančius artinius pagal atitinkamą formą:
fakesqrt(1) = ((1 + 10/1) / 2 )
*/

int main(int argc, char *argv[]){
double number;
double startingGuess;

//testing purposes to find the startingGuess number,
// might want to be a bit more accurate.
/*
double tmpa , ratio , total=0;
for (int i = 1 ; i < 165132 ; i ++)
{
  number = i; // silly duplication.
  tmpa = sqrt(number);
  printf("%lf / %lf = %lf\n", tmpa , number , tmpa/number);
  total += tmpa/number;
  if(total>800){printf("yis");}
}
// conclusion , the ratio starts to now get very different after sqrt(a)>400
// ratio:0.0025 going to use this as a kick off point :D
printf("%lf",total);
*/

double tmpb;

 scanf("%lf",&number);

 if (number < 10){
   startingGuess = 1;// a number
 }else if(number<100) {
   startingGuess = 6.81;//avg 1-100 : 6.81;
 }else if (number < 1000){
   startingGuess = 22.67; //avg 100-1000 : 22.67;
 }else if (number<10000){
   startingGuess = 71.72;//avg 1000-10000 : 71.72;
 }else {
   startingGuess = number * 0.0025;
 }

   while(true)
   {
       tmpb = startingGuess; // if not getting closer then break while loop.
       startingGuess = ((startingGuess + (number/startingGuess)) / 2);
       if (startingGuess == tmpb)
       break;
   }

/* doing guess work
int tmpc=0; // another temparory number to use in calculations.
int cycles=0; // how many cycles did it take to find an okay answer?
int loops=0; // how many numbers were calculated.
double sumRoot=0;
for (int i = 1 ; i < 1000000 ; i ++ )
{
  number=(float)i;
  if (number < 10){
    startingGuess = 1;// a number
  }else if(number<100) {
    startingGuess = 6.81;//avg 1-100 : 6.81;
  }else if (number < 1000){
    startingGuess = 22.67; //avg 100-1000 : 22.67;
  }else if (number<10000){
    startingGuess = 71.72;//avg 1000-10000 : 71.72;
  }else {
    startingGuess = number * 0.0025;
  }

    while(true)
    {
        tmpc ++;
        //printf("%lf\n%d. ", startingGuess, tmpc); // guessed right
        tmpb = startingGuess; // if not getting closer then break while loop.
        startingGuess = ((startingGuess + (number/startingGuess)) / 2);

        if (startingGuess == tmpb)
        break;
    }
    sumRoot += startingGuess;
  cycles += tmpc;
  tmpc = 0;
  loops ++;
}

printf ("avg cycles : %lf\n", ((float)cycles/(float) loops));
printf ("avg root   : %lf\n", (sumRoot/(float) loops));
*/


/* this is processing too much
for (int i=1 ; i < 69 ; i++)
{
  startingGuess = ((startingGuess + (number/startingGuess)) / 2);
}
*/
//printf("end"); // guessed right

printf("%.6lf", startingGuess); // guessed right



  return 0;
}
