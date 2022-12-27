#include<stdio.h>
int xstrcmp(char*,char*);
void main()
 {   char str1[10],str2[10];
     int i;
     printf("Enter 1st string: ");
     scanf("%s",str1);
     printf("Enter 2nd string: ");
     scanf("%s",str2);
     i=xstrcmp(str1,str2);
     printf("%d",i);
 }
int xstrcmp(char *p,char *q)
 {
     while(*p==*q)
      {
        if(*p=='\0')
            return(0);
        p++;
        q++;
      }
     return(*p-*q);
 }
