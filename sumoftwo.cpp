#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin); 
freopen("output.txt", "w", stdout); 
#endif

  int first_number, second_number, sum;
    
  cout << "Enter two integers: ";
  cin >> first_number >> second_number;

  sum = first_number + second_number;

 
  cout << first_number << " + " <<  second_number << " = " << sum;     

  return 0;
}