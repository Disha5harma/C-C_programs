#include<iostream>

using namespace std;

int setb(int n,int count)
{
    if(n==0){
        return count;
    }
    count+=n&(n-1);
    return count+setb(n>>1,count);
}

int main()
{
    int c=setb(3,0);
    cout<<c;
    return 0;
}
