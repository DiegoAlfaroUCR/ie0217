#include <iostream>
using namespace std;

enum seasons {spring = 34, summer = 4, autumn = 9, winter =32};
enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
enum suit {club = 0, diamonds = 10, hearts = 20, spades = 3} card; // Aquí se define card como variable de esta enumeración.
int main(){
    // Se crean variables de las distintas enumeraciones.
    seasons s; week today;

    // Se asignan la enumeración especifica de las variables.
    s = summer; today = Wednesday; card = club; 

    // Se imprimen los valores de las variables para verificar que funciona.
    cout << "Summer = " << s << endl;
    cout << "Day " << today + 1<< endl; // Esta imprime el índice de wednesday + 1.
    cout << "Size of enum variable = " << sizeof(card) << " bytes." << endl;
    return 0;
}