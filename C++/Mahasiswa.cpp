#include "header.hh"

// konstruktor
Mahasiswa::Mahasiswa() : Sivitasakademi()
{
    NIM = "";
    fakultas = "";
}

// Constructor with base human attribute.
Mahasiswa::Mahasiswa(string NIK, string NIM, string nama, string gender, string asal, string email, string fakultas) : Sivitasakademi(NIK, nama, gender, asal, email)
{
    this->NIM = NIM;
    this->fakultas = fakultas;
}

// getter dan setter
void Mahasiswa::setNIM(string NIM)
{
    this->NIM = NIM;
}

void Mahasiswa::setFakultas(string fakultas)
{
    this->fakultas = fakultas;
}

string Mahasiswa::getNIM()
{
    return NIM;
}

string Mahasiswa::getFakultas()
{
    return fakultas;
}

// destruktor
Mahasiswa::~Mahasiswa()
{
}