#include<iostream>
using namespace std;

int main()
{   
    int arr[100];
    cout << arr[1] << endl;
    cout << arr[102] << endl;

    arr[102] = arr[102]+1;
    cout << arr[102] << endl;
    return 0;
}

