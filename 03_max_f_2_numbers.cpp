#include<iostream>
using namespace std;

int main(){
    int a, b;

    cout<<"Enter the numbers";
    cin>>a>>b;
    if(a>b){
        cout<<a<<"is greater than "<<b<<endl;
    }
    else if(a<b){
        cout<<a<<"is smaller than "<<b<<endl;
    }
}