#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,5,12,10,6,7};
    int size=8;
    for (int i=0;i<size;i++)
    {
        for (int j=0;j<size-1-i;j++)
        {
            if ( arr[j]>arr[j+1]) 
            {


        int temp=arr[j+1];
       
        arr[j+1]=arr[j];
       arr[j]=temp;

            }

        }

    }
    for ( int j=size;j>=0;j--)
    {
        cout<<arr[j]<<" ";
    }
    
}