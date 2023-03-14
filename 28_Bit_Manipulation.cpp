#include <iostream>
using namespace std;

// 1. getBit
int getBit(int n, int pos){
  return ((n & (1<<pos)) != 0);
}

// 2. setBit
int setBit(int n, int pos){
  return (n | (1 << pos));
}

// 3. clearBit
int clearBit(int n, int pos){
  int mask = ~(1<<pos);
  return (n & mask);
}

// 4. updateBit
int updateBit(int n, int pos, int value){
  int mask = ~(1 << pos);
  n = n & mask;
  return (n | (value << pos));
}


int main(int argc, char **argv){
  // cout << getBit(5, 1);
  // cout << setBit(5, 2);
  // cout << clearBit(5, 1);
  // cout << updateBit(5, 2, 3);

  return 0;
}
