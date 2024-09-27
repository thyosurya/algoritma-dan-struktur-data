## Penulis
Nama: Moh. Radithyo Surya Martuah
NIM: 531424113
Mata Kuliah: Algoritma dan Struktur data
Dosen Pengampu: Alfian Zakaria, ST., M.T., MCE
---

# Program Perhitungan Gaji Bersih Karyawan

## Deskripsi Program
Program ini digunakan untuk menghitung gaji bersih karyawan berdasarkan gaji pokok, status pernikahan, dan jumlah anak. Program ini memperhitungkan tunjangan istri dan tunjangan anak untuk mendapatkan gaji bersih karyawan.

## Fitur
- **Input gaji pokok**: Pengguna dapat memasukkan jumlah gaji pokok karyawan.
- **Status pernikahan**: Program menanyakan apakah karyawan sudah menikah, yang akan menentukan apakah tunjangan istri diberikan.
- **Jumlah anak**: Jika karyawan memiliki anak, program akan memberikan tunjangan berdasarkan jumlah anak.
- **Penghitungan tunjangan**: Tunjangan istri sebesar 10% dari gaji pokok (jika menikah), tunjangan anak 5% atau 10% dari gaji pokok (tergantung jumlah anak).
- **Output gaji bersih**: Program akan menghitung dan menampilkan gaji bersih karyawan setelah ditambah dengan tunjangan istri dan tunjangan anak.

## Cara Menggunakan Program
1. Jalankan program di terminal atau lingkungan pengembangan C++.
2. Masukkan gaji pokok karyawan saat diminta.
3. Masukkan status pernikahan karyawan (1 = Ya, 0 = Tidak).
4. Masukkan jumlah anak karyawan (0 jika tidak punya anak).
5. Program akan menghitung gaji bersih dan menampilkannya dalam bentuk mata uang rupiah.

## Contoh Output
```plaintext
Masukkan gaji pokok: 5000000
Apakah karyawan sudah menikah? (1 = Ya, 0 = Tidak): 1
Masukkan jumlah anak (0 jika tidak punya anak): 2
Gaji bersih karyawan adalah: Rp 5750000.00
```

## Struktur Program
1. **Input**:
   - `gajiPokok`: Gaji dasar karyawan.
   - `statusMenikah`: Status pernikahan (1 untuk menikah, 0 untuk tidak).
   - `jumlahAnak`: Jumlah anak (dapat berupa 0 atau lebih).
2. **Penghitungan**:
   - **Tunjangan Istri**: Jika `statusMenikah == 1`, tunjangan istri sebesar 10% dari gaji pokok.
   - **Tunjangan Anak**: Jika `jumlahAnak > 2`, tunjangan anak 10% dari gaji pokok. Jika `jumlahAnak` 1 atau 2, tunjangan anak sebesar 5%.
3. **Output**:
   - Gaji bersih yang dihitung dari gaji pokok ditambah dengan tunjangan istri dan anak.

## Persyaratan Sistem
- Compiler C++ yang mendukung standar C++11 atau lebih baru.
- Program dapat dijalankan di Windows, MacOS, atau Linux.



---
