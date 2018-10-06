#include <iostream>
/* input A , B
calculate the percentage of increase in two decimal places precision
*/
int main (int argc, char *argv[]){
int number1, number2;
scanf("%d%d",&number1, &number2);

printf("%.2f", (
  ((float)(number2-number1)/ (float)number1)*100
));

return 0;
}
