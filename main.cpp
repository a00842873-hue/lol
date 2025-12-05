#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "how many numbers? " << endl;
  cin >> num;

  for(int c=1; c<num; c++) {
    cout << c << endl;
  }

  return 0;
}
