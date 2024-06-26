#include <iostream>

int main() 
{
  const int sz = 5;
  int* cArray = new int[sz];
  std::cout << "Size of cArray: " << sz << "\n";

  for (int i = 0; i < 5; ++i)
  { 
    cArray[i] = i + 1; 
  }

  for (int i = 0; i < 5; ++i) 
  {
    std::cout << cArray[i] << " ";
  }
  std::cout << "\n";

  const int newSize = 7;
  int* newCArray = new int[newSize];

  for (int i = 0; i < 5; ++i) 
  { 
    newCArray[i] = cArray[i]; 
  }

  delete[] cArray;

  cArray = newCArray;

  for (int i = 0; i < newSize; ++i) 
  {
    std::cout << cArray[i] << " ";
  }
  std::cout << "\n";

  int arraySize = newSize;
  std::cout << "Size of cArray: " << arraySize << "\n";

  delete[] newCArray;

  return 0;
}