#include<iostream>

using namespace std;

int setb(int n,int counts)
{
    if(n==0){
        return 0;
    }
    counts=(n&(n-1));
    return counts+setb(n-1,counts);
}

int main()
{
    int c=setb(5,0);
    cout<<c;
    int p=3&1;
    cout<<p;
    return 0;
}
