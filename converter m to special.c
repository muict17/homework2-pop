#include <stdio.h>

int main(){
  int n,m,i,j;
  printf("row: ");
  scanf("%d",&n);
  printf("column: ");
  scanf("%d",&m);
  int metric[n][m];
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%d",&metric[i][j]);
    }
  }
  for(i=0;i<n;i++){
    if(i%2==0){
      for(j=0;j<m;j++){
        printf("%d ",metric[i][j]);
      }
    }
    else{
      for(j=m-1;j>=0;j--){
        printf("%d ",metric[i][j]);
      }
    }
  }
  return 0;
}
