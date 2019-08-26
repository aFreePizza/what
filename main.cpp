#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string name;
    ifstream file;
    vector <double> v;
    double temp;

    cout << "Inserire il nome del file: ";
    cin >> name;

    file.open(name.c_str());
    if (!file) {
        cout << "Errore nell'apertura del file";
        return 0;
    }

    while (file >> temp) {
        v.push_back(temp);
    }

    for (int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Valore massimo: " << *max_element(v.begin(),v.end()) << endl;
    cout << "Valore minimo: " << *min_element(v.begin(), v.end()) << endl;

    double media=0;
    for (int i=0; i<v.size(); i++)
        media += v.at(i);
    media /= v.size();
    cout << "Valore medio: " << media << endl;

    sort (v.begin() , v.end());
    for (int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    if (v.size()%2==0)
        cout << "Mediana: " << (v[v.size()/2] + v[v.size()/2 - 1])/2;
    else
        cout << "Mediana: " << v[(v.size()-1)/2];


    return 0;
}
