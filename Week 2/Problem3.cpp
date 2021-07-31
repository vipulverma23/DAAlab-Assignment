#include<iostream>

using namespace std;

int countofpairs(int arr[],int n,int key)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]-arr[j]==key || arr[j]-arr[i]==key)
                c++;
        }
    }
    return c;
}

int main()
{
    int n,i,key,t;
    cout<<"Enter the no of test cases:";
    cin>>t;
    while(t--)
    {
        cout<<"\nEnter the size of array:";
        cin>>n;
        int arr[n];
        cout<<"Enter the elements:";
        for(i=0;i<n;i++)
            cin>>arr[i];
        cout<<"Enter the difference:";
        cin>>key;
        cout<<"Pairs with the given difference are "<<countofpairs(arr,n,key);
    }
    return 0;
}
