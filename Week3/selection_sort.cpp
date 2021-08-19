#include<iostream>
using namespace std;

void selection_sort(int arr[],int n)
{
   int i,j,imin,c=0,shift=0;
   for(i=0;i<n-1;i++)
   {
       imin=i;
       for(j=i+1;j<n;j++)
       {
           if(arr[j]<arr[imin])
            imin=j;
           c++;
       }
       int temp = arr[i];
       arr[i]=arr[imin];
       arr[imin]=temp;
       shift++;
   }
   for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    cout<<"Shifts:"<<shift<<endl;
    cout<<"comparison:"<<c<<endl;
}

int main()
{
    int t;
    cout<<"enter the test cases:";
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"enter the size:";
        cin>>n;
        int arr[n];
        cout<<"enter the elements:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        selection_sort(arr,n);
    }
}

