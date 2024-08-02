#include<iostream>
using namespace std;
int arr[10]= {10,20,30,40,60};
int length=5;
int size=10;

void func(int pos,int val)
{
    if(length<size)
    {


        for( int i=length; i>pos; i--)
        {
            arr[i]=arr[i-1];

        }
        arr[pos]=val;
        length++;


    }


}
void display ()
{
    for(int j=0;j<length;j++){
        cout<<arr[j]<<" ";
    }
}
int main()
{

    func(4,50);
     display();
}
