#include<iostream>
using namespace std;
int main(){
    int  length=5;
   int  arr[length]={2,5,3,7,9};
    for(int j=length-1;j>0;j--){
        int key=arr[j];
        int i=j-1;
        while (i>=0 && arr[i]< key){
            arr[i+1]=arr[i];
            i=i-1;
        }
        arr[i+1]=key;
    }
    for(int i;i<length;i++){
        cout<<arr[i]<<" ";
    }

}
