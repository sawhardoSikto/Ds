#include<iostream>
using namespace std;
int arr[10]={10,20,30,40,60};
int size=10;
int length=5;
void func(int pos)
{
    if(size>length)
    {
        for (int i=pos;i<length;i++)
        {

            arr[i]=arr[i+1];
        }

    }
   length--;
   for (int j=0;j<length;j++)
   {
       cout<<arr[j]<<" ";
   }
}
int main()
{
    func(2);

}
