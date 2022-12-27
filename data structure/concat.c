#include<stdio.h>
void xstrcon(char*,char*);
void main()
{
    char str1[10],str2[10];
     int i;
     printf("Enter 1st string: ");
     scanf("%s",str1);
     printf("Enter 2nd string: ");
     scanf("%s",str2);
     xstrcon(str1,str2);
     printf("%s",str1);
}
void xstrcon(char*p,char*q)
{
    while(*p!='\0')
        p++;
    while(*q!='\0')
    {
        *p=*q;
        p++;
        q++;
    }
    *p='\0';
}
