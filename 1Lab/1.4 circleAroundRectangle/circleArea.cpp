#include <stdio.h>
#include <math.h>

int main()
{
    double mpi = 355./113.; // naming Pi as mpi to avoid using a keyword
    double SideA,SideB; // the sides of the rectangle that are put into a circle
    double Area; // area of the circle
    scanf("%lf%lf", &SideA,&SideB); // input of variables
    /*
    The area of the circle is calculated like this
    Area = Pi * r * r
    r = ( ( SideA^2 + SideB^2 )^(1/2) )/ 2
    r * r = ( SideA^2 + SideB^2 ) / 4
    Area = Pi * ( SideA^2 + SideB^2 ) / 4
    */
    
    Area = mpi * (pow ( SideA , 2 ) + pow ( SideB , 2 )) / 4 ; 

//    Area = mpi * pow ( ( ( sqrt ( pow ( SideA , 2 ) + pow ( SideB , 2 ) ) ) / 2 ) , 2 ); // this feels too long
    printf("%.2lf", Area);
    

    return 0;
}
