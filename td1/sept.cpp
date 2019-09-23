#include <cstdlib>
#include <iostream>

int max(int a, int b){
  if(a > b){
    return a;
  }else if(b > a){
    return b;
  }else if(a==b){
    return a;
  }
  return 0;
}
int max(int a, int b, int c){
  int aux = max(a, b);
  return max(aux, c);
}

int main(){
  using namespace std;
  int a, b, c, d, e;
  cout << "a = ";
  cin >> a;
  cout << "b = ";
  cin >> b;
  cout << "La maximum valeur entre " << a <<" et " << b <<" est: " << max(a, b) << endl << endl;

  cout << "c = ";
  cin >> c;
  cout << "d = ";
  cin >> d;
  cout << "e = ";
  cin >> e;
  cout << "La maximum valeur entre " << c <<", " << d <<" et " << e <<" est: " << max(c, d, e) << '\n';

  return 0;
}
