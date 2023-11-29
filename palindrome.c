#include<stdio.h>
#include<string.h>
//dont forget to include <string.h> while using 'strlen' function

int isPalindrome(char str[]){
  int left=0;
  int right=strlen(str)-1;

  while(left<right){
    if(str[right]!=str[left]){
      return 0;  //It is not a palindrome number
    }
    left++;
    right--;
  }
  return 1;  //It is a palindrome number
}
int main(){
  char input[100];
//Take string inputs for the data
  printf("Enter a string: ");
  scanf("%s",&input);

  if(isPalindrome(input)){
    printf("%s is a palindrome number!",input);
  }
  else{
    printf("%s is not a palindrome number!",input);
  }

  return 0;
}
