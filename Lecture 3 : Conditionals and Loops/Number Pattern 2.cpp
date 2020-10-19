/*
Print the following pattern
Pattern for N = 4
       1
     23
   345
 4567
Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input :
5
Sample Output :
          1
        23
      345
    4567
  56789
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
    while(i<=n){
        int space = 1;
        int val = i;
        int j =1;
        while (space <= (n-i)){
            cout<<" ";
            space +=1;
        }
        while(j<=i){
            cout<<val;
            val+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}
