/*
Given a string and a character x. Write a function to remove all occurrences of x character from the given string.
Leave the string as it is, if the given character is not present in the string.


Input Format :
Line 1 : String S
Line 2 : Character c
Output Format :
Modified string
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
welcome to coding ninjas
o
Sample Output 1:
welcme t cding ninjas
Sample Input 2:
Think of edge cases before submitting solutions
x
Sample Output 2:
Think of edge cases before submitting solutions
*/

// input - given string
// You need to remove all occurrences of character c that are present in string input.
// Change in the input itself. So no need to return or print anything.
#include<cstring>
void removeAllOccurrencesOfChar(char input[], char c) {
    // Write your code here
    int k=0, i=0, len=strlen(input);
    while(i < len){
        while(input[i] == c){
            i++;
        }
        input[k] =input[i];
        i++;
        k++;
    }
    input[k] = '\0';
    

}
