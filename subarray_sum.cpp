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
