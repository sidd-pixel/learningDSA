#include<bits/stdc++.h>
using namespace std;

int countdigit(int n){
    while(n>0){
       int lastdigit=n%10;
       cout<<lastdigit<<endl;
       n=n/10;
    }
}
int evenlyDivides(int n) {
    // code here
    int div=n/10;
    int count=0;
    while(n>0){
        int d=n%10;
        if(n%d==0){
            count+=1;
        }
        n=n/10;
    }
    cout<<count;
}

int reverse(int n){
    int rev=0;
    while(n>0){
        int lastdigit=n%10;
        rev=(rev*10)+lastdigit;
        n=n/10;
    }
    cout<<rev;
}

int palindrome(int n){
    int rev=0;
    int temp=n;
    while(temp>0){
        int lastdigit=temp%10;
        rev=(rev*10)+lastdigit;
        temp=temp/10;
        }
        if(n==rev){
            cout<<"palindrome";
        } 
        else{
            cout<<"not palindrome";
        }
}


int armstrongNumber(int n){
    int sum=0;
    int temp=n;
    int count=0;
    for(int i=temp;i>0;i/=10){
        count++;
    }
    while (temp>0){
       int d=temp%10;
       sum+=pow(d,count);
       temp=temp/10;
    }
    if(n==sum){
      cout<<"given number is an armstrong number";
    }
    else{
        cout<<"given number is not an armstrong number";
    }
}

int divisors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
int divisors2(int n){
    vector<int> v;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            v.push_back(i);
        
        if((n/i)!=i){
            v.push_back(n/i);
        }
    }
    }
    sort(v.begin(),v.end());
    for(int i:v){
        int output=i;
        cout<<output<<" ";
    }
}

int prime(int n){
    int count=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            count+=1;
            if(n/i!=i){
                count+=1;
            }
        }
    }
    if(count==2){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
}

int gcd(int n1,int n2){
    int gcd=1;
    for(int i=1;i<min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    cout<<gcd;
}

int euclidean(int n1,int n2){
    while(n1>0 && n2>0){
       if(n1>n2){
        n1=n1%n2;
    }else{
        n2=n2%n1;
    }
}
if(n1==0){
    cout<<n2;
}
else{
    cout<<n1;
}
}

int main(){
    int n1,n2;
    int n;
    cin>>n1>>n2;
    euclidean(n1,n2);   
}