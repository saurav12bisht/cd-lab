#include <stdio.h>
#include<conio.h>
#include<ctype.h>

int con=0,var=0,op=0;

void check(char c)
{
    if(isalpha(c))
    var++;

    if(c==47||c==42||c==43||c==45||c==61||c==94)
    op++;
}

void main()
{
    char str[50];
    char c;
    //clrscr();
    printf("\nenter any string");
    scanf("%s",&str);
    
    for(int i=0;i<50;i++)
    {
        c=str[i];
        check(c);
    }
    
    for(int i=0;i<50;i++)
    {
        if(isdigit(str[i])&&isdigit(str[i+1]))
        {
            i=i+2;
            con++;
        }
        else if(isdigit(str[i]))
        con++;
    }
    
    printf("\noperators:%d\nvariables:%d\nconstats:%d\ntotal token:%d",op,var,con,op+var+con);
    //getch();
}