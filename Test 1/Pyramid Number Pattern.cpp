/*
Print the following pattern for the given number of rows.
Pattern for N = 4
   1
  212
 32123
4321234
Input format : N (Total no. of rows)

Output format : Pattern in N lines

Sample Input :
5
Sample Output :
        1
      212
    32123
  4321234
543212345
*/

#include<iostream>
using namespace std;

int main(){

  // Write your code here  
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
        int j = i;
        while (j>=1){
            cout<<j;
            j-=1;
        }
        
        //star
        int k=2;
        while (k<=(i)){
            cout<<k;
            k+=1;
        }
        cout<<endl;
		i+=1;
    }
}
