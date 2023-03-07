// import library
#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

class Human
{
private:
    string NIK;
    string nama;
    string gender;

public:
    // konstruktor
    Human();
    Human(string NIK, string nama, string gender);

    // gettera dan setter
    void setNIK(string NIK);
    void setNama(string nama);
    void setGender(string gender);

    string getNIK();
    string getNama();
    string getGender();

    // destruktor
    ~Human();
};

class Sivitasakademi : public Human
{
private:
    string asal;
    string email;

public:
    // konstruktor
    Sivitasakademi();
    Sivitasakademi(string NIK, string nama, string gender, string asal, string email);

    // setter dan getter
    void setAsal(string asal);
    void setEmail(string email);

    string getAsal();
    string getEmail();

    // destruktor
    ~Sivitasakademi();
};

class Mahasiswa : public Sivitasakademi
{
private:
    string NIM;
    string fakultas;

public:
    // konstruktor
    Mahasiswa();
    Mahasiswa(string NIK, string NIM, string nama, string gender, string asal, string email, string fakultas);

    // getter dan setter
    void setNIM(string NIM);
    void setFakultas(string fakultas);

    string getNIM();
    string getFakultas();

    // destruktor
    ~Mahasiswa();
};

class Dosen : public Sivitasakademi
{
private:
    string NIP;
    string pend;
    string keahlian;

public:
    // konstruktor
    Dosen();
    Dosen(string NIK, string nama, string gender, string asal, string email, string NIP, string pend, string keahlian);

    // getter dan setter
    void setNIP(string NIP);
    void setPend(string pend);
    void setKeahlian(string keahlian);

    string getNIP();
    string getPend();
    string getKeahlian();

    // destruktor
    ~Dosen();
};

class Course
{
private:
    string matkul;
    list<Dosen> dosen;
    list<Mahasiswa> mahasiswa;

public:
    // konstruktor
    Course();
    Course(string matkul);

    // method setter dan getter
    void setMatkul(string matkul);
    void add_dosen(Dosen dosen);
    void add_mahasiswa(Mahasiswa mahasiswa);

    string getMatkul();
    list<Dosen> getDosen();
    list<Mahasiswa> getMahasiswa();
    // destructor
    ~Course();
};

class Prodi
{
private:
    string prodi;
    string kode;
    list<Course> course;
    list<Dosen> dosen;
    list<Mahasiswa> mahasiswa;

public:
    // konstruktor
    Prodi();
    Prodi(string prodi, string kode);

    // method setter dan getter
    void setProdi(string prodi);
    void setKode(string kode);
    void add_course(Course course);
    void add_dosen(Dosen dosen);
    void add_mahasiswa(Mahasiswa mahasiswa);

    string getProdi();
    string getKode();
    list<Course> getCourse();
    list<Dosen> getDosen();
    list<Mahasiswa> getMahasiswa();

    // destructor
    ~Prodi();
};