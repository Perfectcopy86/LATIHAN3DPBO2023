#include "header.hh"

// konstruktor
Dosen::Dosen() : Sivitasakademi()
{
    NIP = "";
    pend = "";
    keahlian = "";
}

// Constructor with base human attribute.
Dosen::Dosen(string NIK, string nama, string gender, string asal, string email, string NIP, string pend, string keahlian) : Sivitasakademi(NIK, nama, gender, asal, email)
{
    this->NIP = NIP;
    this->pend = pend;
    this->keahlian = keahlian;
}

// getter dan setter
void Dosen::setNIP(string NIP)
{
    this->NIP = NIP;
}

void Dosen::setPend(string pend)
{
    this->pend = pend;
}

void Dosen::setKeahlian(string keahlian)
{
    this->keahlian = keahlian;
}

string Dosen::getNIP()
{
    return NIP;
}

string Dosen::getPend()
{
    return pend;
}

string Dosen::getKeahlian()
{
    return keahlian;
}

// destruktor
Dosen::~Dosen()
{
}