/*   KHADIJA- FAKSH-1220505802    */

#include <iostream>
#include <iomanip>
/* Ciktilari duzenlemek icin eklenmistir. setw(n) fonksiyonu */

#include <locale.h>
/*Not:Ciktida yer yer Turkce karakterler oldugu icin locale kutuphanesi eklenmistir*/

using namespace std;


double F(double x); //F(x) fonksiyonunun on tanimi 

int main()
{
    setlocale(LC_ALL, "Turkish");
   
  
    cout << "F(x)=x^3 -3x^2 -4x + 7"<<endl<<endl;

    cout << "Durma koşulu : (bn - an)/2^n" << endl << endl;

    cout << "Hata: 10^(-4)"<<endl << endl;

    cout <<left<< setw(10) << "Adım" <<left<< setw(10) << "a" <<left<< setw(10) << "b" << left<<setw(10) << "c" << setw(10) << "Hata" << endl;
    cout << "--------------------------------------------------" << endl;
   
  


    double a = 1, b = 5, c = 0, n = 0,Error = 0;
    //problem cikmamasi acisindan hesaplamada kullanilacak butun degiskenler ayni turde, double turunda yazilmistir.

    while (1 == 1) {


        c = (a + b) / 2;
        n++;
        Error = (b - a) / pow(2, n);//Hata degerini hesaplama
        cout << setw(10) << n << setw(10) << a << setw(10) << b << setw(10) << c << setw(20) <<Error << endl<<endl;

        if (F(a) * F(c) < 0) {
            b = c;
        }
        else {
            a = c;
        }


        if (Error < 1e-4) { // Error  yani Hata degeri verilen hata degerinden kucuk olunca kok: c yazip cik.

            cout <<endl<< "Kök: " << c << endl<<endl;
            break;
        }
    }
}

double F(double x) {
    return (pow(x, 3) - 3 * pow(x, 2) - 4 * x + 7);

    }





