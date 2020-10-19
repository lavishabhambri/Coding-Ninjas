/*
Print the following pattern for the given number of rows.
Pattern for N = 4



The dots represent spaces.



Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
           1
         232
       34543
     4567654
   567898765
Sample Input 2:
4
Sample Output 2:
           1
         232
       34543
     4567654
*/

#include <iostream>
using namespace std;

int main() {
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    
int n;
    cin>>n;
    int i=1;
    while (i<=n){
        //spaces
        int space=1;
        while(space<=(n-i)){
            cout<<" ";
            space+=1;
        }
        //star
        int val=i;
        int j = 1;
        while (j<=i){
            cout<<val;
            j+=1;
            val++;
        }
        
        //star
        int val2= 2*i-2;
        int k=1;
        while (k<=(i-1)){
            cout<<val2;
            val2--;
            k+=1;
        }
        cout<<endl;
		i+=1;
    }
}
