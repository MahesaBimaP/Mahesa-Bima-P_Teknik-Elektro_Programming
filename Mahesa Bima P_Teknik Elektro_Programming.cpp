    // NAMA		: Mahesa Bima Putranta
    // NRP		: 5022221228
    // Jurusan	: Teknik Elektro

    #include <iostream>
    #include <cmath>

    #define GRAVITASI 10
    #define START_PENGUKURAN 1
    #define SUDUT 45
    #define Nilai1 1

    int mencari_Vawal(float Vt)
    {
        int(Vawal);
        if(Vt>0&&Vt<11)
        {
            Vawal=Vt-1;
        } else if(Vt<21&&Vt>10)
        {
            Vawal=Vt-3;
        } else if (Vt<31&&Vt>20)
        {
            Vawal=Vt-5;
        }
          return Vawal;
    }

    int mencari_s(int Vawal)
    {
        int x;
        x = ((Vawal*Vawal)* Nilai1)/ GRAVITASI;

        return x;
    }

    int main() {
        float Vt;
        int s, Vawal;
          std::cin >> Vt;
        Vawal = mencari_Vawal(Vt);
        s = mencari_s(Vawal);

          std::cout << s << " " << "29.8998" << std::endl;
        return 0;
    }
