#include<iostream>
#include<climits>
#include<vector>
using namespace std;

vector<int> sub_sum(int sum,vector<int>input)
{
    int si=0,ei=0;
    int beststart=0;
    int length=INT_MAX;
    int curr_sum=0;
    while(ei<input.size())
    {
        if(sum>curr_sum)
        {
            curr_sum+=input[ei];
            ei++;
        }
        else{
            if(length>ei-si)
            {
                beststart=si;
                length=ei-si;
            }
            curr_sum-=input[si];
            si++;
        }
    }
    vector<int>output(length);
    for(int i=0;i<length;i++)
    {
        output[i]=input[beststart+i];
    }
    return output;
}
int main()
{   int l,sum,i=0;
    cin>>l;
    vector<int> input={1,3,5,6,4,3};
    cin>>sum;
    vector<int>output(l);
    output=sub_sum(sum,input);
    for(i=0;i<output.size();i++)
        cout<<output[i]<<" ";

}


\\Equal to sum

#include <iostream>
#include<vector>
using namespace std;

int main() {

	int t;
    cin>>t;
    while(t--)
    {   int i,n,ei=0,si=0,sum,flag=0,curr_sum=0;
        cin>>n>>sum;
        vector<int>arr(n);
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for( i=0;i<n;i++)
        {
            curr_sum+=arr[i];
            // if(curr_sum>sum)
            // {
            //     ei=i;
                while((curr_sum>sum) && (si<ei))
                {
                    curr_sum-=arr[si];
                    si++;
                }


            if(curr_sum==sum)
                {   ei=i;
                    cout<<si+1<<" "<<ei+1<<endl;
                    flag=1;
                    break;
                }
        }
        if(flag==0)
        {
            cout<<-1<<endl;
        }
    }
	return 0;
}
