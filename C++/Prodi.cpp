#include "header.hh"

// inisialisasi constructor
Prodi::Prodi()
{
    prodi = "";
    kode = "";
}

// inisialisasi constructor dengan parameter
Prodi::Prodi(string prodi, string kode)
{
    this->prodi = prodi;
    this->kode = kode;
}

// inisialisasi method setter dan getter
void Prodi::setProdi(string prodi)
{
    this->prodi = prodi;
}

void Prodi::setKode(string kode)
{
    this->kode = kode;
}

void Prodi::add_course(Course course)
{
    this->course.push_back(course);
}

void Prodi::add_dosen(Dosen dosen)
{
    this->dosen.push_back(dosen);
}

void Prodi::add_mahasiswa(Mahasiswa mahasiswa)
{
    this->mahasiswa.push_back(mahasiswa);
}

string Prodi::getProdi()
{
    return this->prodi;
}

string Prodi::getKode()
{
    return this->kode;
}

list<Course> Prodi::getCourse()
{
    return this->course;
}

list<Dosen> Prodi::getDosen()
{
    return this->dosen;
}

list<Mahasiswa> Prodi::getMahasiswa()
{
    return this->mahasiswa;
}

// inisialisasi destructor
Prodi::~Prodi()
{
}