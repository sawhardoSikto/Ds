#include<iostream>
using namespace std;
int main()
{
    int flag=0;
    int i;
    int arr[]={10,15,25,47,4,5,6};
    int n;
    cout<<"searching number"<<endl;
    cin>>n;
    for (  i=0;i<7;i++)
    {
        if (n==arr[i])
        {
           flag++;
           break;

        }




    }
    if (flag==1)
    {
         cout<<"the number is found "<<"index:"<<i<<endl;

    }
    else {
        cout<<"not found"<<endl;
    }

}
