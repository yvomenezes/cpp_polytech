#include <cstdlib>
#include <iostream>
#include <cstring>
int main(){
using namespace std;
char chaine[7];
chaine[0] = 'S';
chaine[1] = 'a';
chaine[2] = 'l';
chaine[3] = 'u';
chaine[4] = 't';
chaine[5] = '!';
chaine[6] = '\0';
cout << chaine << endl;
cout << strlen(chaine) << endl;
}
