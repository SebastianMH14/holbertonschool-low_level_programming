#include "holberton.h"

/**
 * _strcmp - function that compares two strings.
 *@s1: value of s1
 *@s2: value of s2
 *Return: idk
 */
int _strcmp(char *s1, char *s2)
{
 int flag=0;  
    while(*s1!='\0' && *s2!='\0')  
    {  
        if(*s1!=*s2)  
        {  
            flag=1;  
        }  
        s1++;  
        s2++;  
    }  
      
    if(flag==0)  
    return 0;  
    else  
    return 1;  
}