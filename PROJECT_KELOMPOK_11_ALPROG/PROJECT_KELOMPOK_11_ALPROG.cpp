#include <iostream>
#include <string>
using namespace std;

// Maksimal jumlah anggota
const int MAX_ANGGOTA = 100;

// Struct untuk menyimpan data anggota
struct Anggota {
    string nama;
    float kehadiran;
    float proyek;
    float skor;
};

// Fungsi untuk menghitung skor
float hitungSkor(float kehadiran, float proyek) {
    // Formula: 60% kehadiran + 40% proyek
    return (kehadiran * 0.6) + (proyek * 0.4);
}

// Fungsi untuk mengurutkan data dengan Insertion Sort (berdasarkan nama)
void insertionSort(Anggota data[], int n) {
    for (int i = 1; i < n; i++) {
        Anggota key = data[i];
        int j = i - 1;

        // Bandingkan berdasarkan nama
        while (j >= 0 && data[j].nama > key.nama) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }
}

// Fungsi untuk menampilkan data anggota
void tampilkanData(Anggota data[], int n) {
    cout << "\n=== Daftar Anggota UKM ===\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". Nama: " << data[i].nama
            << " | Kehadiran: " << data[i].kehadiran
            << " | Proyek: " << data[i].proyek
            << " | Skor: " << data[i].skor << endl;
    }
    cout << endl;
}

int main() {
    Anggota anggota[MAX_ANGGOTA];
    int jumlah = 0;
    int pilihan;

    do {
        cout << "=== Menu Utama ===\n";
        cout << "1. Tambah Data Anggota\n";
        cout << "2. Tampilkan Data\n";
        cout << "3. Urutkan Data (Insertion Sort)\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore(); // membersihkan buffer

        switch (pilihan) {
        case 1:
            if (jumlah < MAX_ANGGOTA) {
                cout << "\nMasukkan Nama Anggota: ";
                getline(cin, anggota[jumlah].nama);
                cout << "Masukkan Nilai Kehadiran (0-100): ";
                cin >> anggota[jumlah].kehadiran;
                cout << "Masukkan Nilai Proyek (0-100): ";
                cin >> anggota[jumlah].proyek;
                anggota[jumlah].skor = hitungSkor(anggota[jumlah].kehadiran, anggota[jumlah].proyek);
                jumlah++;
                cout << "Data berhasil ditambahkan!\n\n";
            }
            else {
                cout << "Kapasitas data penuh!\n";
            }
            break;

        case 2:
            tampilkanData(anggota, jumlah);
            break;

        case 3:
            insertionSort(anggota, jumlah);
            cout << "Data berhasil diurutkan berdasarkan nama (A-Z)\n";
            break;

        case 4:
            cout << "Program selesai. Terima kasih!\n";
            break;

        default:
            cout << "Pilihan tidak valid!\n";
        }

    } while (pilihan != 4);

    return 0;
}
