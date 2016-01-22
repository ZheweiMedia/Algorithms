#include <iostream>
#include <fstream>
#include "array.cxx"

int main(){
  Vector<int> initialArray;
  int temp;
  int key;

  std::cout << "Read number file: ";
  std::fstream numberfile;
  numberfile.open("number",std::ios::in);
  while(true)
  {
    numberfile >> temp;
    if(numberfile.eof()) break;
    initialArray.insert(temp);
  }
  std::cout << "We have " << initialArray.size() << " numbers."<< std::endl;

  //insert sort
  for(int j = 1; j < initialArray.size(); j++)
  {
    key = initialArray[j];
    //std::cout << key << " " << std::endl;
    for(int i = j; i > 0; i--)
    {
      if (initialArray[i] < initialArray[i-1])
      {
        temp = initialArray[i-1];
        initialArray[i-1] = initialArray[i];
        initialArray[i] = temp;
      }
    }
  }

  for (int i = 0; i < initialArray.size(); i++)
    std::cout << initialArray[i] << " ";
  std::cout << std::endl;





  return 0;

}
