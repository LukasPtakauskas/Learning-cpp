#include <math.h>
#include <iostream>

int main(int argc, char *argv[]){
  double area; // the area of the rectangle
  double perimeter; // the Perimeter of the rectangle
  double sideA, sideB; // rectangle dimensions
  double Discriminant; //
  double quadraticSolution,quadraticSolution1,quadraticSolution2 ; // this might have one or two solutions.
//input
//  printf ( "input perimeter and area\n" );
  scanf ( "%lf%lf" , &perimeter , &area );

//double checking for mistakes
//  printf("P:%.0lf\nS:%.0lf\n",perimeter,area);

/*
{
sideA * sideB = area
2 * ( sideA + sideB ) = perimeter
}
(-1) * sideA ^2 + (perimeter / 2 ) * sideA - area = 0
Discriminant = (perimeter^2 / 4) - 4*area
let's first check how many available solutions are there and solve for possible sideA
*/
//also need to output them in an ascending order, they are divided by a comma
Discriminant = ( pow ( perimeter , 2 ) / 4 ) - ( 4 * area );
//printf("Discriminant:%lf\n",Discriminant);//testing purposes
if ( Discriminant > 0 )
{
  quadraticSolution1 = ( ( -1 ) * ( perimeter / 2 ) + sqrt ( Discriminant ) ) / ( -2 );
  quadraticSolution2 = ( ( -1 ) * ( perimeter / 2 ) - sqrt ( Discriminant ) ) / ( -2 );

if (quadraticSolution1>quadraticSolution2)
{
  //switch them up
  quadraticSolution1 = quadraticSolution1 + quadraticSolution2;
  quadraticSolution2 = quadraticSolution1 - quadraticSolution2;
  quadraticSolution1 = quadraticSolution1 - quadraticSolution2;
  // this is the no temparory variable switcheroo
}



//  printf ( "side1:%.0lf\nside2:%.0lf\n" , quadraticSolution1 , quadraticSolution2 );
  printf ( "%.0lf,%.0lf" , quadraticSolution1 , quadraticSolution2 );
}
else if ( Discriminant == 0 )
{
  // if there is only one solution then it will be easier to find it
  quadraticSolution = ( perimeter / 4 );
//  printf ( "side:%lf\n%lf\n" , quadraticSolution , quadraticSolution );
  printf ( "%.0lf,%.0lf" , quadraticSolution , quadraticSolution );
}
else
{
  printf("no solution\n");
}


  return 0;
}
