// C++ program to demonstrate segmentation
// fault when uninitialized pointer 
// is accessed
#include <iostream>
using namespace std;

int main()
{
    int* ptr;
    int* nptr = NULL;
    cout << *ptr << " " << *nptr;
}
