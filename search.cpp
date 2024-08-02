//search
//#include<iostream>
//using namespace std;
//int main()
//{
//    int arr[5]={4,58,6,68,1};
//    int n,i;
//    cout<<"input what number are u search ";
//     cin>>n;
//
//    for (i=0;i<5;i++)
//    {
//
//        if (arr[i]==i)
//        {
//            break;
//        }
//
//    }
//    cout<<n<<" was found in  "<<i<<"  no.cullom "<<endl;
//
//}
//insertion
/*#include<iostream>
using namespace std;
int arr[10]={3,4,6,2,1};
int sizee=10;
int length=5;
int i;
void func(int value,int position)
{
    if (sizee>length)
    {
        for(i=length;i>position;i--)
        {
            arr[i]=arr[i-1];


        }
        arr[position]=value;
        length++;

    }
}
void print(){
for(i=0;i<length;i++){
    cout<<arr[i]<<" ";
}

}
    int main(){
    func(5,3);
    print();

    }
    */
    //deletation
    #include<iostream>
    using namespace std;
    int arr[10]={3,4,6,2,1};
int sizee=10;
int length=5;
int i;
    void func(int value,int position)
{
    if (sizee>length)
    {
        for(i=0;i<length;i++)
        {
            arr[i]=arr[i+1];


        }
        arr[position]=value;
        length--;

    }
}
void print(){
for(i=0;i<length;i++){
    cout<<arr[i]<<" ";
}

}
    int main(){
    func(5,3);
    print();

    }

