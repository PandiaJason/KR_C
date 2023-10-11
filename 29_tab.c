/*Write a program to remove trailing 
  blanks and tabs from each line of input,
  and to delete entirely blank lines.*/

#include <stdio.h>
#define MAXSIZE 1000

int getline(char line[], int maxline);

int main(){
  char line[MAXSIZE], master[MAXSIZE];
  int i, j;
  i = j = 0;

  while(getline(line,MAXSIZE) > 0){
    if(line[0]=='\n'){
      continue;
    }
    j = 0;
    while(line[j] != '\0'){
      master[i] = line[j];
      ++i;
      ++j;
    }
  }
  printf("%s",master);
  return 0;
}

int getline(char s[], int lim){
  int i, c, p;
  p = EOF;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c !='\n'; ++i){
    if (c == '\t' || c == ' ' ){
      if (p == '\t' || p == ' ' ){
      continue;
      }
    }
      s[i] = c;
      p = c;
   
  }
  if(c=='\n'){
    s[i] = c;
    ++i;
  }
  s[i] = '\0';

  return i;
}