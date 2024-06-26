#include <iostream>
#include <array>

int main() 
{
  
  using MyArray = std::array<double, 5>;
  MyArray stlArray = {1, 2, 3, 4, 5};

  for (const int val : stlArray) 
  {
    std::cout << val << " ";
  }
  std::cout << "\n";

  //accesing pointer of array
  MyArray::value_type* arrayPtr = stlArray.data();
  *arrayPtr = 6;
  MyArray::pointer thirdElem = stlArray.data() + 2;
  *thirdElem = 8;
  stlArray[4] = 9;
  MyArray::reference elemFour = stlArray.at(3);
  elemFour += 7;
  stlArray.at(2) += 3;
  MyArray::value_type iType = 3;
  for (const int val : stlArray) 
  {
    std::cout << val << " ";
  }
  std::cout << "\n";

  std::cout << "Size of stlArray: " << stlArray.size()
            << "\n";

  return 0;
}