



// 1. pada alghoritma InsertionSort . pertama elemen dibagi menjadi dua bagian sorted list dan unsorted. kemudian posisikan unsorted list ke sorted list dengan tepat.
//  penjelasan no 1 :kita menaruh variabel i pada index 1 kemudian kita menaruh nilai dari index i pada variabel temporary. kemudian variabel j pada index 0. jika nilai pada index variabel j lebih besar dari temporary  maka akan bertukar. ini aka terus me looping hingga nilai n -1.
// 2. pada alghoritma selectionSort . pertama program mencari value/nilai terkecil pada array. kemudian nilai terkecil akan di tukar ke index 0 pada array. kemudain program mencari value/nilai terkecil kedua pada array dan menukar atau menaruh value tersebut ke index 1 pada array. kemudian program mencari lagi nilai / value terkecil lagi dan menaruh value tersebut pada index 3 pada array. hal ini terus berlangusng hingga nilai index n-1.
// 3. pada alghoritma sortir untuk mengetahui jumlah langkah yang dilakukan adalah dengan cara kita menuliskan program yang berisi = n-1. contoh : cout << "jumlah pass = " << n-1 <<endl;. bisa dilihat disitu kita memanggil kode n-1 untuk mengetahui berapa jumlah langkah yang dilakukan
// 

//4.Konversi Algorithma berikut kedalam C++:
//      1.Repeat steps 2 and 3 varying j from 0 to n – 2
//      2.Find the minimum value in arr[j] to arr[n – 1]:
//          a.Set min_index = j
//          b.Repeat step c varying i from j + 1 to n – 1
//          c.If arr[i] < arr[min_index] :
  //             i.min_index = i
   // 3.Swap arr[j] with arr[min_index]
   // Ketentuan :
   // a.Nama variable array diganti menjadi nickname
   // b.Panjangnya variable array adalah sebanyak 2 nim belakang
   // c.Program bisa input data dan menampilkan data setelah proses sortir.



#include <iostream>
using namespace std;
int arr[7];

int n;
int i;
int min_index;
int j;


void input() { //procedur untuk input
    while (true) {
        cout << "masukan banyaknya elemen pada array :"; //output ke layar
        cin >> n;//input dari pengguna
        if (n <= 12)//jika n kurang dari atau sama dengan 20
            break;//keluar dari loop
        else {
            cout << "\nArray hanya dapat mempunyai maksimal 20 elemen\n";
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << " Masukan elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) {//looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ":";
        cin >> arr[i];
    }
}

void SelectionSort() {
    for (i = 0; i <= n - 2; i++) { 
        min_index = j;
        j = i + 1; 
        while (j+1 <= n-1)
        { 
            arr[i]  < min_index;
            min_index = i;



        }
      
        cout << "\npass ke- " << i << ":";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
    }
}
void display() {
    cout << endl;
    cout << "================================" << endl;
    cout << "elemen array yang telah tersusun" << endl;
    cout << "================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j];
        if (j < n - 1) {
            cout << "-->";
        }
    }
    cout << endl;
    cout << endl;
    cout << "jumlah pass = " << n - 1 << endl;
    cout << endl;
    cout << endl;
}
int main()
{
    input();
    SelectionSort();
    display();
    return 0;
}

