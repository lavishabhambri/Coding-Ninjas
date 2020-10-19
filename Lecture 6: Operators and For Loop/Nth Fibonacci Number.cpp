/*
Nth term of fibonacci series F(n) is calculated using following formula -
    F(n) = F(n-1) + F(n-2), 
    Where, F(1) = F(2) = 1
Provided N you have to find out the Nth Fibonacci Number.
Input Format :
Integer n
Output Format :
Nth Fibonacci term i.e. F(n)
Constraints:
1 <= n <= 25
Sample Input 1:
4
Sample Output 2:
3 
Sample Input 1:
6
Sample Output 2:
8
*/

#include<iostream>
using namespace std;


int main(){
       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int a=1,b=1;
    int c,n;
    cin>>n;
    for (int i=2; i<=n; i++){
        
        if (i==n){
            cout<<c;
        }
        else{
        c = a+b;
        b = a;
        a = c;
        
        }
    }
}
