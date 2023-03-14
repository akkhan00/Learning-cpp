#include <bits/stdc++.h>
using namespace std;

// 1. sum of n natural number
int sumNnumber(int n) { return n * (n + 1) / 2; }

// 2. Check if x,y,z are Pythagorean Triplet
bool check(int x, int y, int z) {
  int a = max(x, max(y, z));
  int b, c;
  if (a == x) {
    b = y;
    c = z;
  } else if (a == y) {
    b = x;
    c = z;
  } else {
    b = x;
    c = y;
  }

  if (a * a == b * b + c * c)
    return true;
  else
    return false;
}

// 3. Binary to Decimal
int binaryToDecimal(int n) {
  int ans = 0;
  int x = 1;
  while (n > 0) {
    int lastDigit = n % 10;
    ans += x * lastDigit;
    x *= 2;
    n /= 10;
  }
  return ans;
}

// 4. Octal to Decimal
int octalToDecimal(int n) {
  int ans = 0;
  int x = 1;
  while (n > 0) {
    int lastdigit = n % 10;
    ans += x * lastdigit;
    x *= 8;
    n /= 10;
  }
  return ans;
}

// 5. Hexadecimal to Decimal
int hexadecimalToDecimal(string n) {
  int ans = 0;
  int x = 1;
  int s = n.size();
  for (int i = s - 1; i >= 0; i--) {
    if (n[i] >= '0' && n[i] <= '9')
      ans += x * (n[i] - '0');
    else if (n[i] >= 'A' && n[i] <= 'F')
      ans += x * (n[i] - 'A' + 10);
    x *= 16;
  }
  return ans;
}

// 6. Decimal to Binary
int decimalToBinary(int n) {
  int ans = 0;
  int x = 1;
  while (x <= n)
    x *= 2;
  x /= 2;

  while (x > 0) {
    int lastdigit = n / x;
    n -= lastdigit * x;
    x /= 2;
    ans = ans * 10 + lastdigit;
  }
  return ans;
}

// 7. Decimal To Octal
int decimalToOctal(int n) {
  int ans = 0, x = 1;
  while (x <= n)
    x *= 8;
  x /= 8;
  while (x > 0) {
    int lastDigit = n / x;
    n -= lastDigit * x;
    x /= 8;
    ans = ans * 10 + lastDigit;
  }
  return ans;
}

// 8. Decimal to Hexadecimal
string decimalToHexadecimal(int n) {
  int x = 1;
  string ans = "";
  while (x <= n) {
    x *= 16;
  }
  x /= 16;
  while (x > 0) {
    int lastdigit = n / x;
    n -= lastdigit * x;
    x /= 16;
    if (lastdigit <= 9)
      ans = ans + to_string(lastdigit);
    else {
      char c = 'A' + lastdigit - 10;
      ans.push_back(c);
    }
  }
  return ans;
}

int reverse(int n) {
  int ans = 0;
  while (n > 0) {
    int lastDigit = n % 10;
    ans = ans * 10 + lastDigit;
    n /= 10;
  }
  return ans;
}
// 9. Add Binary
int addBinary(int a, int b) {
  int ans = 0;
  int prevCarry = 0;
  while (a > 0 && b > 0) {
    if (a % 2 == 0 && b % 2 == 0) {
      ans = ans * 10 + prevCarry;
      prevCarry = 0;
    } else if ((a % 2 == 0 && b % 2 == 1) || (a % 2 == 1 && b % 2 == 0)) {
      if (prevCarry == 1) {
        ans = ans * 10 + 0;
        prevCarry = 1;
      } else {
        ans = ans * 10 + 1;
        prevCarry = 0;
      }
    } else {
      ans = ans * 10 + prevCarry;
      prevCarry = 1;
    }
    a /= 10;
    b /= 10;
  }
  while (a > 0) {
    if (prevCarry == 1) {
      if (a % 2 == 1) {
        ans = ans * 10 + 0;
        prevCarry = 1;
      } else {
        ans = ans * 10 + 1;
        prevCarry = 0;
      }
    } else {
      ans = ans * 10 + (a % 2);
    }
    a /= 10;
  }
  while (b > 0) {
    if (prevCarry == 1) {
      if (b % 2 == 1) {
        ans = ans * 10 + 0;
        prevCarry = 1;
      } else {
        ans = ans * 10 + 1;
        prevCarry = 0;
      }
    } else {
      ans = ans * 10 + (b % 2);
    }
    b /= 10;
  }
  if (prevCarry == 1) {
    ans = ans * 10 + 1;
  }
  ans = reverse(ans);
  return ans;
}

int32_t main(void) {

  // 1.
  // n*(n+1)/2;
  // cout << sumNnumber(n)<<endl;

  // 2.
  /*   int x,y,z;
    cin >>x >> y>> z;
    if(check(x, y, z))
      cout << "Pythagorean Triplet"<<endl;
    else
      cout << "Not a Pythagorean Triplet\n"; */

  // 3.
  /*   int n; cin>>n;
    cout << binaryToDecimal(n) << endl; */

  // 4.
  /*   int n;cin >> n;
    cout << octalToDecimal(n) << endl; */

  // 5.
  /*   string n; cin>> n;
    cout << hexadecimalToDecimal(n)<<endl; */

  // 6.
  /*   int n; cin >>n;
    cout << decimalToBinary(n) <<endl; */

  // 7.
  /* int n; cin>>n;
  cout << decimalToOctal(n) << endl; */

  // 8.
  /*   int n; cin >> n;
    cout << decimalToHexadecimal(n) << endl;
   */

  // 9.
  int a, b;
  cin >> a >> b;
  cout << addBinary(a, b) << endl;

  return 0;
}
