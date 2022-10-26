#include <iostream>
using namespace std;
//function overloading is just for our convinience,it just call function of same name which parameter is same as the passed parameter
int getMax(int x,int y){
   return (x>y)?x:y ;
}
int getMax(int x,int y,int z){
   return getMax(getMax(x,y),z) ;
}
int main() {
   cout <<getMax(10,20)<<endl;
   cout <<getMax(10,20,30);
    return 0;
}
