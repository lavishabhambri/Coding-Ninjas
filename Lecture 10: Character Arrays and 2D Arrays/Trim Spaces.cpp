/*
Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
There can be multiple spaces present after any word.
Input Format :
 String S
Output Format :
Updated string
Constraints :
1 <= Length of string S <= 10^6
Sample Input :
abc def g hi
Sample Output :
abcdefghi
*/


void trimSpaces(char input[]) {
  /*  Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Don't print or return the output.
   *  Change in the given input string itself.
   *  Taking input and printing output is handled automatically.
   */
    int length=0;
    int i=0;
    while(input[i] !='\0'){
        length++;
        i++;
    }
    //char
    int j=0;
    for(int i=0; i<length; i++){
        if(input[i] != ' '){
            input[j] = input[i];
            j++;
        }
    }
    input[j] ='\0'; //so as to stop the string...remove the elements that were present previously at the indexes>=j.
}
