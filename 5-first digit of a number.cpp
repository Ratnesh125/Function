#include <bits/stdc++.h>
using namespace std;
int fun(int x){
    if(x < 10)
    return x;
    else{
        fun(x/10);
    }  
}
int main() {
	cout<<fun(447865);
	return 0;
}
