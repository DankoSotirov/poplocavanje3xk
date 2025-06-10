#include <bits/stdc++.h>

//resenje O(k)
using namespace std;

long long parno(int K) {
  vector<long long> a(K+1);
  a[0] = a[1] = 1;                //bc za potpun pravougaonik vrednost k=0, i pravougaonik bez jednog coska k=1 je 1
  for (int k = 2; k <= K; k++)
    if (k % 2 == 0)
      a[k] = 2 * a[k-1] + a[k-2]; //potpun pravougaonik 
    else
      a[k] = a[k-1] + a[k-2];     //pravougaonik bez jednog coska
  return a[K];
}

int main() {
  int k;
  cin >> k;
  if (k % 2 == 0)                 //provera da li postoji resenje
    cout << parno(k) << endl;
  else
    cout << 0 << endl;            //ako ne postoji ispisi 0
  return 0;
}
