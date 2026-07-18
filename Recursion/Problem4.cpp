#include<bits/stdc++.h>
using namespace std;

void print_n(int i){
    if(i<1) return ;
    cout<<i<<" ";
    print_n(i-1); 
}
int main(){
    int n;
    cout<<"Enter till the no. you want to print : ";
    cin>>n;
    print_n(n);
    return 0;
}