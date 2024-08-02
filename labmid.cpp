#include<iostream>
using namespace std;
int arr[]={10,80,67,87,8,9};
int length=7;

void func(int pos,int val){
for (int j=length;j>pos;j--){


arr[j]=arr[j-1];


}
arr[pos]=val;

}
int main(){
func(2,100);
for (int i=0;i<length;i++)
{
    cout<<arr[i]<<" ";
}
}

