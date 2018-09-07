/*printing rhombus star pattern
    *****
   *****
  *****
 *****
*****
*/
//library
#include <iostream>
using namespace std;
//main function
int main()
{
//loop
int i ,a = 5;
// printing the stars and spaces
for (int i = 0 ; i < a; i++){
for (int j = 0 ; j < a-i; j++ ){
cout << " ";
}
for(int j = 0; j < a; j++ ){
cout<<"*";
}
for(int j=0; j<i;j++){
cout<<" ";
}
cout <<endl;		
}
return 0;
}
