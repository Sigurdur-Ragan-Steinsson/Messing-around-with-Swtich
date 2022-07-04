#include <iostream>

using namespace std;

int main() {
  int grade;
  cout << "Please enter your grade\n";
  cin >> grade;
  int goldstar = 0;

  switch(grade){
    case 90:
    cout << "You have an A" << endl;
    goldstar++;
    break;

    case 80:
    cout << "You have a B" << endl;
    goldstar++;
    break;

    case 70:
    cout << "You have a C" << endl;
    goldstar++;
    break;
    
    default:
    cout << "You failed" << endl;

  }

  cout << "You have " << goldstar << " goldstars";

}