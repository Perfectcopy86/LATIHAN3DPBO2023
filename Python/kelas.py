#deklarasi kelas human
class Human:
    # private atribut
    __NIK= ""
    __nama = ""
    __gender = ""

    # konstruktor
    def __init__(self, NIK="", nama="", gender=""):
        self.__NIK = NIK
        self.__nama = nama
        self.__gender = gender
        
    # setter dan getter
    def setNIK(self, NIK):
        self.__NIK = NIK

    def setNama(self, nama):
        self.__nama = nama

    def setGender(self, gender):
        self.__gender = gender

    def getNIK(self):
        return self.__NIK

    def getNama(self):
        return self.__nama

    def getGender(self):
        return self.__gender

#deklarasi kelas sivitas turunan human
class Sivitasakademi(Human):
    # private atribut
    __asal= ""
    __email = ""

    # konstruktor
    def __init__(self, NIK="", nama="", gender="", asal="", email=""):
        super().__init__(NIK, nama, gender)
        self.__asal = asal
        self.__email = email
    
    # setter dan getter
    def setAsal(self, asal):
        self.__asal = asal

    def setEmail(self, email):
        self.__email = email

    def getAsal(self):
        return self.__asal

    def getEmail(self):
        return self.__email

#deklarasi kelas mahasiswa turunan sivitas
class Mahasiswa(Sivitasakademi):
    # private atribut
    __NIM= ""
    __fakultas = ""

    # konstruktor
    def __init__(self, NIK="" ,NIM="", nama="", gender="", asal="", email="", fakultas=""):
        super().__init__(NIK, nama, gender, asal, email)
        self.__NIM = NIM
        self.__fakultas =fakultas

    # setter dan getter
    def setNIM(self, NIM):
        self.__NIM = NIM

    def setFakultas(self, fakultas):
        self.__fakultas = fakultas
    
    def getNIM(self):
        return self.__NIM

    def getFakultas(self):
        return self.__fakultas

class Dosen(Sivitasakademi):
    #private atribut
    __NIP =""
    __pend =""
    __keahlian =""

    # konstruktor
    def __init__(self, NIK="", nama="", gender="", asal="", email="", NIP="", pend="", keahlian=""):
        super().__init__(NIK, nama, gender, asal, email)
        self.__NIP = NIP
        self.__pend =pend
        self.__keahlian =keahlian

    # setter dan getter
    def setNIP(self, NIP):
        self.__NIP = NIP

    def setPend(self, pend):
        self.__pend = pend

    def setKeahlian(self, keahlian):
        self.__keahlian = keahlian

    def getNIP(self):
        return self.__NIP

    def getPend(self):
        return self.__pend

    def getKeahlian(self):
        return self.__keahlian



class Course():
    __matkul =""
    # konstruktor
    def __init__(self, matkul=""):
        self.__matkul = matkul
        self.list_dosen = []
        self.list_mhswa = []
    # setter dan getter

    def add_dosen(self, dosen):
        self.list_dosen.append(dosen)

    def get_dosen(self):
        return self.list_dosen

    def add_mhs(self, mhswa):
        self.list_mhswa.append(mhswa)

    def get_mhs(self):
        return self.list_mhswa
    
    def setMatkul(self, matkul):
        self.__matkul = matkul

    def getMatkul(self):
        return self.__matkul



class Prodi():
    __prodi =""
    __kode = ""
    def __init__(self, prodi="", kode=""):
        self.__prodi = prodi
        self.__kode = kode
        self.list_course = []

    def add_course(self, course):
        self.list_course.append(course)

    def get_course(self):
        return self.list_course

    # setter dan getter
    def setProdi(self, prodi):
        self.__prodi = prodi

    def setKode(self, kode):
        self.__kode = kode


    def getProdi(self):
        return self.__prodi

    def getKode(self):
        return self.__kode
    

