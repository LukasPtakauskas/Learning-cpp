#include <iostream>

// find volume of 1: tube, 2:volume
//height and radius are given
int main(int argc, char *argv[])
{
    int selection, r, h;
    double v , myPi=3.14159265359;

    scanf("%d%d%d",&selection,&h,&r);
    v=myPi*r*r*h;
    if (selection==1) {
        printf("%.2lf", v);
    }
    else {
        v=v/3;
        printf("%.2lf", v);
    }

    return 0;
}
