#include<stdio.h>
#include<math.h>

 int countDigits(num) {
   int count=0;
   while(num!=0){
     num/=10;
     count++;
   }
  return count;
}

int isArmstrong(num){
  int orginalNumber=num;
  int n=countDigits(num);
  sum=0;

  while(n!=0){
    int digit=num%10;
    sum=sum+pow(digit,n);
    num/=num;
  }
  return (originalNumber==sum);

}

int main(){
  int num;
  printf("Enter a number to check Armstrong or not: ");
  scanf("%d",&num);

  if(isArmstrong(num)){
    print("%d is an Armstrong Number!",&num);
  }
  else{
    printf("%d is not an Armstrong Number",&num);
  }

  return 0; 
}
