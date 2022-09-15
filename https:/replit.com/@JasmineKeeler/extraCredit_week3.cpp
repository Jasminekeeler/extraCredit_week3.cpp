#include <iostream> 

using namespace std;

int main () {
  
char op;

  double num1, num2;

  cout << "Input an integer" << endl;
   cin >> num1;
  cout << "Input another integer" << endl;
    cin >> num2;

  cout << "Enter the operator" << endl;
  cin >> op;

  switch (op){
  case '1':
    cout << num1 << '1' << num2 << '=' << (num1+num2);
    break;

 case '2':
    cout << num1 << '2' << num2 << '=' << (num1-num2);
    break;   

  case '3':
    cout << num1 << '3' << num2 << '=' << (num1*num2);
    break;

  case '4':
    cout << num1 << '4' << num2 << '=' << (num1/num2);
    break;

  default:
    cout << op << "wrong input";
    }
  return 0;
  }
