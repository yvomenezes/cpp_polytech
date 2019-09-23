#include <cstdlib>
#include <iostream>

int main() {
using namespace std;
const int ANNEE_COURANTE = 2019;
int annee_naissance; 
int age; 

cout << "Saisissez votre année de naissance, s'il vous plaît: ";
cin >> annee_naissance; 
age = ANNEE_COURANTE - annee_naissance; 
cout << "Vous avez " << age << " ans." << endl;

return 0;
}
