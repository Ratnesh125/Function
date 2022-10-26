#include <iostream>
using namespace std;
// #declaration
int getMax(int ,int); 
//here we have to only declare the type of data it is name is not important,its upto us.
//and also return type of the function 
//we can also just declare the function without implementing its working (for later use)
//but if you keep the declaration and remove defination then compiler throw linker error that the defination for called function is not found
int main() {
    int x=10,y=20;
    cout<<getMax(x,y);
    return 0;
}
// #defination
int getMax(int x ,int y){
    if(x>y)
    return x;
    else
    return y;
}
