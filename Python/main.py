# import library
from kelas import Mahasiswa
from kelas import Dosen
from kelas import Course
from kelas import Prodi

class Main:

    listDosen = []
    dosen1 = Dosen("21203103", "Aldi", "laki-laki", "UPI",  "aldi@upi.edu", "21233113", "S3" ,"Machine Learning")
    listDosen.append(dosen1)
    dosen2 = Dosen("212131331", "Ujang", "laki-laki", "UPI", "ujang@upi.edu", "2123232323", "S2", "Artificial Intelegence")
    listDosen.append(dosen2)
    dosen3 = Dosen("21534534", "Nabila", "perempuan", "UPI", "nabila@upi.edu", "324224242", "S3", "Sistem Informasi")
    listDosen.append(dosen3)
    print("             List Dosen:")

    for dosen in listDosen:
                print("===================================================")
                print("||Dosen " + str(listDosen.index(dosen)+1))
                print("===================================================")
                print("||NIK              : " + dosen.getNIK())
                print("||Nama             : " + dosen.getNama())
                print("||Jenis Kelamin    : " + dosen.getGender())
                print("||Asal Universitas : " + dosen.getAsal())
                print("||Email            : " + dosen.getEmail())
                print("||NIP              : " + dosen.getNIP())
                print("||Program Studi    : " + dosen.getPend())
                print("||Keahlian         : " + dosen.getKeahlian())
                print("===================================================\n")

    listmhs = []
    mhs1 = Mahasiswa("171828128", "2101963", "Rasyid", "Laki-laki", "UPI", "rasyid@upi.edu", "FPMIPA")
    listmhs.append(mhs1)
    mhs2 = Mahasiswa("17142336", "2101545", "Terasya", "Perempuan", "UPI", "rasya@upi.edu", "FPMIPA")
    listmhs.append(mhs2)
    mhs3 = Mahasiswa("17144343", "2101789", "Nana", "Perempuan", "UPI", "nana@upi.edu", "FPMIPA")
    listmhs.append(mhs3)
    print("*******************************************************")
    print("             List Mahasiswa:")

    for mhs in listmhs:
                print("===================================================")
                print("||Mahasiswa " + str(listmhs.index(mhs)+1))
                print("===================================================")
                print("||NIK              : " + mhs.getNIK())
                print("||NIM              : " + mhs.getNIM())
                print("||Nama             : " + mhs.getNama())
                print("||Jenis Kelamin    : " + mhs.getGender())
                print("||Asal Universitas : " + mhs.getAsal())
                print("||Email            : " + mhs.getEmail())
                print("||Fakultas         : " + mhs.getFakultas())
                print("===================================================\n")
    
    # inisialisasi matkul
    course1 = Course("Kalkulus")
    course2 = Course("Big Data")
    course3 = Course("Data Mining")

    # Mahasiswa ngontrak matkul
    course1.add_mhs(mhs1)
    course1.add_mhs(mhs2)
    course2.add_mhs(mhs2)
    course2.add_mhs(mhs3)
    course3.add_mhs(mhs3)
    course3.add_mhs(mhs1)
    

    # Dosen mengajar matkul
    course1.add_dosen(dosen1)
    course2.add_dosen(dosen2)
    course3.add_dosen(dosen3)


    # print list of Mahasiswa yang mengontrak matkul
    print("===================================")
    print("Mahasiswa Mengontrak", course1.getMatkul(), ":")
    for mhs in course1.get_mhs():
        print("- ",mhs.getNama())
    print("===================================\n")

    print("===================================")    
    print("Mahasiswa Mengontrak", course2.getMatkul(), ":")
    for mhs in course2.get_mhs():
        print("- ",mhs.getNama())
    print("===================================\n")

    print("===================================")
    print("Mahasiswa Mengontrak", course3.getMatkul(), ":")
    for mhs in course3.get_mhs():
        print("- ",mhs.getNama())
    print("===================================\n")

    # print list of Dosen yang mengajar matkul tertentu
    print("===================================")
    print("Dosen yang Mengajar", course1.getMatkul(), ":")
    for dosen in course1.get_dosen():
        print("- ",dosen.getNama())
    print("===================================\n")

    print("===================================")
    print("Dosen yang Mengajar", course2.getMatkul(), ":")
    for dosen in course2.get_dosen():
        print("- ",dosen.getNama())
    print("===================================\n")

    print("===================================") 
    print("Dosen yang Mengajar", course3.getMatkul(), ":")
    for dosen in course3.get_dosen():
        print("- ",dosen.getNama())
    print("===================================\n")

    prodi1 = Prodi("Ilmu Komputer", "IK")
    prodi2 = Prodi("Pendidikan Ilmu Komputer", "PIK")

    prodi1.add_course(course1)
    prodi2.add_course(course2)
    prodi2.add_course(course3)

    # print list of Prodi dengan matkunya
    print("===================================")
    print("Program Studi", prodi1.getProdi(), "-", prodi1.getKode(), ":")
    for pro in prodi1.get_course():
        print("- ",pro.getMatkul())
    print("===================================\n")

        # print list of Prodi dengan matkunya
    print("===================================")
    print("Program Studi", prodi2.getProdi(), "-", prodi2.getKode(), ":")
    for pro in prodi2.get_course():
        print("- ",pro.getMatkul())
    print("===================================\n")

