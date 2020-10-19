/*
Take input a stream of n integer elements, find the second largest element present.
The given elements can contain duplicate elements as well. If only 0 or 1 element is given, the second largest should be INT_MIN ( - 2^31 ).
Input format :

Line 1 : Total number of elements (n)

Line 2 : N elements (separated by space)

Sample Input 1:
 4
 3 9 0 9
Sample Output 1:
 3
Sample Input 2 :
 2
 4 4
Sample Output 2:
 -2147483648
Sample Output Explanation:
Since both the elements are equal here, hence second largest element is INT_MIN i.e. ( -2^31 )
*/


#include <iostream>
using namespace std;

int main(){
   int n, num[50], largest= -2147483648, second= -2147483648, x;
   cin>>n;
    if (n==0 || n==1){
        cout<<-2147483648;
        return 0;
    }
    //taking input.
   for(int i=0; i<n; i++){
      cin>>x;
      if(largest<x){
         second = largest;
         largest = x;
      }
       else if (x > second && x != largest) {  
         second = x;
       
  }
   }
   cout<<second;
   return 0;
}
