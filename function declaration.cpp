#include <iostream>
using namespace std;
int getMax(int ,int); //here we have to only declare the type of data it is name is not important,its upto us.
//and also return type of the function 
//we can also just declare the function without implementing its working (for later use)
int main() {
    int x=10,y=20;
    cout<<getMax(x,y);
    return 0;
}
int getMax(int x ,int y){
    if(x>y)
    return x;
    else
    return y;
}
