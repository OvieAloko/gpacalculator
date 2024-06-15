#include <iostream>

int main(){
  double size = 0;
  double sum = 0;
  std::cout<<"How many grades, in numbers from 1-9, do you want to add: ";
  std::cin>>size;
  std::cout<<size;

  for (int i = 0; i<size; i++){
    double num;
    std::cout<<"Enter grade "<<i+1<<": ";
    std::cin>>num ;
    sum += num;
  }
  double gpa = ((double)sum)/((double)size);

  std::cout<<"Your GPA is "<<gpa;

  system("pause");
  return 0;
}