#include <iostream>
using namespace std;



double calcularEstatisticas(int capacidadeDasSalas[], int quantidade, int* minimo, int& maximo){
    double media=capacidadeDasSalas[0];
    *minimo=capacidadeDasSalas[0];
     maximo=capacidadeDasSalas[0];

for(int i=1;i<quantidade;i++) {
 if(*minimo>capacidadeDasSalas[i]){

    *minimo=capacidadeDasSalas[i];
 }
if(maximo<capacidadeDasSalas[i]){
        maximo=capacidadeDasSalas[i];

}

media +=capacidadeDasSalas[i];



}


   return media/quantidade;





}
int main() {

    int capacidades[1000];
    int quantidade;

    cout << "Digite a quantidade de salas: ";
    cin >> quantidade;


    for (int i = 0; i < quantidade; i++) {
        cin >> capacidades[i];
    }

    double media_calculada;
    int valor_minimo;
    int valor_maximo;


media_calculada = calcularEstatisticas(
capacidades,quantidade,&valor_minimo,valor_maximo);

    cout << "\nResultados encontrados:" << endl;
    cout << "Media das capacidades: " << media_calculada << endl;
    cout << "Capacidade minima: " << valor_minimo << endl;
    cout << "Capacidade maxima: " << valor_maximo << endl;

    return 0;
}
























{
    cout << "Hello world!" << endl;
    return 0;
}
