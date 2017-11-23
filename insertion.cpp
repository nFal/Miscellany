/*simple insertion sort implementation*/
#include<iostream>

using namespace std;

int main()
{
    void isort(int arr[],int n);
    int arr[50];
    const int n=10;

    cout<<"Input:";
    for(int i=0; i<n; i++)
        cin>>arr[i];

    isort(arr,n);

    cout<<"Sorted:\n";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<"\n";

    return 0;
}


void isort(int arr[],int n)
{
    int j,temp;
    for(int i=1; i<n; i++)
    {
        j=i;
        while(arr[j]<arr[j-1] && j!=0)
        {
            temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
}
