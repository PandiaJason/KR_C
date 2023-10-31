#include <stdio.h>
#define MAXSIZE 1000

void dsqz(char s[], char t[]);

void main()
{
    char str1[] = "JASON LIKES C";
    char str2[] = "PANDIAN";

    dsqz(str1,str2);
}

void dsqz(char s[], char t[])
{
    int i, j;
    /*int count = 0;*/
    for (i = 0; s[i] != '\0'; ++i) {
        for(j = 0; t[j] !='\0'; ++j) {
            if (s[i] == t[j]) {
                int m;
                /*++count;*/
                for (m = i; s[m] != '\0'; ++m) {
                    s[m] = s[m+1];
                    /*printf("count: %d char: %c \n",count, s[m]);*/
                }
                --i;
                break;
            }
        }
    }
    s[i] = '\0';
    printf("%s \n", s);
}