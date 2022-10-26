#include <iostream>
using namespace std;
void printDetails(int id,string name="NA",string address="NA"){
    //deafault argument must be at the end else compiler throws error 
    //(string name="NA",string address="NA",int id)->this is not valid
  
  // we declare default value either in declaration or defination of a funtion
  //prefered way declare at time of declaration of a funtion
    cout<<"Id is "<<id<<endl;
    cout<<"Name is "<<name<<endl;
    cout<<"Address is "<<address<<endl;
}
int main() {
    printDetails(1,"ratnesh","dewas");
    printDetails(2,"ratnesh");
    printDetails(3);

    return 0;
}
