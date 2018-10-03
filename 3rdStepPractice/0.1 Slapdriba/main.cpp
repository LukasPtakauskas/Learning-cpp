#include <iostream>

int main(int argc,char *argv[]){
  int number;
  scanf("%d",&number);
  for (int i = 1; i <= number ; i++)
  {
    if (i%2==0){
    printf("**\n");
    }else{
    printf("*0\n");
    }
  }
  return 0;
}
