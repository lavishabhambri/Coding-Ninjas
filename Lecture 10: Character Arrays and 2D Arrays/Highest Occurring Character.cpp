/*
Given a string, S, find and return the highest occurring character present in the given string.
If there are 2 characters in the input string with same frequency, return the character which comes first.


Note : Assume all the characters in the given string are lowercase.


Input format :
String S
Output format :
Highest occurring character
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
abdefgbabfba
Sample Output 1:
b
Sample Input 2:
xy
Sample Output 2:
x
*/


// input - given string
#include<cstring>
char highestOccurringChar(char input[]) {
    // Write your code here
    int freq[256] = {0};
    int len = strlen(input);
    for(int i=0; i<len; i++){
        int ascii = input[i];
        freq[ascii]++;
    }
    
    char ans = input[0];
    int ascii = input[0];
    int count = freq[ascii];
    for(int i=1; i<len; i++){
        ascii = input[i];
        if(freq[ascii] > count){
            count = freq[ascii];
            ans = input[i];
        }
    }
    return ans;
}
