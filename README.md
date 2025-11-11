# Sistem Keanggotaan UKM Kampus: Pengelolaan Data, Sorting, dan Searching Berdasarkan Keaktifan

## DESKRIPSI
Program Sistem Keanggotaan UKM Kampus dibuat menggunakan bahasa C++ untuk membantu pengurus UKM dalam mengelola data anggota secara efisien, mencakup proses input, pengurutan, pencarian, dan analisis keaktifan. Sistem ini memanfaatkan array sebagai struktur data utama serta menerapkan fungsi modular, algoritma Selection Sort untuk pengurutan berdasarkan keaktifan, dan Sequential Search untuk pencarian anggota berdasarkan NIM, sehingga mampu menyajikan informasi anggota paling aktif dengan cepat dan terstruktur.

---

## TUJUAN
* Meningkatkan efisiensi pengelolaan data anggota UKM agar lebih terstruktur dan mudah dianalisis.
* Mempermudah pengurus UKM dalam memantau tingkat keaktifan anggota berdasarkan partisipasi kegiatan.
* Menyediakan sistem yang transparan untuk menentukan anggota paling aktif secara objektif.

---

## FITUR UTAMA
1.  **Input Data Anggota**: Menerima dan menyimpan data dasar anggota ke dalam array 2D secara terstruktur.
2.  **Hitung Skor Keaktifan**: Menghitung total skor keaktifan berdasarkan bobot kegiatan dan kehadiran.
3.  **Urutkan Anggota**: Mengurutkan daftar anggota berdasarkan skor keaktifan menggunakan algoritma Selection Sort.
4.  **Cari Anggota Berdasarkan ID**: Mencari data anggota menggunakan algoritma Sequential Search.
5.  **Tampilkan Klasifikasi Keaktifan**: Menampilkan hasil klasifikasi otomatis seperti label "Sangat Aktif" menggunakan percabangan if-else.
6.  **Menu Interaktif Console**: Menyediakan antarmuka berbasis teks untuk navigasi dan akses setiap fitur dengan mudah.

---

## Algoritma Utama yang Dipakai
* **Percabangan**: if–else untuk validasi dan klasifikasi keaktifan, switch untuk navigasi menu utama.
* **Perulangan**: do–while untuk menjalankan menu berulang, for untuk menampilkan dan menghitung data.
* **Array 2D**: Menyimpan data anggota berisi ID, Nama, Kehadiran, Proyek, dan Skor Keaktifan.
* **Sorting (Selection Sort)**: Mengurutkan anggota berdasarkan skor keaktifan dari tertinggi ke terendah.
* **Searching (Sequential Search)**: Mencari anggota berdasarkan NIM/ID.

---

## HASIL UJI SINGKAT

| Skenario Uji | Input | Proses | Output |
| :--- | :--- | :--- | :--- |
| **Tambah 3 anggota** | Data NIM, Nama, Prodi, Kegiatan | Disimpan ke array | Data berhasil ditambahkan |
| **Urutkan data** | Data acak berdasarkan kegiatan | Selection Sort (Descending) | Data tampil urut dari paling aktif |
| **Cari NIM yang ada** | NIM = 24051130082 | Sequential Search | Data anggota ditemukan |
| **Cari NIM tidak ada** | NIM = 24051139999 | Sequential Search | "Data tidak ditemukan" |
| **Tampilkan paling aktif** | - | Cek nilai kegiatan tertinggi | Menampilkan 1 anggota paling aktif |