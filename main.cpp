#include <iostream>

using namespace std;

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[N_ELEMENTS];

    cout << "1-100 ertekek duplazasa";
    for (int i = 0;i++;)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        cout << "Ertek:";
    }
    cout << "Atlag szamitasa: " <<endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++;)
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    cout << "Atlag: " << atlag <<endl;
    return 0;
}