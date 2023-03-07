#include "header.hh"

// konstruktor
Sivitasakademi::Sivitasakademi() : Human()
{
    asal = "";
    email = "";
}

// Constructor with base human attribute.
Sivitasakademi::Sivitasakademi(string NIK, string nama, string gender, string asal, string email) : Human(NIK, nama, gender)
{
    this->asal = asal;
    this->email = email;
}

// getter dan setter
void Sivitasakademi::setAsal(string asal)
{
    this->asal = asal;
}

void Sivitasakademi::setEmail(string email)
{
    this->email = email;
}

string Sivitasakademi::getAsal()
{
    return asal;
}

string Sivitasakademi::getEmail()
{
    return email;
}

// destruktor
Sivitasakademi::~Sivitasakademi()
{
}