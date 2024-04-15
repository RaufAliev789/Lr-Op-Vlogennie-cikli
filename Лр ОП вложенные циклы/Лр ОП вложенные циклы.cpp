#include <iostream>
#include <fstream>

void RAZMESHENIYA(int arr[], int N, int K) {
    std::string nameVIVOD = "VIVOD.txt";
    std::ofstream sout;
    sout.open(nameVIVOD);

    if (!sout.is_open())
        std::cout << "Ошибка открытия файла" << std::endl;
    else {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i != j) {
                    for (int k = 0; k < N; k++) {
                        if (k != i && k != j) {
                            sout << "[" << arr[i] << ", " << arr[j] << ", " << arr[k] << "]" << std::endl;
                        }
                    }
                }
            }
        }
    }
    sout.close();
}

int main() {
    setlocale(LC_ALL, "ru");
    int N;
    std::cout << "Введите количество элементов в исходном массиве ( N ): " << std::endl;
    std::cin >> N;
    int* A = new int[N];
    std::cout << "Введите массив ( A ): " << std::endl;
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    int K;
    std::cout << "Введите количество элементов в выходных массивах ( K ): " << std::endl;
    std::cin >> K;

    RAZMESHENIYA(A, N, K);

    delete[] A;

    return 0;
}
