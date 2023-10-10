/* print the long line amoung lines */
#include <stdio.h>
#define MAXSIZE 1000

int getline(char s[], int limit);
void copy(char to[], char from[]);

int main(){
    int len, max;
    char line[MAXSIZE], longest[MAXSIZE];

    max = 0;

    while ((len = getline(line,MAXSIZE)) > 0){
        if (len > max){
            max = len;
            copy(longest,line);
        }
    }
    if (max > 0){
        printf("%s", longest);
    }

    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim){
    int i,c;
    for (i = 0; i < lim -1 && (c = getchar()) != EOF && c !='\n'; ++i){
        s[i] = c;
    }
    if (c == '\n'){
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
} 

/* copy: copy 'from' into 'to'; assume to is big enough*/
void copy(char to[], char from[]){
    int i;
    i =0;
    while ((to[i] = from[i]) != '\0'){
        ++i;
    }
}