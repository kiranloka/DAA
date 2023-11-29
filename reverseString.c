#include<stdio.h>
#include<string.h>

void reverseString(char *str){
  int length=strlen(str);
  int i,j;
  int temp;

  for(int i=0,j=length-1;i<j;i++,j--){
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
  }
}
int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets
    str[strcspn(str, "\n")] = '\0';

    // Reverse the string
    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
