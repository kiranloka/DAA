#include<stdio.h>

int findGcd(int a,int b){
  while(b!=0){
    int temp=b;
    b=a%b;
    a=temp;
  }
  return a;
}

int main(){
  int num1,num2;

  printf("Enter two numbers: ");
  scanf("%d %d",&num1,&num2);

  int gcd=findGcd(num1,num2);
  printf("Gcd of %d and %d is %d\n",num1,num2,gcd);
}
