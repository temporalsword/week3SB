#include <iostream>
using namespace std;

int main() {
  //variable declaration
  int numbers[7] = {1, 2, 3, 4, 5, 6, 3};
  bool duplicateFound = false;

  //Nested for loop
  for (int i = 0; i < 7; i++){
    for (int j = i+1; j < 7; j++){
      if (numbers[i] == numbers[j]){
        duplicateFound = true;
        cout << "A duplicate is found" << numbers[i] << endl;
        break;
        
  }
    if (duplicateFound){
      break;
    }
    }
 if (!duplicateFound){
  cout << "No duplicate found" << endl;
}
}
  return 0;
}