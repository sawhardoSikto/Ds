#include<iostream>
using namespace std;
int arr[10]={46,45,25,36,78};
int siz=10;
int length=5;
int i; int j;

void Function(int pos)
{
    if (length<siz)
    {
        for (i=pos;i<length;i++)
        {

            arr[i]=arr[i+1];


        }

        length--;
    }
    for (j=0;j<length;j++){
        cout<<arr[j]<<" " ;
    }

}
int main()
{
    Function(1);

}

