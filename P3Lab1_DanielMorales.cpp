#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    bool varCorriendo = true;
    while (varCorriendo)
    {
        const double euler = exp(1.0);
        std::cout << "Menu" << std::endl;
        std::cout << "1. Ejercicio 1" << std::endl;
        std::cout << "2. Ejercicio 2" << std::endl;
        std::cout << "3. Salir" << std::endl;
        int ejercicio;
        std::cout << "Ingrese la opcion deseada: " << std::endl;
        cin >> ejercicio;

        switch (ejercicio)
        {
        case 1:
        {
            std::cout << "Ingrese el valor de x:" << std::endl;
            double valorX;
            cin >> valorX;

            double resp;
            resp = 1 / (1 + pow(euler, -valorX));

            std::cout << "La respuesta es: " << resp << std::endl;
            break;
        }
        case 2:
        {
            double limite = 0, acumulador = 0, calculo = 0;
            std::cout << "Ingrese el valor de n:" << std::endl;

            cin >> limite;
            for (int i = 0; i <= limite; i++)
            {
                calculo = ((2 * i) - 1) * ((2 * i) + 1);
                acumulador = acumulador + calculo;
            }

            std::cout << "La respuesta es: " << acumulador << std::endl;

            break;
        }
        default:
            return (0);
            break;
        }
    }
}