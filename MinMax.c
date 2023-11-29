#include<stdio.h>
void findMinMax(int arr[],int size,int m,int n,int *maxM,int *minM){
  int i,j,temp;

  for(i=0;i<size-1;i++){
    for(j=0;j<size-i-1;j++){
      if(arr[j]>arr[j+1]){
      temp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
    }
  }
}
*maxM=arr[size-m];
*minM=arr[n-1];
}

int main(){
  int arr[]={5,3,2,31,1};
  int size=sizeof(arr)/sizeof(arr[0]);
  int m=3;
  int n=2;
  int maxM,minN,sum,diff;

  findMinMax(arr,size,m,n,&maxM,&minN);

  sum=maxM+minN;
  diff=maxM-minN;

  printf("M-th maximum number:%d\n",maxM);
  printf("N-th minimum number:%d\n",minN);
  printf("Sum: %d\n",sum);
  printf("Difference: %d\n",diff);

  return 0;
}
