#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;


void findDuplicate(int arr[], int n)
{
   vector<int> ans;
   sort(arr, arr+n);

   for(int i =0; i<n; i++)
   {
    if(arr[i] != arr[i+1] && arr[i] == arr[i-1])
    {
        ans.push_back(arr[i]);
    }
   }
   for(auto i : ans)
   {
    cout << i <<" ";
   }
   
}
int main()
{
    int arr[] = {2,3,2,3,4};
    findDuplicate(arr, 5);

}




// #include <iostream>
// #include <array>
// using namespace std;
// int findDublicate(int arr[], int size)
// {
//     int ans =0;
//     //  using xor with all elements of array 

//     for(int i=0; i<size; i++)
//     {
//       ans = ans^arr[i];
//     }

//     // xor with n-1 elements 

    
//     for(int i=0; i<size; i++)
//     {
//       ans = ans^i+1;
//     }
//     return ans; 
// }
// int main()
// {
//     int arr[6] = {2,3,4,2,3};
//     cout << findDublicate(arr, 6);

// }




// #include <iostream>
// using namespace std;

// // using bruteForce method finding duplicate element

// void duplicateArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] == arr[j])

//             cout << arr[j];
//         }
//     }
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 3};
//     duplicateArray(arr, 5);
// }
