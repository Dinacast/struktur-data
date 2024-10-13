#include <iostream>
#include <conio.h>

using namespace std;

void hanoi(int n, char dari, char bantu, char tujuan) {
    if (n == 1) {
        cout << "Pindahkan piring dari " << dari << " ke " << tujuan << endl;
    } else {
        hanoi(n-1, dari, tujuan, bantu);
        hanoi(1, dari, bantu, tujuan);
        hanoi(n-1, bantu, dari, tujuan);
    }
}

int main() {
    int jum_piring;
    cout<<"teknik Hanoi pada c++" <<endl<<endl;
    cout<<"Masukan Jumlah piring : ";
    cin >> jum_piring;
    
    hanoi(jum_piring, 'A', 'B', 'C');
    getche();
}
