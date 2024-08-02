#include<iostream>
using namespace std;
class Stack {

     int arr[10];
    int top=-1;
    int siz=10;
public:
    void push(int val)
    {
        if (top>siz-1)
        {

            cout<<"stack is overloaded"<<endl;
        }
        else{
            top++;
            arr[top]=val;
        }

    }
    void pop()
    {
        if (top<=-1)
            {
                cout<<"the stack is empty"<<endl;

            }
            else{
                top--;
            }
    }
    void display()
    {
        for (int i=0;i<siz;i++){
        cout<<arr[i]<<" "<<endl;
        cout<<getval()<<endl;;
        }
    }
    int getval(){
    return top;
    }

};
int main()
{

    Stack s;
    s.push(10);

    s.display();

}
