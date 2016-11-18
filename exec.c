#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(){//int argc, char * argv[]){
  printf("what would you like to do? ");
  char command[100];
  fgets(command, sizeof(command), stdin);
  *strchr(command, '\n') = 0;
  int i = 0;
  char* word[50];
  char *a = " ";
  char *x = command;
  while(command){
    word[i] = strsep(&x, " ");
    i++;
  }
  i = 0;
  while(i < 100){
    printf("%s", word[i]);
    i++;







  }
}
 
