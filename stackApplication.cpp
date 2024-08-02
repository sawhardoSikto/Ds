#include <iostream>

using namespace std;
class Stack
{
    char  arr[100];

    int size=100;
    int top; //length

public:
    Stack()
    {
        top=0;
    }
    void Push(char  v)
    {
        if(top<size)
        {
            arr[top] = v;
            top++;
        }
        else cout<<"Stack Overflow"<<endl;

    }
    void Pop()
    {
        if(top>0)
            top--;
        else cout<<"Stack is Empty"<<endl;
    }
    char  getTop()
    {
        if(top>0)
            return arr[top-1];
        else
        {
            cout <<"Stack empty"<<endl;
            return 0;
        }
    }


};

int main()
{
    Stack s ;
    string b= {"[{()}]"};

    for (int i=0; i<b.length(); i++)
    {
        if (b[i] == '{' || b [i]== '(' || b[i] == '['){

            s.Push(b[i]);}

            else if(b[i]=='}'|| b[i]==')' || b[i]==']'){

                if (s.getTop()=='(' && b[i]==')')
                    s.Pop();
                else if(s.getTop()=='{' && b[i]=='}')
                    s.Pop();
                else if (s.getTop()=='['&& b[i]==']')
                    s.Pop();


        }
        }


  if (s.getTop()==0)
  {

      cout<<"balanced"<<endl;

  }
    else {
        cout<<"not"<<endl;
    }


    return 0;
}
