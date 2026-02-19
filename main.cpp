#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //NELEMENTS  N_ELEMENTS helyett
    int *b = new int[N_ELEMENTS];
    //' helyett " kell mivel string
    std::cout << "1-100 ertekek duplazasa" << std::endl;
    // Ciklusfeltétel hiányzott, i < N_ELEMENTS kell
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //i = 0 indul ezért kell az i+1, hogy 1-100 legyen
        b[i] = (i+1) * 2;
    };
    // Hiányzott i< N_ELEMENTS feltétel
    for (int i = 0; i< N_ELEMENTS; i++)
    {
        // Hiányzik a kiírandó érték
        std::cout << "Ertek:" << b[i] << std::endl;
    };
    std::cout << "Atlag szamitasa: " << std::endl;
    // Átlagot 0-ként kell inicializálni és legyen double típusú, hogy ne legyen egész osztás
    double atlag = 0.0;
    // Vessző helyett pontosvesszőt kell tenni
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i];
    };
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;

    // A kód több pontján hiányoztak a sorzáró pontosvesszők
}
