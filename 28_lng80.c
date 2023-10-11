/*Write a program to print all input lines that are longer than 80 characters*/
#include <stdio.h>
#define MAXSIZE 1000
#define MAX 80

int geline(char line[], int maxsize);

int main(){
    int len;
    int i, j;
    char line[MAXSIZE], master[MAXSIZE];

    j = i = 0;

    while ((len = getline(line,MAXSIZE)) > 0){
        if (len > MAX){
            j = 0;
            while (line[j] != '\0'){
                master[i] = line[j];
                ++i;
                ++j;
            }

        }
    }
    if (MAX>0){
        printf("%s", master);
    }

    return 0;
}

int getline(char s[], int lim){
    int i, c;
    for (i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; ++i){
        s[i] = c;
    }
    if ( c=='\n' ){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}
