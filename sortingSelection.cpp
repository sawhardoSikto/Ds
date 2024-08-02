#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,7,4,5,9,7,2,6,2};
    int size=9;
    for (int i=0;i<size;i++)
    {
        int min=i;
        for (int j=0;j<size;j++)
        {
            if (arr[j]<arr[min]){
                min=j;
              int temp=arr[min];
             arr[min]=arr[j];
             arr[j]=temp;


            }
        }
    }
     for ( int j=0;j<size;j++)
    {
        cout<<arr[j]<<" ";
    }
}