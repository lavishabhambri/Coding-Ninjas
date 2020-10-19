/*
Print the following pattern
Pattern for N = 4



The dots represent spaces.



Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1 :
3
Sample Output 1 :
   *
  *** 
 *****
Sample Input 2 :
4
Sample Output 2 :
    *
   *** 
  *****
 *******

*/

#include<iostream>
using namespace std;


int main(){

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
        int j = 1;
        while (j<=i){
            cout<<"*";
            j+=1;
        }
        
        //star
        int k=1;
        while (k<=(i-1)){
            cout<<"*";
            k+=1;
        }
        cout<<endl;
		i+=1;
    }
}
