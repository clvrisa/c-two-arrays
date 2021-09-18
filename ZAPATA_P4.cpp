// Project 4a
#include <iostream>
#include <iomanip>
using namespace std;

void showArray(/*in*/const int[], /*in*/ int);

int main()
{

  //1D arrays declared with initialization lists
  const int SIZE = 7;
  int array1[SIZE] = {4, 7, 2, 8, 1, 3, 0};
  int array2[SIZE] = {0, 0, 0, 0, 0, 0, 0};
  int index;

  showArray(array1, SIZE);

  for (index = - 1; index < 6; index++)
    {
        cout << array1[index] << ' ';
    }
  cout << endl;


  for (index = 0; index < 7; index++)
    {
        swap (array1[0], array1[5]);
        swap (array1[2], array1[4]);
        cout << array1[index] << ' ';
    }
  cout << endl;

  return 0;
}
//Function displays the elements of an integer array
void showArray(/*in*/ const int somearray[], /*in*/ int SIZE)
{
    for(int index = 0; index < SIZE; index++)
    {
        cout << somearray[index] << ' ';
    }

    cout << endl;

}

/*

4 7 2 8 1 3 0
0 4 7 2 8 1 3
3 7 1 8 2 3 0

Process returned 0 (0x0)   execution time : 0.021 s
Press any key to continue.

*/
