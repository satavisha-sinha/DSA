#include<bits/stdc++.h>
using namespace std;

void print_num(int i,int num){
    if(i==num+1) return ;
    cout<<i<<" ";
    print_num(i+1,num);
}
int main(){
    int n;
    cout<<"Enter till the no. you want to print : ";
    cin>>n;
    print_num(1,n);
    return 0;
}