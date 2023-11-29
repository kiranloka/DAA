#include<stdio.h>


void bubbleSort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
}



int binarySearch(int arr[],int left,int right,int target){
  while(left<=right){
    int mid=left+(right-left)/2;

  if(arr[mid]==target){
    return mid;
  }
  if(arr[mid]<target){
    left=mid+1;
  }
  else{
    right=mid-1;
  }
}
  return -1; //Target is not found in the Array
}

int main(){
  int size;

  printf("Enter the size of the array: ");
  scanf("%d",&size);
  int arr[size];
  printf("Enter the elements in the array: ");
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }

  bubbleSort(arr,size);

  printf("Sorted Array:\n");
  for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
  }

  int target;
  printf("Enter the element you want to search: ");
  scanf("%d",&target);

  int result=binarySearch(arr,0,size-1,target);
  if(result!=-1){
    printf("%d is found at index %d.\n",target,result);
  }
  else{
    printf("%d is not found\n",target);
  }
  return 0;
}
