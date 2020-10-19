/*
Given two strings, S and T, check if they are permutations of each other. Return true or false.
Permutation means - length of both the strings should same and should contain same set of characters. Order of characters doesn't matter.
Note : Input strings contain only lowercase english alphabets.


Input format :
Line 1 : String 1
Line 2 : String 2
Output format :
'true' or 'false'
Constraints :
0 <= |S| <= 10^7
0 <= |T| <= 10^7
where |S| represents the length of string, S.
Sample Input 1 :
abcde
baedc
Sample Output 1 :
true
Sample Input 2 :
abc
cbd
Sample Output 2 :
false
*/

// input1 - first input string
// input2 - second input string
                                                                /*** METHOD-1 ****/
#include<cstring>
bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    int len1 = strlen(input1);
    int len2 = strlen(input2);
    if (len1 != len2)
        return false;
    
    int output[256] ={0};
    for(int i=0; i<len1;i++){
        int ascii=input1[i];
        output[ascii]++;
    }
    
    for(int i=0; i<len2; i++){
        int ascii=input2[i];
        output[ascii]--;
    }
    
    for(int i=0; i<256; i++){
        if(output[i] != 0){
            return false;
        }
    }
    
    return true;

}

/*                                                              /*** METHOD-2 ****/
#include<cstring>
bool isPermutation(char input1[], char input2[]) {
    int len1=strlen(input1);
    int len2=strlen(input2);
    int check=true; //initially assume both strings are permutations.
    
    if(len1 != len2){
        check = false;
        return false;
    }
    
    bool checkArray1[len1];  //check for ever element of input1
    for(int i=0; i<len1; i++){
        for(int j=0; j<len1; j++){
            if(input1[i] == input2[j]){
                checkArray1[i] = true;
                break;
            }
        }
    }
    
    bool checkArray2[len1]; //check for ever element of input2 as well
    for(int i=0; i<len1; i++){
        for(int j=0; j<len1; j++){
            if(input2[i] == input1[j]){
                checkArray2[i] = true;
                break;
            }
        }
    }
    
    for(int i=0; i<len1; i++){  //if either of the check arrays has false at least one index then return false.
        if(checkArray1[i] == false || checkArray2[i] == false){
            check=false;
            return check;
        }
    }

}

*/
