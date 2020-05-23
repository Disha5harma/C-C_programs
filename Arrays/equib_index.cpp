//Program to find the equilibrium index where the sum of leftside elements equals rightside elements

#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int arr[n],leftsum[n],sum=0,i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        leftsum[i]=sum;
    }

    int flag=0,rightsum=0;
    for(i=n-1;i>=0;i--)
    {
        rightsum+=arr[i];
        if(leftsum[i]==rightsum)
        {
            cout<<i+1<<endl;
            flag=1;
            break;
        }

    }

    if(flag==0)
        cout<<-1<<endl;

	return 0;
}

//Program to rotate the array by given units(r)

void rotate_arr(int arr[n],int n,int r)
{
    reverse(arr,arr+r);
    reverse(arr+r,arr+n);
    reverse(arr,arr+n);

    return arr;
}
