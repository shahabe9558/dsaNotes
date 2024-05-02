// #include<iostream>
// using namespace std;
// void update(char ch[], int n)
// {
//     ch[0] = 'z';
//     cout << ch << endl;
// }
// void updateStr(string str)
// {
//     str[0] = 's';
//     cout << "Updated is " << str << endl;
// }
// int main()
// {
//     char ch[5] = "abcd";
//     update(ch, 5);
//     cout << ch << endl;

//     string str = "alam\0";
//     updateStr(str);
//     cout << "After update " <<  str << endl;
// }



// #include <iostream>
// using namespace std;

// // Function to modify a string using a pointer
// void modifyString(char* str) {
//     str[0] = 'X'; // Modifying the first character of the string
// }

// int main() {
//     char myString[] = "Hello";
//     cout << "Before modification: " << myString << endl;

//     // Pass the string to the function using a pointer
//     modifyString(myString);

//     cout << "After modification: " << myString << endl;
//     return 0;
// }



// #include <iostream>
// #include <string>
// using namespace std;

// // Function to modify a string using a pointer
// void modifyString(string str) {
//     (str)[0] = 'X'; // Modifying the first character of the string
// }

// int main() {
//     string myString = "Hello";
//     cout << "Before modification: " << myString << endl;

//     // string does not pass adddress
//     modifyString(myString);

//     cout << "After modification: " << myString << endl;
//     return 0;
// }



#include <iostream>
#include <string>
using namespace std;

// Function to modify a string using a reference
void modifyString(string& str) {
    str[0] = 'X'; // Modifying the first character of the string
}

int main() {
    string myString = "Hello";
    cout << "Before modification: " << myString << endl;

    // Pass the string to the function using a reference
    modifyString(myString);

    cout << "After modification: " << myString << endl;
    return 0;
}