#include<iostream>

using namespace std;
int frequency(int arr[],int n,int key)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            c++;
        }
    }
    cout<<c<<endl;
    return c;
}



int main()
{
    int n,i,key,t;
    cout<<"Enter the no of test cases:";
    cin>>t;
    while(t--)
    {
        cout<<"\n Enter the size of array:";
        cin>>n;
        int arr[n];
        cout<<"Enter the elements:";
        for(i=0;i<n;i++)
            cin>>arr[i];
        cout<<"Enter the key:";
        cin>>key;
        int val=frequency(arr,n,key);
        if(val>0)
        {
            cout<<"present"<<endl;
        }
        else
            cout<<"not present"<<endl;
    }
    return 0;
}
