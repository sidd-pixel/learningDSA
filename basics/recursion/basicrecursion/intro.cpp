#include <bits/stdc++.h>
using namespace std;

int print(int count)
{
    if (count == 5)
        return 0;
    else
    {
        cout << "Siddhant" << endl;
        count++;
        print(count);
        return 0;
    }
}

int firsttenint(int i,int count){
    if(i>count)
        return 0;
    else{
        cout<<i<<" ";
        firsttenint(i+1,count);
        return 0;
    }
}
int revnum(int i,int count){
    if(i<1)
        return 0;
    else{
        cout<<count<<" ";
        revnum(i-1,count);
        return 0;
    }
}

int main()
{
    int i;
    int count;
    cin>>count;
    revnum(10,count);
    return 0;
}