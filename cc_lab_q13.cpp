/*draw the following pattern 
*****
 ****
  ***
   **
    *
*/
//library
#include<iostream>
using namespace std;
//main function
int main(){
//loop
int i = 0,j = 0 , n = 5;
for(i = 0 ; i < n; i++)
{for(j = 0 ; j < n ; j++)
{if(i <= j)
cout<<"*";
else
cout<<" ";
}
cout<<endl;
}
return 0;
}

