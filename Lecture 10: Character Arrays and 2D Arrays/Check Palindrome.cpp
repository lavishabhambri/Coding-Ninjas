/*
Given a String s, check it its palindrome. Return true if string is palindrome, else return false.
Palindrome strings are those, where string s and its reverse is exactly same.
Input Format :
 String S
Output Format :
"true" if S is palindrome, else "false"
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1 :
abcdcba
Sample Output 1 :
true 
Sample Input 1 :
abcd
Sample Output 1 :
false
*/


bool checkPalindrome(char str[]){


  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   */
    int length = 0;
    for(int i=0; str[i] != '\0'; i++){
        length++;
    }
    
    //bool palindrome = true;
    for(int i=0; i<length/2; i++){
        if(str[i] != str[length-i-1]){
            //palindrome = false;
            //break;
            return false;
        }
    }
  
    return true;
}
