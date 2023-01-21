#include <iostream>
using namespace std;
int main()
{
    char menu,menuint;
    double valor;

    cout << "conversor de unidades\n";
    cout << "Seleccione una opcion:\n(m)Moneda\n(d)Distancia\n(p)Peso\n";
    cin >> menu;
    switch (menu)
    {

    case 'm':
        cout << "a que moneda quieres covertir ? \n(1)dolar\n(2)bolivar\n(3)Euro\n(4)Libra\n(5)Yen\n";
        cin >> menuint;
        cout << "Ingrese la cantidad de dinero a converir (Pesos mexicanos)\n";
        cin >> valor;
        switch (menuint)
        {
        case '1': 
            cout << valor * 0.053 <<" Dolares\n";
            break;
        case '2':
            cout << valor * 1.05 << " Bolibares\n";
            break;
        case '3': 
            cout << valor * 0.049 << " Euros\n";
            break;
        case '4':
            cout << valor * 0.043 << " Libras\n";
            break;
        case '5': 
            cout << valor * 6.79 << " Yenes\n";
            break;
        }
        break;
    case 'd':
        cout << "A que medida quieres converir \n(1)Pulgadas\n(2)Pies\n(3)Centimetros\n(4)Nanometros\n(5)Años luz\n";
        cin >> menuint;
        cout << "escribe la los kilometros a convertir:\n";
        cin >> valor;
        switch (menuint);
        {
        case '1':
            cout <<valor << " kilometros es igual a " << valor * 39370.0787 << " pulgadas.\n";
            break;
        case '2':
            cout << valor << " kilometros es igual a " << valor * 3280.8 << " pies.\n";
            break;
        case '3':
            cout << valor << " kilometros es igual a " << valor * 100000 << "cm\n";
            break;
        case '4':
            cout << valor << " kilometros es igual a " << valor * 1000000000000 << " nanometros.\n";
            break;
        case '5':
            cout << valor << " kilometros es igual a " << valor * 0.00000000000010570 << " Años luz\n";
            break;
        }
        break;
    case 'p':
        cout << "A que medida quieres converir \n(6)toneladas\n(7)onzas\n(8)libras\n(9)microgramos\n(0)Teragramos\n";
        cin >> menuint;
        cout << "escribe la los kilometros a convertir:\n";
        cin >> valor;
        switch (menuint);
        {
        case '6':
            cout  << valor << " kilogramos equivalen a " << valor * 0.001 << " toneladas";
            break;
        case '7':
            cout << valor << " kilogramos equivalen a " << valor * 35.273 << " onzas";
            break;
        case '8':
            cout << valor << " kilogramos equivalen a " << valor * 2.240 << " libras";
            break;
        case '9':
            cout << valor << " kilogramos equivalen a " << valor * 1000000000 << " microgramos";
            break;
        case '0':
            cout << valor << " kilogramos equivalen a " << valor * 0.0000000001 << " teragramos.";
            break;
        }
        break;
    default:cout << "error";
    }
    return 0;
}
