#include<iostream>
#include<math.h>
using namespace std;
int jump(int arr[],int n, int key,int &count)
{

     int pos1=0;
     int pos2=sqrt(n);
        while(key>arr[min(n,pos2)-1])
        {
            count++;
            pos1=pos2;
            pos2+=sqrt(n);
            if(pos1>=n)
              return -1;
        }
        for (int i=pos1;i<min(pos2,n);i++)
        {
            if(arr[i]>key)
                break ;
                count++;
            if(arr[i]==key)
                return i;
        }

        return -1;
}
int main()
{

    int n,i,key,t,count=0;
    cout<<"Enter the no of test cases: ";
    cin>>t;
    while(t--)
    {
    cout<<"\nEnter no of element:";
    cin>>n;
    int arr[n];
    cout<<"Enter element:";
    for(i=0;i<n;i++)
    {

        cin>>arr[i];
    }
    cout<<"Enter key:";
    cin>>key;
    int val=jump(arr,n,key,count);
    if(val!=-1)
    {
        cout<<"present\n"<<count;
    }
    else{cout<<"not present\n"<<count;}

   }
   return 0;
}
