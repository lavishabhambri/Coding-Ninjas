/*
Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.
Input format :
String in a single line
Output format :
Word wise reversed string in a single line
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome
Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always
*/


#include <string.h> 
#include <stdbool.h>
void reverseStringWordWise(char s[]) {
   
        int start, end, i, j=0, len, temp, count=0;
        len=strlen(s);
 
        for(i=0;i<(len/2);i++)
        {
                temp=s[i];
                s[i]=s[len-1-i];
                s[len-1-i]=temp;
        }// by the end of this loo we have reversed the whole string

        for(i=0;i<=len;i++)//now we will reverse till a space comes;
         {
                 if(s[i]==' '  || s[i]=='\0' )//reverse the word till we get a space or a null character.
                {
                     
                         for(start=j, end=i-1 ; start<=end ; start++,end--)
                         {
                                   temp=s[start];
                                   s[start]=s[end];
                                   s[end]=temp;
                         }
                         j=i+1;
                }        
     }
}
