#include<bits/stdc++.h>
using namespace std;

void print_num(int i,int num){
    if(i<1) return ;
    print_num(i-1,num);
    cout<<i<<" ";
}
int main(){
    int n;
    cout<<"Enter till the no. you want to print : ";
    cin>>n;
    print_num(n,n);
    return 0;
}