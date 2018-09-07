/*drawing hollow square star pattern
*****
*   *
*   *
*   *
*****
*/
//library
#include<iostream>
using namespace std;
//main function
int main(){
//print stars and spaces
int i ,n =5;
for (int i=0; i<n; i++){
//print stars in first and end row
if(i==0 || i==4){
for(int i=0; i<n; i++)
cout<<"*";}
//print spaces and stars
else{
cout<<"*";
 for (int i = 1; i < 4; i++)
   cout<<" ";
//print star
cout<<"*";}

cout<<endl;}
return 0;}

