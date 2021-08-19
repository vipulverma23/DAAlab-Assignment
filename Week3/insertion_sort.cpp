#include<iostream>

using namespace std;

void insertion_sort(int arr[],int n)
{
    int i,j,shift=0,comp=0;
    for(i=1;i<n;i++)
    {
        int val=arr[i];
        j=i;
        while(j>0 && arr[j-1]>val)
        {
            arr[j]=arr[j-1];
            j=j-1;
            shift++;
            comp++;
        }
        arr[j]=val;
        shift++;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    cout<<"Shifts:"<<shift<<endl;
    cout<<"comparison:"<<comp<<endl;
}

int main()
{
    int i,n,t;
    cout<<"Enter the no of test cases:";
    cin>>t;
    while(t--)
    {
        cout<<"Enter the size of array:";
        cin>>n;
        int arr[n];
        cout<<"Enter the elements:";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        insertion_sort(arr,n);
    }

}
