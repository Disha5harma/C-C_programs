#include <vector>

vector<int> maxset(int *a, int size) {

    vector<int> *max_arr = new vector<int>;
	vector<int> *new_arr = new vector<int>;
    long newsum=0,maxsum=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]>=0)
        {
            newsum+=a[i];
            new_arr->push_back(a[i]);
        }
        else{
            new_arr=new vector<int>;
            newsum=0;    }

            if((maxsum<newsum) || ((maxsum==newsum) && (max_arr->size()<new_arr->size())))
            {
                max_arr=new_arr;
                maxsum=newsum;
            }

    }
    return *max_arr;
}
