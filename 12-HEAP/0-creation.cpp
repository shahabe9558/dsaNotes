#include<iostream>
using namespace std;
class Heap{
    public:
    int arr[100];
    int size;
    Heap()
    {
        arr[0] = -1;
        size = 0;
    }
    // applying the max heap 
    void insert(int val)
    {ize
        s = size + 1;
        int index = size;
        arr[index] = val;
        // navigate that its is at correct pos 
        while(index > 1)
        {
            int parentIndex = index/2;
            if(arr[index] > arr[parentIndex])
            {
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            }
            else{
                break;
            }
        }
    }
    void deleteElement()
    {
        if(size == 0)
        {
            cout << "Heap is empty nothing can be deleted" << endl;
            return ;
        }
        arr[1] = arr[size];
        size--;
        int index = 1;
        while(index < size)
        {
            int leftIndex = 2 * index;
            int rightIndex = 2 * index + 1;
            if(leftIndex < size && arr[index] < arr[leftIndex])
            {
                swap(arr[index], arr[leftIndex]);
                index = leftIndex;
            }
            else if(rightIndex < size && arr[index] < arr[rightIndex])
            {
                swap(arr[index], arr[rightIndex]);
                index = rightIndex;
            }
            else{
                break;
            }
        }
    }
    void print()
    {
        for(int i =0; i<=size; i++)
        {
            cout << arr[i] << endl;
        }
    }
};
// heap is a CBT comes with heap order property i.e max heap and min heap   
// TC IS O(n log n)
int main()
{
    Heap h;
    h.insert(60);
    h.insert(50);
    h.insert(55);
    h.insert(30);
    h.insert(20);
    h.print();
    cout << "before deleting " << h.size << endl;
    h.deleteElement();
    h.deleteElement();
    h.deleteElement();
    h.deleteElement();
    h.deleteElement();
    cout << "after deleting " << h.size << endl;
    h.print();

}