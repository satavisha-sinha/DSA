#include<bits/stdc++.h>
using namespace std;

void print_name(int i,int num,string name){
    if(i==num) return ;
    cout<<name<<endl;
    print_name(i+1,num,name);
}
int main(){
    int n;
    string name;
    cout<<"Enter your name : ";
    getline(cin,name);
    cout<<"Enter the no. of times you want to print : ";
    cin>>n;
    print_name(0,n,name);
    return 0;
}