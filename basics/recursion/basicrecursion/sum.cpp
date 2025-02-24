#include <bits/stdc++.h>
using namespace std;

int sumofN(int i,int sum){
    if(i<1){
        cout<<sum;
        return 0;
    }
    sumofN( i-1,sum+i);
}

int sumFn(int n){
    if(n==0)
        return 0;
    return n+sumFn(n-1);
}

int factorial(int n){
    if(n==0)
        return 1;
    return n*factorial(n-1);
}

int revArr(int l,int r,int arr[]){
    
    if(l>=r)
        return 0;
    swap(arr[l],arr[r]);
    revArr(l+1,r-1,arr);
}

int palindrome(int l,int r,string s){
    if(l>=r)
        return 1;
    if(s[l]!=s[r])
        return 0;
    return palindrome(l+1,r-1,s);

}

int fibonacci(int n){
    if( n<=1){
        return n;
    }
    int last=fibonacci(n-1);
    int seclast=fibonacci(n-2);
    return last+seclast;
}

int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
}

