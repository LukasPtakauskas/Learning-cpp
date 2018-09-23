#include <stdio.h>
#include <iostream>
using namespace std;
int
main (int argc, char *argv[])
{

  double SideA, SideB;	// rectangle sides
  double Area;			//rectangle Area
  double Parts;			// to how many equal parts is the rectangle split
  double SplitArea;		// the area of the split rectangle

  scanf ("%lf%lf%lf", &SideA, &SideB, &Parts);
  printf ("Krastine a: %.0f\n", SideA);
  printf ("Krastine b: %.0f\n", SideB);
  Area = SideA * SideB;
  
  //Area = double(SideA) * double(SideB); //calculates precisely
  printf ("Bendras plotas: %.0f\n", Area);
  SplitArea = Area / Parts;
  
//  SplitArea = double(Area) / double(Parts);
  printf ("Mazesnes dalies plotas: %.2f", SplitArea);

  return 0;
}
