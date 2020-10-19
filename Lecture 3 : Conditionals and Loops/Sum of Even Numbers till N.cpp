/*
Sum of Even Numbers till N
Given a number N, print sum of all even numbers from 1 to N.
Input Format :
Integer N
Output Format :
Required Sum 
Sample Input 1 :
 6
Sample Output 1 :
12
*/

#include<iostream>
using namespace std;
int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int N, sum=0;
    cin>>N;
    
    for(int i=0;i<=N;i++){
        if (i%2==0)
        	sum += i;
    }
    
    cout<<sum;
}
