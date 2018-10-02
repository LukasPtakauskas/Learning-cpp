#include <iostream>

int main(int argc,char *argv[]){
  int hour, minute,second;

scanf("%d%d%d",&hour,&minute, &second);//should always compile before uploading up, to avoid this stupid '&' mising in &variable

//the way i see it, it's all about the carry over.
//00 == 60 (min || sec), but 24 hours == 00 hours.
  if (second==0){
    second=59;
    if (minute==0){
      minute=59;
      if (hour==0){
        hour=23;
      }else{
        hour=hour-1;
      }
    }else{
      minute=minute-1;
    }
  }else{
    second=second-1;
  }
printf("%d %d %d", hour ,minute, second);


  return 0;
}
