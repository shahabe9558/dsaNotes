#include<iostream>
using namespace std;
class TwoStack{
    public:
    int top1;
    int top2;
    int size;
    int *arr;
    TwoStack(int s)
    {
        this->size = s;
        this->top1 = -1;
        this->top2 = s;
        arr = new int[s];
    }
    void push1(int element)
    { 
        if(top2 - top1 > 1)
        {
            top1++;
            arr[top1] = element;
        }
        else{
            cout << "Stack is overflow-1" << endl;
        }
    }
    void push2(int element)
    {
        if(top2 - top1 > 1)
        {
            top2--;
            arr[top2] = element;
        }
        else{
            cout << "Stack is overflow-2" << endl;
        }
    }
    void pop1()
    {
        if(top1 >= 0)
        {

            top1--;
        }
        else{
            cout <<"Stack is underflow-1" << endl;
        }
    }

    void pop2()
    {
        if(top2 <= size)
        {
            
            top2++;
        }
         else{
            cout <<"Stack is underflow-2" << endl;
        }
    }


};

// two stack in single array
int main()
{
    TwoStack ts(5);
    ts.push1(1);
    ts.push1(2);
    ts.push1(3);
    ts.push2(4);
    ts.push2(5);
    ts.pop2();
    ts.pop2();
    ts.pop2();
    ts.pop2();
 

    // ts.pop2();
    // ts.pop2();


}















// #include <iostream>
// #include <stack> 
// using namespace std;
// class TwoStack {
// 	int *arr;
//     int top1;
//     int top2;
//     int size;
// public:

//     // Initialize TwoStack.
//     TwoStack(int s) {
//         this -> size = s;
//         top1 = -1;
//         top2 = s;
//         arr = new int[s];
//     }
    
//     // Push in stack 1.
//     void push1(int num) {
//         //atleast a empty space present
//         if(top2 - top1 > 1 ) {
//             top1++;
//             arr[top1] = num;
//         } 
       
//     }

//     // Push in stack 2.
//     void push2(int num) {
//          if(top2 - top1 > 1 ) {
//             top2--;
//             arr[top2] = num;
//         } 
       
//     }

//     // Pop from stack 1 and return popped element.
//     int pop1() {
// 		if( top1 >= 0) {
//             int ans = arr[top1];
//             top1--;
//             return ans;
//         }
//         else
//         {
//             cout << "Stack is undeflow" << endl;
//             return -1; 
//         }
//     }

//     // Pop from stack 2 and return popped element.
//     int pop2() {
// 		if( top2 < size) 
//         {                 
//             int ans = arr[top2];
//             top2++;
//             return ans; 
//         }
//         else
//         {
//             return -1;
//         }
//     }

// };

// int main()
// {
// TwoStack t1(4);
// t1.push1(11);
// t1.push1(11);
// t1.push2(33);
// t1.push2(44);
// t1.pop1();
// t1.pop1();
// t1.pop1();
// //t1.pop1();


// }