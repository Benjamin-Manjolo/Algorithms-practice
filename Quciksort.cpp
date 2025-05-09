#include <iostream>
using namespace std;


//partition function - the core of quicksort

int partition(int arr[],int low,int high){
    int pivot = arr[high];//choose last element as pivot
    int i = (low - 1); // index of smaller element

    for (int j = low; j <= high - 1; j++){
        //if current element is smaller than pivot
        if (arr[j] < pivot ){
            i++; //move index of smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return (i + 1);
}

//Quicksort main function 
   void quicksort(int arr[], int low, int high){
    if (low < high){
        //pi is partitioning index, arr[p] is now in place
        int pi = partition(arr, low, high);

        //recursively sort elements
        //and after partition

        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

//Helper function to print array elements
void printArray (int arr[],int size) {
    for (int i = 0; i < size;i++)
        cout << arr[i] << " ";
    cout << endl;

}

//example usage


int main(){
    int arr[] = {500,2,19,35,17};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Origin array :";
    printArray(arr, n);
    return 0;
}