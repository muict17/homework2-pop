#include <stdio.h>

int main() {
  int n,i,j;
  scanf("%d",&n);
  int x=n,digit=1;
  while(x>9){
    x=x/10;
    digit=digit+1;
  }
  int arms[digit],count=0,times=1,sum=0;
  for(i=digit-1;i>=0;i--){
    x=n;
    for(j=0;j<i;j++){
      x=x/10;
    }
    while(x%10!=0){
      count++;
      x=x-1;
    }
    arms[i]=count;
    count=0;
    for(j=1;j<=3;j++){
      times=times*arms[i];
    }
    sum=sum+times;
    times=1;
  }  
  if(sum==n){
    printf("Armstrong Number");
  }
  else{
    printf("It's not");
  }
  return 0;
}
