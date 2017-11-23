/*simple implementation of binary search*/

#include<iostream>

using namespace std;

int main()
{
    void isort(int arr[],int n);
    int bsearch(int arr[],int n,int e);
    int arr[50],el;
    const int n=5;

    cout<<"Input:";
    for(int i=0; i<n; i++)
        cin>>arr[i];

    isort(arr,n);

    cout<<"To find?";
    cin>>el;

    if(bsearch(arr,n,el))
        cout<<"Present";
    else
        cout<<"Not Present";

    return 0;
}


void isort(int arr[],int n)
{
    int j,temp;
    for(int i=1; i<n; i++)
    {
        for(j=i-1; j>=0; j--)
            if(arr[i]>arr[j]) //for asc >..for des <
                break;
        temp=arr[i];
        for(int k=i; k>=j+2; k--)
            arr[k]=arr[k-1];
        arr[j+1]=temp;
    }
}

int bsearch(int arr[],int n,int e)
{
    int fst=0,lst=n-1,mid;

    while(lst>=fst)
    {
        mid=(lst+fst)/2;
        if(arr[mid]==e)
            return 1;
        else if (arr[mid] < e)
            fst=mid+1;
        else
            lst=mid-1;
    }

    return 0;
}



















