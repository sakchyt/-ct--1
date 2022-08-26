//Name:Saksham Chauhan
//RollNo:2010992073
//Set:- 4
//Q2


#include <iostream>
#include <unordered_set>
using namespace std;

// This Function  is to find the minimum index of the repeating element in an array
int findMinIndex(int arr[], int n)
{
    int minIndex = n;

    // This creates an empty set to store array elements the way in which we want
    //we have use hashing i.e unordered set
    unordered_set<int> set;

    // traverse the array from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        // if the element is seen before, update the minimum index
        if (set.find(arr[i]) != set.end())
        {
            minIndex = i;
        }
        // if the element is seen for the first time, insert it into the set
        else
        {
            set.insert(arr[i]);
        }
    }

    // This is an invalid input
    if (minIndex == n)
    {
        return -1;
    }

    // It will return you the  minimum index
    return minIndex;
}

int main()
{
    int arr[] = {5, 6, 3, 4, 3, 6, 4};
    // int arr[] = { 1, 2, 3, 4, 5, 6 };

    int n = sizeof(arr) / sizeof(arr[0]);

    int minIndex;

    try
    {
        minIndex = findMinIndex(arr, n);
    }
    catch (int error)
    {
        cout << "Error: " << error << endl;
    }

    if (minIndex != n)
    {
        cout << "The minimum index In the repeating elements is " << minIndex;
    }
    else
    {
        cout << "This is an Invalid Input";
    }

    return 0;
}


//Name:Saksham Chauhan
//RollNo:2010992073
//Set:-
//Q1


#include <iostream>
#include <unordered_set>
using namespace std;

// This Function  is to find the minimum index of the repeating element in an array
int findMinIndex(int arr[], int n)
{
    int minIndex = n;

    // This creates an empty set to store array elements the way in which we want
    //we have use hashing i.e unordered set
    unordered_set<int> set;

    // traverse the array from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        // if the element is seen before, update the minimum index
        if (set.find(arr[i]) != set.end())
        {
            minIndex = i;
        }
        // if the element is seen for the first time, insert it into the set
        else
        {
            set.insert(arr[i]);
        }
    }

    // This is an invalid input
    if (minIndex == n)
    {
        return -1;
    }

    // It will return you the  minimum index
    return minIndex;
}

int main()
{
    int arr[] = {5, 6, 3, 4, 3, 6, 4};
    // int arr[] = { 1, 2, 3, 4, 5, 6 };

    int n = sizeof(arr) / sizeof(arr[0]);

    int minIndex;

    try
    {
        minIndex = findMinIndex(arr, n);
    }
    catch (int error)
    {
        cout << "Error: " << error << endl;
    }

    if (minIndex != n)
    {
        cout << "The minimum index In the repeating elements is " << minIndex;
    }
    else
    {
        cout << "This is an Invalid Input";
    }

    return 0;
}


//Name:Saksham Chauhan
//RollNo:2010992073
//Set:-
//Q1


#include <iostream>
#include <unordered_set>
using namespace std;

// This Function  is to find the minimum index of the repeating element in an array
int findMinIndex(int arr[], int n)
{
    int minIndex = n;

    // This creates an empty set to store array elements the way in which we want
    //we have use hashing i.e unordered set
    unordered_set<int> set;

    // traverse the array from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        // if the element is seen before, update the minimum index
        if (set.find(arr[i]) != set.end())
        {
            minIndex = i;
        }
        // if the element is seen for the first time, insert it into the set
        else
        {
            set.insert(arr[i]);
        }
    }

    // This is an invalid input
    if (minIndex == n)
    {
        return -1;
    }

    // It will return you the  minimum index
    return minIndex;
}

int main()
{
    int arr[] = {5, 6, 3, 4, 3, 6, 4};
    // int arr[] = { 1, 2, 3, 4, 5, 6 };

    int n = sizeof(arr) / sizeof(arr[0]);

    int minIndex;

    try
    {
        minIndex = findMinIndex(arr, n);
    }
    catch (int error)
    {
        cout << "Error: " << error << endl;
    }

    if (minIndex != n)
    {
        cout << "The minimum index In the repeating elements is " << minIndex;
    }
    else
    {
        cout << "This is an Invalid Input";
    }

    return 0;
}


//Name:Saksham Chauhan
//RollNo:2010992073
//Set:-
//Q1


#include <iostream>
#include <unordered_set>
using namespace std;

// This Function  is to find the minimum index of the repeating element in an array
int findMinIndex(int arr[], int n)
{
    int minIndex = n;

    // This creates an empty set to store array elements the way in which we want
    //we have use hashing i.e unordered set
    unordered_set<int> set;

    // traverse the array from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        // if the element is seen before, update the minimum index
        if (set.find(arr[i]) != set.end())
        {
            minIndex = i;
        }
        // if the element is seen for the first time, insert it into the set
        else
        {
            set.insert(arr[i]);
        }
    }

    // This is an invalid input
    if (minIndex == n)
    {
        return -1;
    }

    // It will return you the  minimum index
    return minIndex;
}

int main()
{
    int arr[] = {5, 6, 3, 4, 3, 6, 4};
    // int arr[] = { 1, 2, 3, 4, 5, 6 };

    int n = sizeof(arr) / sizeof(arr[0]);

    int minIndex;

    try
    {
        minIndex = findMinIndex(arr, n);
    }
    catch (int error)
    {
        cout << "Error: " << error << endl;
    }

    if (minIndex != n)
    {
        cout << "The minimum index In the repeating elements is " << minIndex;
    }
    else
    {
        cout << "This is an Invalid Input";
    }

    return 0;
}


//Name:Saksham Chauhan
//RollNo:2010992073
//Set:-
//Q1


#include <iostream>
#include <unordered_set>
using namespace std;

// This Function  is to find the minimum index of the repeating element in an array
int findMinIndex(int arr[], int n)
{
    int minIndex = n;

    // This creates an empty set to store array elements the way in which we want
    //we have use hashing i.e unordered set
    unordered_set<int> set;

    // traverse the array from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        // if the element is seen before, update the minimum index
        if (set.find(arr[i]) != set.end())
        {
            minIndex = i;
        }
        // if the element is seen for the first time, insert it into the set
        else
        {
            set.insert(arr[i]);
        }
    }

    // This is an invalid input
    if (minIndex == n)
    {
        return -1;
    }

    // It will return you the  minimum index
    return minIndex;
}

int main()
{
    int arr[] = {5, 6, 3, 4, 3, 6, 4};
    // int arr[] = { 1, 2, 3, 4, 5, 6 };

    int n = sizeof(arr) / sizeof(arr[0]);

    int minIndex;

    try
    {
        minIndex = findMinIndex(arr, n);
    }
    catch (int error)
    {
        cout << "Error: " << error << endl;
    }

    if (minIndex != n)
    {
        cout << "The minimum index In the repeating elements is " << minIndex;
    }
    else
    {
        cout << "This is an Invalid Input";
    }

    return 0;
}


//Name:Saksham Chauhan
//RollNo:2010992073
//Set:-
//Q1


#include <iostream>
#include <unordered_set>
using namespace std;

// This Function  is to find the minimum index of the repeating element in an array
int findMinIndex(int arr[], int n)
{
    int minIndex = n;

    // This creates an empty set to store array elements the way in which we want
    //we have use hashing i.e unordered set
    unordered_set<int> set;

    // traverse the array from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        // if the element is seen before, update the minimum index
        if (set.find(arr[i]) != set.end())
        {
            minIndex = i;
        }
        // if the element is seen for the first time, insert it into the set
        else
        {
            set.insert(arr[i]);
        }
    }

    // This is an invalid input
    if (minIndex == n)
    {
        return -1;
    }

    // It will return you the  minimum index
    return minIndex;
}

int main()
{
    int arr[] = {5, 6, 3, 4, 3, 6, 4};
    // int arr[] = { 1, 2, 3, 4, 5, 6 };

    int n = sizeof(arr) / sizeof(arr[0]);

    int minIndex;

    try
    {
        minIndex = findMinIndex(arr, n);
    }
    catch (int error)
    {
        cout << "Error: " << error << endl;
    }

    if (minIndex != n)
    {
        cout << "The minimum index In the repeating elements is " << minIndex;
    }
    else
    {
        cout << "This is an Invalid Input";
    }

    return 0;
}


//Name:Saksham Chauhan
//RollNo:2010992073
//Set:-
//Q1


#include <iostream>
#include <unordered_set>
using namespace std;

// This Function  is to find the minimum index of the repeating element in an array
int findMinIndex(int arr[], int n)
{
    int minIndex = n;

    // This creates an empty set to store array elements the way in which we want
    //we have use hashing i.e unordered set
    unordered_set<int> set;

    // traverse the array from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        // if the element is seen before, update the minimum index
        if (set.find(arr[i]) != set.end())
        {
            minIndex = i;
        }
        // if the element is seen for the first time, insert it into the set
        else
        {
            set.insert(arr[i]);
        }
    }

    // This is an invalid input
    if (minIndex == n)
    {
        return -1;
    }

    // It will return you the  minimum index
    return minIndex;
}

int main()
{
    int arr[] = {5, 6, 3, 4, 3, 6, 4};
    // int arr[] = { 1, 2, 3, 4, 5, 6 };

    int n = sizeof(arr) / sizeof(arr[0]);

    int minIndex;

    try
    {
        minIndex = findMinIndex(arr, n);
    }
    catch (int error)
    {
        cout << "Error: " << error << endl;
    }

    if (minIndex != n)
    {
        cout << "The minimum index In the repeating elements is " << minIndex;
    }
    else
    {
        cout << "This is an Invalid Input";
    }

    return 0;
}


