#include<stdio.h>

int selectionSort(int arr[],int size){
  for(int i=0;i<size-1;i++){
    int minIndex=i;
    for(int j=i+1;j<size;j++){
      if(arr[j]<arr[minIndex]){
        minIndex=j;
      }
    }
    int temp=arr[minIndex];
    arr[minIndex]=arr[i];
    arr[i]=temp;
  }
}

void printArray(int arr[],int size){
  for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}


int main(){
  int size;

  printf("Enter the number of elements in the array: ");
  scanf("%d",&size);

  int arr[size];
  printf("Enter the elements in the array: ");
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }

  selectionSort(arr,size);

  printf("sorted Array: /n")
  printArray(arr,size);
}
