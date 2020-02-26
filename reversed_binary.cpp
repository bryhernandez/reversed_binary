#include <iostream>
#include<vector>
#include<math.h>
using namespace std;

int main() {
  vector<int> converted;

  int convert;
  cin >> convert;

  for(int i = convert; i > 0; i = i/2){
    converted.push_back(convert%2);
    convert = convert/2;
  }

  int num_decimal = 0;
  int c = converted.size() - 1;
  for(int i = 0; i < converted.size(); i++){
    int pow_val = pow(2,c);
    num_decimal += converted[i] * pow_val;
    c --;
  }
  cout << num_decimal;

}
