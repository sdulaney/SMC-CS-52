// Stewart Dulaney
// 3/17/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 3
// Problem 1
#include <iostream>
const int ARRAY_SIZE = 10;

using namespace std;

void fill_array(int a[], int size);
// Precondition: size is the declared size of the array a.
// Postcondition: a[0] through a[size - 1] have been filled
// with integers read from the keyboard.

void sort(int a[], int size);
// Precondition: size is the declared size of the array a.
// The array elements a[0] through a[size - 1] have values.
// Postcondition: The values of a[0] through a[size - 1] have
// been rearranged so that a[0] <= a[1] <= ... <= a[size - 1].

void swap_values(int& v1, int& v2);
// Interchanges the values of v1 and v2.

int index_of_smallest(const int a[], int start_index, int size);
// Precondition: 0 <= start_index <= size. Referenced array elements have
// values.
// Returns the index i such that a[i] is the smallest of the values
// a[start_index], a[start_index + 1], ..., a[size - 1].

void print_array(int a[], int size);
// Precondition: size is the declared size of the array a.
// The array elements a[0] through a[size - 1] have values.
// Postcondition: Prints a comma separated list of the array
// elements a[0] through a[size - 1].

int main()
{
    int arr[ARRAY_SIZE];
    cout << "Enter 10 integers:\n";
    fill_array(arr, ARRAY_SIZE);
    sort(arr, ARRAY_SIZE);
    cout << "\nSorted:\n";
    print_array(arr, ARRAY_SIZE);
    
    return 0;
}

// Uses iostream:
void fill_array(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << ": ";
        cin >> a[i];
    }
}

// Selection Sort
void sort(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // Place the correct value in a[i]
        int index_of_next_smallest = index_of_smallest(a, i, size);
        swap_values(a[i], a[index_of_next_smallest]);
    }
}

void swap_values(int& v1, int& v2)
{
    int temp = v1;
    v1 = v2;
    v2 = temp;
}

int index_of_smallest(const int a[], int start_index, int size)
{
    int min = a[start_index], index_of_min = start_index;
    for (int i = start_index + 1; i < size; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            index_of_min = i;
        }
    }
    return index_of_min;
}

// Uses iostream:
void print_array(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i];
        if (i < size - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
}
