/*simple implementation of bubble sort*/

#include<iostream>

using namespace std;

int main()
{
    void bsort(int arr[],int n);
    int arr[50];
    const int n=10;

    cout<<"Input:";
    for(int i=0; i<n; i++)
        cin>>arr[i];

    bsort(arr,n);

    cout<<"Sorted:\n";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<"\n";

    return 0;
}


void bsort(int arr[],int n)
{
    int temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
            if(arr[j]>arr[j+1]) //for asc >..for des <
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
    }
}
