#include<iostream>
using namespace std;

bool primeNumber(int n){
    

    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    cout<<primeNumber(n);
}
