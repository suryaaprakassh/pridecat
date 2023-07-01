#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <tuple>

using namespace std;

tuple<int, int, int> rgb(int k) {
  float f = 0.1;
  tuple<int, int, int> tup(sin(f * (float)k + 0) * 127 + 128,
                           sin(f * (float)k + 2 * 3.14 / 3) * 127 + 128,
                           sin(f * (float)k + 4 * 3.14 / 3) * 127 + 128);

  return tup;
}

void print(string s) {

  for (int i = 0; i < s.length(); i++) {
    int r, g, b;

    tie(r, g, b) = rgb(i);
    printf("\033[38;2;%d;%d;%dm%c\033[0m", r, g, b, s[i]);
  }
  cout << endl;
}

int main() {
  string lineInput;

  while (getline(cin, lineInput)) {
    print(lineInput);
  }
}
