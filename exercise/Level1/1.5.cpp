// TestFibonacci.cpp
//
// Showing the use of recursive vs iterative functions by
// implementing Fibonacci sequences.
//
// DJD
//

#include <algorithm>
#include <iostream>
using namespace std;

// ----------------------------------------------------------
// Recursive version — elegant, but exponentially slow
// ----------------------------------------------------------
long Fibonacci(long n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

// ----------------------------------------------------------
// Iterative version — fast, O(n) instead of exponential
// ----------------------------------------------------------
long Fibonacci_fast(long n)
{
    long prev = 0;
    long curr = 1;

    for (int i = 0; i < n; i++)
    {
        long next = prev + curr;
        prev = curr;
        curr = next;
    }

    return prev;
}

int main()
{
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377,
    // 610, 987, 1597, 2584, 4181, 6765 . . .

    int N_recursive = 40;   // recursive: keep small, grows exponentially
    int N_fast      = 3000; // iterative: fine even at large N

    cout << "Recursiva:\n";
    for (int n = 0; n < N_recursive; ++n)
    {
        cout << Fibonacci(n) << ",";
    }
    cout << "\n\n";

    cout << "Iterativa (N=" << N_fast << "):\n";
    for (int n = 0; n < N_fast; ++n)
    {
        cout << Fibonacci_fast(n) << ",";
    }
    cout << endl;

    return 0;
}