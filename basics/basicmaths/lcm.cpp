#include<bits/stdc++.h>
using namespace std;

int lcm(int a,int b){
    int max;
    if(a>b){
        max=a;
    }
    else{
        max=b;
    }
    while(1){
        if(max%a==0 && max%b==0){
            cout<<max;
            break;
        }
        max++;
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    lcm(a,b);
}