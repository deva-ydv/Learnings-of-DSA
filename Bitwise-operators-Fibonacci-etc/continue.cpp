#include <iostream>
using namespace std;

int main(){
    for(int i=0; i<5; i++){
        cout<<"hi"<<endl;
        cout<<"hello"<<endl;
        continue;
        cout<<"reply"; // unreachable
    }
}

// output 

// hi
// hello
// hi
// hello
// hi
// hello
// hi
// hello
// hi
// hello