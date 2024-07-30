#include <iostream>
using namespace std;

int main() {

  int numbers[5] = {78, 94, 95, 93, 96};
  int sum = 0;

  for (int i = 0; i < 5; i++) {
    sum += numbers[i];
    // cout << "Index " << i << ": "<< numbers[i] << endl;
    cout << "Sum of array elements: " << sum << endl;
    
  }
  //Index #0: 1

  int average = sum/5;
  cout << "Average of your test scores: " << average << endl;

  if(average >= 90){
    cout << "You got an A!" << endl;
  }

return 0;

}