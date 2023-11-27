#include<stdio.h>

int findLargest(int arr[],int size){
  int largest=arr[0];

  for(int i=0;i<size;i++){
    if(arr[i]>largest){
      largest=arr[i];
    }
  }
  return largest;
}

int main(){
  int size,n;

  printf("Enter the size of the array: ");
  scanf("%d",&size);

  int arr[size];

  printf("Enter the elements in the array: ");
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  int answer=findLargest(arr,size);
  printf("The largest number in the array is:%d\n",answer);

  return 0;
}
