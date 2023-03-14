#include <iostream>
using namespace std;

void primeSieve(int n){
  int prime[1000] = {0};
  for(int i=2; i<=n; i++){
    if(prime[i] == 0){
      for(int j=i*i; j<=n; j+=i)
        prime[j] = 1;
    }
  }
  for(int i=2; i<=n; i++){
    if(prime[i] == 0)
      cout << i << " ";
  }cout << endl;
}


// 2. Prime Factorisation using Sieve
void primefactor(int n){
  int spf[1000] = {0};
  for(int i=2; i<=n; i++){
    spf[i] = i;
  }
  for(int i=2; i<=n; i++){
    if(spf[i] == i){
      for(int j=i*i; j<=n; j+=i){
        if(spf[j] == j)
          spf[j] = i;
      }
    }
  }
  while (n!=1){
    cout << spf[n] << " ";
    n = n/spf[n];
  }
  cout << endl;
}

int main(){
  int n; cin >> n;
  // primeSieve(n);
  primefactor(n);
  return 0;
}
