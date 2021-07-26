#include<iostream>

using namespace std;
int main()
{
    int i,t,first,last,mid,n,key,c;
    cout<<"Enter the no of test cases:";
    cin>>t;
    while(t--)
    {
        cout<<"Enter the size of array:";
        cin>>n;
        int arr[n];
        cout<<"Enter the array elements:";
        for(i=0;i<n;i++)
            cin>>arr[i];
        c=0;
        cout<<"Enter the key:";
        cin>>key;
        first=0;
        last=n-1;
        while(first<=last)
        {
            mid=(first+last)/2;
            if(key==arr[mid])
            {
                c++;
                cout<<"Present\n"<<c<<endl;
                break;
            }
            else if(key<arr[mid])
            {
                c++;
                last=mid-1;
            }
            else if(key>arr[mid])
            {
                c++;
                first=mid+1;
            }
        }
        if(first>last)
        {
            cout<<"Not present\n"<<c<<endl;
        }
    }
    return 0;
}
