#include<iostream>
using namespace std;

void swapValues(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//Bubble Sort
void bubbleSort(int arr[],int size){
    for ( int i=0;i<size;i++)
    {
        for( int j=0;j<size-i-1;j++)
        {
            if ( arr[j]>arr[j+1])
            {

                swapValues(&arr[j+1], &arr[j]);
                /*int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;*/
            }
        }
    }
}

//Selection Sort
void selectionSort(int arr[],int size)
{
    for( int i=0;i<size;i++)
    {
        int min=i;
        for (int j=i+1;j<size;j++)
        {
            if (arr[j]<arr[min])
            {
                min=j;
                swapValues(&arr[i], &arr[min]);
            }
        }

    }

    //Your code for sorting the data using selection sort.
}

//Insertion Sort
void insertionSort(int arr[],int size){
    //Your code for sorting the data using insertion sort.
}


int main(){
    int size = 15;
    int data[] = {35,14,7,9,46,26,17,49,6,9,33,4,17,37,22};

    cout<<"Unsorted Data"<<endl;
    printArray(data,15);

    //Call your sorting function
    //bubbleSort(data,15);
   selectionSort(data,15);
    //insertionSort(data,15);

    cout<<"Sorted Data"<<endl;
    printArray(data,15);

return 0;
}
