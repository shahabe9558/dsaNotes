// heap is a compleate binary tree which has heap property i.e max-heap and min-heap 
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

    // inserting into a heap 

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;
        while(index > 1)
        {
            int parent = index/2;

            if(arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return ;
            }
        }
    }

    void print()
    {
        for(int i =1; i<=size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void deleteFromHeap()
    {
     
        if(size == 0)
        {
            cout << "Nothing to delete" << endl;
            return ;
        }
        // step-1
        arr[1] = arr[size];
        
        // step-2
        size--;

        // step-3
        int i = 1;
        while(i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;

            if(leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else{
                return ;
            }
        }

    }
};

int main()
{
   Heap h1;
   h1.insert(50);
   h1.insert(55);
   h1.insert(53);
   h1.insert(52);
   h1.insert(54);
   h1.print();
   h1.deleteFromHeap();
//    h1.deleteFromHeap();
   h1.print();
}
