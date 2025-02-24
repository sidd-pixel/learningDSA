#include<iostream>
using namespace std;
// int num1,num2;

// int printSum(int num1,int num2){
//     int sum = num1 + num2;
//     return sum;
// }

// int main(){
//     cin>>num1>>num2;
//     int result=printSum(num1,num2);
//     cout<<result;
//     return 0;
// }

void dosomething(int &num){
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}


int main(){
    int num=10;
    cout<<num<<endl;
    dosomething(num);
    cout<<num;
    return 0;
}