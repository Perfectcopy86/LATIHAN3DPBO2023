#include "header.hh"

// konstruktor
Course::Course()
{
    matkul = "";
}

// konstruktor dengan parameter
Course::Course(string matkul)
{
    this->matkul = matkul;
}

// setter dan getter
void Course::setMatkul(string matkul)
{
    this->matkul = matkul;
}

void Course::add_dosen(Dosen dosen)
{
    this->dosen.push_back(dosen);
}

void Course::add_mahasiswa(Mahasiswa mahasiswa)
{
    this->mahasiswa.push_back(mahasiswa);
}

string Course::getMatkul()
{
    return this->matkul;
}

list<Dosen> Course::getDosen()
{
    return this->dosen;
}

list<Mahasiswa> Course::getMahasiswa()
{
    return this->mahasiswa;
}

// destruktor
Course::~Course()
{
}