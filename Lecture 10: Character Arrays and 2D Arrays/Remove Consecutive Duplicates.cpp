/*
Given a string, S, remove all the consecutive duplicates that are present in the given string. That means, if 'aaa' is present in the string then it should become 'a' in the output string.
Input format :
String S
Output format :
Modified string
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
aabccbaa
Sample Output 1:
abcba
Sample Input 2:
xxyyzxx
Sample Output 2:
xyzx
*/


// input - given string
// You need to update in the input string itself. No need to return or print anything
#include<cstring>
void removeConsecutiveDuplicates(char input[]) {
    // Write your code here
    int len=strlen(input);
    int k=0;
    int i=0;
    int lastindex;
    while(i<len){
        while(input[i] == input[i+1]){
            i++;
        }
        input[k] = input[i];
        k++;
        i = i+1;
        lastindex = k; 
        
    } 
    input[lastindex] = '\0'; //
    
}
