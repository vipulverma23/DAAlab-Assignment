#include<iostream>
using namespace std;
int main()
{
int n,i,num,key=1;
cout<<"enter the value of n:";
cin>>n;
int a[n];
cout<<"enter the array elements:";
for(i=0;i<n;i++){
cin>>a[i];
}
cout<<"enter the no you want to search:";
cin>>num;
for(i=0;i<n;i++){
if(a[i]==num)
{
 cout<<"present"<<endl;;
 cout<<key;
 break;
}
key++;
}
if(i==n)
{
    cout<<"not found"<<endl;
    cout<<key;
}
}

