// QuickSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//array of integers to hold values
int arr[20];
int cmp_count = 0; //number of comparasion
int mov_count = 0; //number of data movements
int n;

void input() {
    while (true)
    {
        cout << "Masukkan panjang element array: ";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "\nMaksimum panjang array adalah 20" << endl;
    }

    cout << "\n-----------" << endl;
    cout << "\nEnter Array Element" << endl;
    cout << "\n-----------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}

//swaps the element at index x with the element at index y
void swap(int x, int y)
{
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
    mov_count++;
}

void q_short(int low, int high)
{
    int temp;
    int pivot, i, j;
    if (low > high) {//step 1
        return;
    }

    pivot = arr[low]; //step 2
    i = low + 1; //step 3
    j = high; //step 4
   
    while (i <= j) //step 10
    {
        //search for an element greater than pivot
        while ((arr[i] <= pivot) && (i <= high)) //step 5
        { }
    }
}

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
