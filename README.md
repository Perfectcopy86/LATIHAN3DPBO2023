# LATIHAN4DPBO2023

Saya Rasyid Andriansyah NIM 2101963 mengerjakan Latihan 4 Praktikum mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

Compile C++: g++ *.cpp -o tes.exe

Compile Python: python (nama file).py

UML Class Diagram:

![UML Lathian 4](https://user-images.githubusercontent.com/100756215/223353206-32a8295d-a0ca-4d7a-99c9-a7cb27f7cd3c.png)


## Deskripsi:
Program mempunyai 6 kelas, yaitu:
- Human
- Sivitasakademi
- Mahasiswa
- Dosen
- Prodi
- Course

Penjelasan relasi:
`Human` merupakan parent utama, memiliki child `Sivitasakademi` karena `Sivitasakademi` adalah `Human`, lalu `Sivitasakademi` memiliki dua buah child yaitu `Mahasiswa` dan `Dosen` karena keduanya merupakan `Sivitasakademi`, selanjutnya untuk composite ada `Course` dimana `Course` mempunyai(has a) `Mahasiswa` dan `Dosen`. `Mahasiswa` memiliki mata kuliah/`Course` yang diikuti serta `Dosen` memiliki mata kuliah/`Corse` yang diajar. Terakhir ada `Prodi` has a `Dosen`, `Mahasiswa`, dan `Course` karena dalam `Prodi` minimal mempunyai unsur-unsur tersebut agar bisa dikatakan sebagai sebuah `Prodi`

## Alur Program
inputan program berupa hardcode sehingga hanya menampilkan sebuah keluaran

## Dokumentasi
1. list Dosen
![1  list dosen](https://user-images.githubusercontent.com/100756215/223356109-268f8f1a-8cea-4dde-8ee9-f55d65fb5f5f.png)


2. list Mahasiswa
![2  list mhs](https://user-images.githubusercontent.com/100756215/223356149-70c95af7-d3be-49e2-8147-106324b72086.png)


3. relasi dosen,mhs, prodi
![3 relasi dosen,mhs, prodi](https://user-images.githubusercontent.com/100756215/223356165-d10a16d1-dbf3-4511-947a-72312d7fb854.png)


4. lanjutan relasi
![4  lanjutan relasi](https://user-images.githubusercontent.com/100756215/223356191-962b915c-bd62-4f0c-a97d-f94a09dec67f.png)

