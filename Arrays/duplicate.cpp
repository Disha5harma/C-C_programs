//FINDING DUPLICATE ELEMENTS IN A GIVEN ARRAY

#include<iostream>
#include<stdlib.h>

using namespace std;

//int DuplicateNumber(int arr[], int size){
//     SIZE O(n^2)
//       int x;
//     for(int i=0;i<size;i++)
//     {
//         for(int j=i+1;j<size;j++)
//         {
//             if(arr[i]==arr[j])
//             {
//           		x=arr[i];
//                 return x;
//             }
//         }
//     }
    //O
    /*for (int i = 0; i < size; i++)
{
    if (arr[abs(arr[i])] >= 0)
    arr[abs(arr[i])] = -arr[abs(arr[i])];
    else
    cout << abs(arr[i]) << " ";
}}*/
int main()
{   /*int i;
    int arr[]={0,7,2,5,4,7,1,3,6,6};
    int size=10;

    DuplicateNumber(arr,size);*/
    int numRay[] = {0, 4, 3, 2, 7, 8, 2, 3, 1};
    int arr_size = sizeof(numRay) /
                   sizeof(numRay[0]);
    for (int i = 0; i < arr_size; i++)
    {
        numRay[numRay[i] % arr_size] = numRay[numRay[i] % arr_size] + arr_size;
    }
    cout << "The repeating elements are : " << endl;
    for (int i = 0; i < arr_size; i++)
    {
        if (numRay[i] >= arr_size*2)
        {
            cout << i << " " << endl;
        }
    }


    return 0;
}
