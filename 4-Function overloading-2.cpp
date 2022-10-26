#include <iostream>
using namespace std;

void print(string s){
    cout<<s<<endl;
}
void print(int s){
    cout<<s<<endl;
}
// void print(char s){
//     cout<<s<<endl;
// }
int main() {
   print("cat");
   print(10);
   print('c'); //output- ascii of c which is 99
    return 0;
}
if we comment function for "char s" and then call print('c'); then it upgrade char into "int" and return ascii value 
