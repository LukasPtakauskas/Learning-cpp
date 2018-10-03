#include <iostream>

int main(int argc, char *argv[])
{
  int ChocolateAmount; // how many bought?
  double standartPrice=0.28*3.45; // this is the price of one bar converted to Litas.
  double totalPrice;

  scanf("%d",&ChocolateAmount);

  if (ChocolateAmount>2000)
  {
  totalPrice = ChocolateAmount * 0.96 * standartPrice;
  printf("%.2lf",totalPrice);
  }
  else if (ChocolateAmount>1000)
  {
    totalPrice = (double)(ChocolateAmount) * 0.97 * standartPrice;
    printf("%.2lf",totalPrice);
  }
  else
  {
    totalPrice = ChocolateAmount * standartPrice;
    printf("%.2lf",totalPrice);
  }

  return 0;
}
