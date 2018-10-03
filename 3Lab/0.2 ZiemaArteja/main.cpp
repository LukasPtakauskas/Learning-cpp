#include <iostream>

int main(int argc,char *argv[]){
  int number;
  scanf("%d",&number);
  for (int i = 1; i <= number ; i++)
  {
    if (i%2==0){
    printf("%d **\n",i);
    }else{
    printf("%d *0\n",i);
    }
  }
  return 0;
}
