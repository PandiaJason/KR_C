#include <stdio.h>
#define MAXSIZE 1000

void strrcat(char s[], char t[]);

void main()
{
    char str1[] = "JASON";
    char str2[] = "PANDIAN";

    strrcat(str1,str2);
}

void strrcat(char s[], char t[])
{
    int i, j;

    i = j = 0;
    while(s[i] != '\0') {
        ++i;
    }
    while ((s[i++] = t[j++]) != '\0');
    printf("%s \n", s);
}