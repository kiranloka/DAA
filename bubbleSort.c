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

  printf("Enter the elements of the array: ");
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }

  bubbleSort(arr,size);

  printf("sorted Array: \n");
  printArray(arr,size);
}
