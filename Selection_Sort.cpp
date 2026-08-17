#include <iostream>
using namespace std;

int main()
{
    int A[] = {8, 7, 5, 6, 3, 2, 1};
    int n = 7;
    int min, temp;
    int j;
    
    min = A[0];
    cout << "\n Array Before Sorting: ";
    for (int i = 0; i < n; i++)
    {      
        cout << A[i] << " \t";
    }
    
    for (int i = 1; i < n; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }

    cout << "\n Minimum Integer= " << min << endl;  
    
    
    for (int i = 0; i < n - 1; i++)
    {
      int min_01 = i;

      for (int j = i + 1; j < n; j++)
      {
          if (A[j] < A[min_01])
          {
              min_01 = j;
          }
      }

    // Swap
    temp = A[i];
    A[i] = A[min_01];
    A[min_01] = temp;
    }

// Print only sorted array
    cout << "\n Array After Sorting: ";
    for (int j = 0; j < n; j++)
    {
      cout << A[j] << "\t";
    }
  
    return 0;
}

