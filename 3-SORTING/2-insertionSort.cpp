#include <iostream>
using namespace std;
void insertionSort(int arr[], int size)
{
   for(int i = 1; i<size; i++) {
        int temp = arr[i];  
        int j = i-1;
        for(; j>=0; j--) { 
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
            
        }
        //copy temp value
        arr[j+1] = temp;   
        
    for(int i=0; i<size; i++)
    {
        cout << arr[i] <<" ";
    }
    cout <<endl;
    } 
}
int main()
{
    int arr[4] = {4,12,11,20};
    insertionSort(arr, 4);
}