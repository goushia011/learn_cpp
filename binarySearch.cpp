#include<iostream>
#include<conio.h>
#include "array.cpp"
using namespace std;
int main()
{
    int key, index, lowerLimit, upperLimit, size, a[100];
    bool flag = false;
    cout<<"Enter size of array : ";
    cin>>size;
    cout<<"Enter the elements\n";
    for (int i = 0; i < size; i++)
    {
        cin>>a[i];
    }
    bubbleSort(a, size);
    printArray(a, size);
    cout<<"Enter key : ";
    cin>>key;
    lowerLimit = 0;
    upperLimit = size - 1;
    for(int i = 0; i <= size / 2; ++i) {
        index = (lowerLimit + upperLimit) / 2;
        if(a[index] == key) {
            flag = true;
            break;
        } else if (a[index + 1] == key) {
            flag = true;
            index++;
            break;
        } else if (a[index] > key) {
            upperLimit = index;
        } else if (a[index] < key) {
            lowerLimit = index;
        }
    }
    if(flag) {
        cout<<"key found at "<<index;
    } else {
        cout<<"key not found";
    }
}

// using namespace std;
// int main() {
    
// }
