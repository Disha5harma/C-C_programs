#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
    {   int n,i;
        cin>>n;

        int arr[n],sum=0,p1=0,p2=0;
    	for(i=0;i<n;i++)
    	    cin>>arr[i];
    	for(i=0;i<n;i++)
    	    sum+=arr[i];

    	if(n==1)
    	    cout<<1<<endl;
    	else if(n>2)
    	{
    	    i=0;
    	    p1=0;
        	p2=sum;
        	while(i+1<n)
        	{
        	    p1+=arr[i];
        	    p2-=arr[i]-arr[i+1];
        	    if(p1==p2)
        	    {   cout<<i+2<<endl;
        	        break;
        	    }
        	    i++;
        	}
    	}
    	else
    	    cout<<-1<<endl;

	}
	return 0;
}
