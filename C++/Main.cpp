// Saya Rasyid Andriansyah NIM 2101963 mengerjakan soal Latihan 4 dalam mata kuliah DPBO
// untuk keberkahanNya maka saya tidak melakukan kecurangan
// seperti yang telah dispesifikasikan. Aamiin.

#include "header.hh"

int main()
{
    // inisialisasi daftar dosen
    list<Dosen> listDosen;
    Dosen dosen1("21203103", "Aldi, M.Kom", "Laki-laki", "UPI", "aldi@upi.edu", "21233113", "S2", "Machine Learning");
    listDosen.push_back(dosen1);
    Dosen dosen2("212131331", "Ujang, M.Kom", "Laki-laki", "UPI", "ujang@upi.edu", "2123232323", "S2", "Artificial Intelegence");
    listDosen.push_back(dosen2);
    Dosen dosen3("21534534", "Nabila, M.SI", "Perempuan", "UPI", "nabila@upi.edu", "324224242", "S2", "Sistem Informasi");
    listDosen.push_back(dosen3);
    Dosen dosen4("21534574", "Siti, M.Kom", "Perempuan", "UPI", "siti@upi.edu", "324247989", "S2", "Kalkulus");
    listDosen.push_back(dosen4);
    Dosen dosen5("21587914", "Sulis, M.Kom", "Perempuan", "UPI", "sulis@upi.edu", "32424878", "S2", "Multimedia");
    listDosen.push_back(dosen5);
    cout << "             List Dosen:\n";

    int nomorDosen = 1;

    // print informasi setiap dosen dalam daftar dosen
    for (list<Dosen>::iterator it = listDosen.begin(); it != listDosen.end(); it++)
    {
        cout << "===================================================\n";
        cout << "||Dosen " << nomorDosen << endl;
        cout << "===================================================\n";
        cout << "||NIK              : " << it->getNIK() << endl;
        cout << "||Nama             : " << it->getNama() << endl;
        cout << "||Jenis Kelamin    : " << it->getGender() << endl;
        cout << "||Asal Universitas : " << it->getAsal() << endl;
        cout << "||Email            : " << it->getEmail() << endl;
        cout << "||NIP              : " << it->getNIP() << endl;
        cout << "||Program Studi    : " << it->getPend() << endl;
        cout << "||Keahlian         : " << it->getKeahlian() << endl;
        cout << "===================================================\n\n";

        nomorDosen++;
    }

    // inisialisasi daftar mahasiswa
    list<Mahasiswa> listMhs;
    Mahasiswa mhs1("171828128", "2101963", "Rasyid", "Laki-laki", "UPI", "rasyid@upi.edu", "FPMIPA");
    listMhs.push_back(mhs1);
    Mahasiswa mhs2("17142336", "2101545", "Terasya", "Perempuan", "UPI", "rasya@upi.edu", "FPMIPA");
    listMhs.push_back(mhs2);
    Mahasiswa mhs3("17144343", "2101789", "Nana", "Perempuan", "UPI", "nana@upi.edu", "FPMIPA");
    listMhs.push_back(mhs3);
    Mahasiswa mhs4("17187424", "2108745", "Syifa", "Perempuan", "UPI", "syifa@upi.edu", "FPMIPA");
    listMhs.push_back(mhs4);
    Mahasiswa mhs5("17144479", "2101187", "Agus", "Laki-laki", "UPI", "agus@upi.edu", "FPMIPA");
    listMhs.push_back(mhs5);
    cout << "*******************************************************\n";
    cout << "             List Mahasiswa:\n";

    int nomorMhs = 1;

    // print informasi setiap mahasiswa dalam daftar mahasiswa
    for (list<Mahasiswa>::iterator it = listMhs.begin(); it != listMhs.end(); it++)
    {
        cout << "===================================================\n";
        cout << "||Mahasiswa" << nomorMhs << endl;
        cout << "===================================================\n";
        cout << "||NIK              : " << it->getNIK() << endl;
        cout << "||NIM              : " << it->getNIM() << endl;
        cout << "||Nama             : " << it->getNama() << endl;
        cout << "||Jenis Kelamin    : " << it->getGender() << endl;
        cout << "||Asal Universitas : " << it->getAsal() << endl;
        cout << "||Email            : " << it->getEmail() << endl;
        cout << "||Fakultas         : " << it->getFakultas() << endl;
        cout << "===================================================\n\n";

        nomorMhs++;
    }

    // inisialisasi matkul
    Course course1("Kalkulus");
    Course course2("Big Data");
    Course course3("Data Mining");
    Course course4("DPBO");
    Course course5("Sistem Operasi");
    Course course6("Metodologi Penelitian");
    Course course7("Multimedia");

    // Mahasiswa ngontrak matkul
    course1.add_mahasiswa(mhs1);
    course1.add_mahasiswa(mhs2);
    course1.add_mahasiswa(mhs4);
    course2.add_mahasiswa(mhs2);
    course2.add_mahasiswa(mhs3);
    course2.add_mahasiswa(mhs5);
    course3.add_mahasiswa(mhs3);
    course3.add_mahasiswa(mhs1);
    course3.add_mahasiswa(mhs5);

    // Dosen mengajar matkul
    course1.add_dosen(dosen1);
    course2.add_dosen(dosen2);
    course3.add_dosen(dosen3);
    course1.add_dosen(dosen4);
    course2.add_dosen(dosen5);

    // inisialisasi prodi
    Prodi prodi1("Ilmu Komputer", "IK");
    Prodi prodi2("Pendidikan Ilmu Komputer", "PIK");

    // tambah matkul ke prodi
    prodi1.add_course(course1);
    prodi1.add_course(course4);
    prodi1.add_course(course5);
    prodi1.add_course(course6);
    prodi2.add_course(course2);
    prodi2.add_course(course3);
    prodi2.add_course(course6);
    prodi2.add_course(course7);

    // tambah dosen ke prodi
    prodi1.add_dosen(dosen1);
    prodi1.add_dosen(dosen2);
    prodi1.add_dosen(dosen3);
    prodi2.add_dosen(dosen4);
    prodi2.add_dosen(dosen5);

    // tambah mahasiswa ke prodi
    prodi1.add_mahasiswa(mhs1);
    prodi1.add_mahasiswa(mhs2);
    prodi1.add_mahasiswa(mhs4);
    prodi2.add_mahasiswa(mhs3);
    prodi2.add_mahasiswa(mhs5);

    // print list of Mahasiswa yang mengontrak matkul
    cout << "\n\nlist of Mahasiswa yang mengontrak matkul:" << endl;
    // mhs matkul 1
    cout << "===========================================================" << endl;
    cout << "Mahasiswa Mengontrak " << course1.getMatkul() << ":" << endl;
    for (auto mhs : course1.getMahasiswa())
    {
        cout << "- " << mhs.getNIM() << " " << mhs.getNama() << endl;
    }
    cout << "==========================================================\n"
         << endl;

    // mhs matkul 2
    cout << "===========================================================" << endl;
    cout << "Mahasiswa Mengontrak " << course2.getMatkul() << ":" << endl;
    for (auto mhs : course2.getMahasiswa())
    {

        cout << "- " << mhs.getNIM() << " " << mhs.getNama() << endl;
    }
    cout << "==========================================================\n"
         << endl;

    // mhs matkul 3
    cout << "===========================================================" << endl;
    cout << "Mahasiswa Mengontrak " << course3.getMatkul() << ":" << endl;
    for (auto mhs : course3.getMahasiswa())
    {

        cout << "- " << mhs.getNIM() << " " << mhs.getNama() << endl;
    }
    cout << "==========================================================\n"
         << endl;

    // print list of Dosen yang mengajar matkul tertentu
    cout << "\n\nlist of Dosen yang mengajar matkul tertentu:" << endl;
    // dosen matkul 1
    cout << ("===================================") << endl;
    cout << "Dosen yang Mengajar " << course1.getMatkul() << ":" << endl;
    for (auto dosen : course1.getDosen())
    {
        cout << "- " << dosen.getNama() << endl;
    }
    cout << ("===================================\n") << endl;

    // dosen matkul 2
    cout << ("===================================") << endl;
    cout << "Dosen yang Mengajar " << course2.getMatkul() << ":" << endl;
    for (auto dosen : course2.getDosen())
    {
        cout << "- " << dosen.getNama() << endl;
    }
    cout << ("===================================\n") << endl;

    // dosen matkul 3
    cout << ("===================================") << endl;
    cout << "Dosen yang Mengajar " << course3.getMatkul() << ":" << endl;
    for (auto dosen : course3.getDosen())
    {
        cout << "- " << dosen.getNama() << endl;
    }
    cout << ("===================================\n") << endl;

    // print list of Prodi dengan matkunya
    cout << "\n\nList of Prodi dengan matkulnya:" << endl;
    // matkul prodi 1
    cout << ("===================================") << endl;
    cout << "Program Studi " << prodi1.getProdi() << "-" << prodi1.getKode() << ":" << endl;
    for (auto course : prodi1.getCourse())
    {
        cout << "- " << course.getMatkul() << endl;
    }
    cout << ("===================================\n") << endl;

    // matkul prodi 2
    cout << ("==============================================") << endl;
    cout << "Program Studi " << prodi2.getProdi() << "-" << prodi2.getKode() << ":" << endl;
    for (auto course : prodi2.getCourse())
    {
        cout << "- " << course.getMatkul() << endl;
    }
    cout << ("==============================================\n") << endl;

    // print listdosen of Prodi
    cout << "\n\nList of Dosen Prodi:" << endl;
    // dosen di prodi 1
    cout << ("===================================") << endl;
    cout << "Program Studi " << prodi1.getProdi() << "-" << prodi1.getKode() << ":" << endl;
    for (auto dosen : prodi1.getDosen())
    {
        cout << "- " << dosen.getNama() << endl;
    }
    cout << ("===================================\n") << endl;

    // dosen di prodi 2
    cout << ("==============================================") << endl;
    cout << "Program Studi " << prodi2.getProdi() << "-" << prodi2.getKode() << ":" << endl;
    for (auto dosen : prodi2.getDosen())
    {
        cout << "- " << dosen.getNama() << endl;
    }
    cout << ("==============================================\n") << endl;

    // print listmhs of Prodi
    cout << "\n\nList of Mahasiswa Prodi:" << endl;
    // mhs 1
    cout << ("===================================") << endl;
    cout << "Program Studi " << prodi1.getProdi() << "-" << prodi1.getKode() << ":" << endl;
    for (auto mahasiswa : prodi1.getMahasiswa())
    {
        cout << "- " << mahasiswa.getNIM() << " " << mahasiswa.getNama() << endl;
    }
    cout << ("===================================\n") << endl;

    // mhs 2
    cout << ("==============================================") << endl;
    cout << "Program Studi " << prodi2.getProdi() << "-" << prodi2.getKode() << ":" << endl;
    for (auto mahasiswa : prodi2.getMahasiswa())
    {
        cout << "- " << mahasiswa.getNIM() << " " << mahasiswa.getNama() << endl;
    }
    cout << ("==============================================\n") << endl;

    return 0;
}