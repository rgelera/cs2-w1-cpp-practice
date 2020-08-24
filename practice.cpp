#include <iostream>

using namespace std;

/*
 * Takes a string as input and outputs the string reversed
 */
string reverse(string input) {
  int len = input.length();
  int n = len - 1;

  for(int i = 0; i < (len/2); i++) {
    char temp = input[i];
    input[i] = input[n];
    input[n] = temp;
    n = n - 1;
  }
  return input;
}

int main(int argc, char** argv) {
  string test1 = "Hello World!";
  string test2 = "Foobar";


  cout << reverse(test1) << endl;
  cout << reverse(test2) << endl;
  return 0;
}

