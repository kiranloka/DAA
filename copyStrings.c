#include<stdio.h>

void copyString(char *destination,const char *source){
  while(*source != '\0'){
    *destination=*source;
    source++;
    destination++;
  }
  *destination='\0';
}

int main(){
  char sourceString[]="Hello, Kiran!";
  char destinationString[20];

  copyString(destinationString,sourceString);

  printf("Source string:%s\n",sourceString);
  printf("destinationString:%s\n",destinationString);

  return 0;
}
