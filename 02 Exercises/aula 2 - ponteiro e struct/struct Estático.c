#include <iostream>
using namespace std;

struct lista {
    int num;
    string nom;
 };

int main()
{   lista a;
    a.num = 5;
    a.nom = "juju";
    a.num = 6;

    cout << "número: " << a.num << endl;
    cout << "nome: " << a.nom << endl;

    return 0;
}