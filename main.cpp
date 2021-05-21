#include <iostream>

using namespace std;

int main()
{
    int senha, cont = 0;
    while (cont == 0){
        cin >> senha;
        if (senha == 2002){
            cout << "Acesso Permitido" <<endl;
            cont = 1;
        }else{
            cout << "Senha Invalida" <<endl;
        }
    }
    return 0;
}
