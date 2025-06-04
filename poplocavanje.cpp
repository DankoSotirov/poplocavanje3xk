#include <iostream>

using namespace std;

// broj nacina da se pravougaona tabla dimenzije 3xk:
// za parno k poplocava se ceo pravougaonik
// za neparno k poplocava se pravougaonik bez polja u donjem levom uglu
long long broj_poplocavanja(int k) {
  if (k == 0 || k == 1)
    return 1;
  if (k % 2 == 0)
    return 2 * broj_poplocavanja(k-1) + broj_poplocavanja(k-2);
  else
    return broj_poplocavanja(k-1) + broj_poplocavanja(k-2);
}


int main() {
  int k;
  cin >> k;
  if (k % 2 == 0)
    cout << broj_poplocavanja(k) << endl;
  else
    cout << 0 << endl;
  return 0;
}