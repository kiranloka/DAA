#include<stdio.h>
#include<stdbool.h>

bool isPrime(int num){
    if(num<=0){
      printf("Enter a valid input\n" );
        return false;

    }
    else{
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }

}

int main(){
    int num;
    printf("Enter the number to check whether prime or not : ");
    scanf("%d",&num);

    if(isPrime(num)){
        printf("%d is a prime number!\n",num);

    }
    else{
        printf("%d is not a prime number!\n",num);
    }

    return 0;
}
