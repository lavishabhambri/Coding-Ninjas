/*
Given a string S, reverse each word of a string individually. For eg. if a string is "abc def", reversed string should be "cba fed".
Input Format :
String S
Output Format :
Modified string
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
emocleW ot gnidoC sajniN
Sample Input 2:
Give proper names to variables and functions
Sample Output 2:
eviG reporp seman ot selbairav dna snoitcnuf
*/


#include<cstring>
void reverseEachWord(char str[]) {
    // Write your code here
    int len = strlen(str);
    int j=0, start, end;
    for(int i=0; i<=len; i++){
        if(str[i] =='\0' || str[i] ==' '){
            for(start=j, end=i-1 ; start<=end ; start++,end--)
                         {
                                   int temp=str[start];
                                   str[start]=str[end];
                                   str[end]=temp;
                         }
                         j=i+1;
        }
    }
    
    
}
