#include <iostream>
using namespace std;
//if we use inline so it is just a suggestion to compiler if compiler accepts it then it will definately optimize code 
//coz in inline function call is not made instead of it the code of the function are copied on the place of parameters in the main functon.
inline int getMax(int x,int y){
   return (x>y)?x:y ;
}
int main() {
   cout <<getMax(10,20);
    return 0;
}
