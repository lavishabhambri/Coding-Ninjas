/*
Print the following pattern for the given number of rows.
Note: N is always odd.


Pattern for N = 5



The dots represent spaces.



Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Constraints :
1 <= N <= 49
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
Sample Input 2:
3
Sample Output 2:
  *
 ***
  *

*/

#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;
    int i=1;
    int n1 = (n+1)/2;
    while(i<=n1){
        int space = (n1-i);
        while(space>=1){
            cout<<" ";
            space--;
        }
        
        int j=(2*i-1);
        while(j>=1){
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
    
    int n2=n/2;
    i =1;
    while(i<=n2){
        int space=1;
        while(space<=i){
            cout<<" ";
            space++;
        }
        
        int j=1;
        while(j<=2*(n2-i)+1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}
