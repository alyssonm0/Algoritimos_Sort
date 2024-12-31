#include <iostream>
#include <fstream>
#include <vector>
#include <chrono>
using namespace std;
using namespace chrono;

vector<int> read_file(const string& filename) {
    ifstream file(filename); 
    vector<int> numbers;     
    int num;

    if (!file.is_open()) {
        cerr << "Erro ao abrir o arquivo: " << filename << endl;
        exit(1); 
    }

    while (file >> num) { 
        numbers.push_back(num);
    }

    file.close(); 
    cout << "Numeros lidos: " << numbers.size() << endl;
    return numbers;
}

void insertion_sort(vector<int> &v) {
    for (int i = 1; i < v.size(); i++) {
        int x = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > x) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = x;
    }
}

void selection_sort(vector<int> &v) {
    for (int i = 0; i < v.size() - 1; i++) {
        int menor = i;
        for (int j = i + 1; j < v.size(); j++) {
            if (v[j] < v[menor]) {
                menor = j;
            }
        }
        if (menor != i) {
            swap(v[i], v[menor]);
        }
    }
}

int main(int argc, char** argv) {
    if (argc < 2) {
        cerr << "Uso: " << argv[0] << " <arquivo_de_entrada>" << endl;
        return 1;
    }

    string input_file = argv[1];
    vector<int> v = read_file(input_file);

    // Ordenação por: Insertion Sort
    vector<int> v_insertion = v;
    ofstream saida_insertion("saida_insertion.txt");
    if (!saida_insertion.is_open()) {
        cerr << "Erro ao abrir o arquivo de saída para Insertion Sort!" << endl;
        exit(1);
    }

    cout << "Ordenando com Insertion Sort..." << endl;
    auto start_insertion = high_resolution_clock::now();
    insertion_sort(v_insertion);
    auto stop_insertion = high_resolution_clock::now();
    for (int num : v_insertion) {
        saida_insertion << num << endl;
    }
    auto duration_insertion = duration_cast<microseconds>(stop_insertion - start_insertion);
    cout << "Tempo de execução (Insertion Sort): " << duration_insertion.count() << " microsegundos" << endl;
    saida_insertion.close();

    // Ordenando por: Selection Sort
    vector<int> v_selection = v;
    ofstream saida_selection("saida_selection.txt");
    if (!saida_selection.is_open()) {
        cerr << "Erro ao abrir o arquivo de saída para Selection Sort!" << endl;
        exit(1);
    }

    cout << "Ordenando com Selection Sort..." << endl;
    auto start_selection = high_resolution_clock::now();
    selection_sort(v_selection);
    auto stop_selection = high_resolution_clock::now();
    for (int num : v_selection) {
        saida_selection << num << endl;
    }
    auto duration_selection = duration_cast<microseconds>(stop_selection - start_selection);
    cout << "Tempo de execução (Selection Sort): " << duration_selection.count() << " microsegundos" << endl;
    saida_selection.close();

    if (duration_insertion < duration_selection) {
        cout << "Insertion Sort foi mais rápido por " << (duration_selection - duration_insertion).count() << " microsegundos." << endl;
    } else if (duration_selection < duration_insertion) {
        cout << "Selection Sort foi mais rápido por " << (duration_insertion - duration_selection).count() << " microsegundos." << endl;
    } else {
        cout << "Ambos os métodos tiveram o mesmo tempo de execução." << endl;
    }

    return 0;
}
