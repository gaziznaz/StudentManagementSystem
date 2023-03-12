#include <iostream>
#include <fstream>
#ifdef LINUX
#include <unistd.h>
#endif
#ifdef WINDOWS
#include <windows.h>
#endif
using namespace std;
class student
{
    char name[80];
    char gr[80];
    int nom;
    double pro, ds, saya, sum, gpa;

public:
    void engizu()
    {
        system("cls");
        student s;
        ofstream outfile;
        outfile.open("Report.txt", ios::app | ios::binary);
        if (outfile.fail())
        {
            std::cout<< "ФАЙЛ АШЫЛМАДЫ..." << endl;
            std::cin.ignore();
            std::cin.get();
        }
        std::cout<< "\n\n";
        std::cout<< "\t\t\t\t=======ЖАНА СТУДЕНТ ЕНГИЗУ========\n\n";
        std::cout<< "АТЫ-ЖОНИ :";
        std::cin.ignore();
        std::cin.getline(s.name, 80);
        std::cout<< "ТОБЫ : ";
        std::cin.get(s.gr, 80);
        std::cout<< "ID НОМЕРИ :";
        while (!(std::cin >> s.nom) || (std::cin.peek() != '\n'))
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
                ;
            std::cout<< "Кате! Бутин сан болуы керек! Кайта енгизип кориниз!" << endl;
            std::cout<< "ID НОМЕРИ :";
        }
        std::cout<< "Багалары:" << endl;
    pro:
        std::cout<< "\tБАГДАРЛАМАЛАУ ТИЛДЕРИ:С, С++ :";
        while (!(std::cin >> s.pro))
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
                ;
            std::cout<< "Кате! Накты сан болуы кажет! Кайта енгизип кориниз!" << endl;
            std::cout<< "\tБАГДАРЛАМАЛАУ ТИЛДЕРИ:С, С++ :";
        }
        if (s.pro < 0 || s.pro > 100)
        {
            std::cout<< "\tБАГА 0-100 АРАЛЫГЫНДА БОЛУ КЕРЕК\n КАЙТА ЕНГИЗИНИЗ\n";
            goto pro;
        }
    ds:
        std::cout<< "\tДИСКРЕТТИК КУРЫЛЫМДАР :";
        while (!(std::cin >> s.ds))
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
                ;
            std::cout<< "Кате! Накты сан болуы кажет! Кайта енгизип кориниз!" << endl;
            std::cout<< "\tБАГДАРЛАМАЛАУ ТИЛДЕРИ:С, С++ :";
        }
        if (s.ds < 0 || s.ds > 100)
        {
            std::cout<< "\tБАГА 0-100 АРАЛЫГЫНДА БОЛУ КЕРЕК\n КАЙТА ЕНГИЗИНИЗ\n";
            goto ds;
        }
    saya:
        std::cout<< "\tСАЯСАТТАНУ :";
        while (!(std::cin >> s.saya))
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
                ;
            std::cout<< "Кате! Накты сан болуы кажет! Кайта енгизип кориниз!" << endl;
            std::cout<< "\tБАГДАРЛАМАЛАУ ТИЛДЕРИ:С, С++ :";
        }
        if (s.saya < 0 || s.saya > 100)
        {
            std::cout<< "\tБАГА 0-100 АРАЛЫГЫНДА БОЛУ КЕРЕК\n КАЙТА ЕНГИЗИНИЗ\n";
            goto saya;
        }
        s.sum = s.pro + s.ds + s.saya;
        s.gpa = ((s.sum / 3) * 0.04);
        outfile.write(reinterpret_cast<char *>(&s), sizeof(student));
        outfile.close();
        std::cout<< endl;
        std::cout<< "\t\t\t\tЖАНА СТУДЕНТ ЕНГИЗИЛДИ" << endl;
        std::cout<< endl;
        std::cout<< "жалгастыру ушин пернени басыныз...";
        std::cin.ignore();
        std::cin.get();
    }
    void mySleep(int sleepMs)
    {
#ifdef LINUX
        usleep(sleepMs * 1000); // usleep takes sleep time in us (1 millionth of a second)
#endif
#ifdef WINDOWS
        Sleep(sleepMs);
#endif
    }
    void kirispe()
    {
        std::cout<< "\n\n\n";
        mySleep(300);
        std::cout<< "\t\t\t *  *   ***  *  *  *  *  * ****     *  ***  * *  *  * **** " << endl;
        mySleep(300);
        std::cout<< "\t\t\t * *   *   * *  *  *  * *  *       **  * *  * *  *  *     * " << endl;
        mySleep(300);
        std::cout<< "\t\t\t **    *   * *  *  *  **   ****   * *  * *  * ****  *  ** " << endl;
        mySleep(300);
        std::cout<< "\t\t\t * * * *   * *  *  *  * *  *     *  * ***** * *  ** *     * " << endl;
        mySleep(300);
        std::cout<< "\t\t\t *   *  ***  *******  *  * **** *   * *   * * *   * * **** " << endl;
        mySleep(300);
        std::cout<< endl;
        std::cout<< "\t\t\t\t\t -------------------------------" << endl;
        mySleep(500);
        std::cout<< "\t\t\t\t\t STUDENT MANAGEMENT SYSTEM" << endl;
        mySleep(500);
        std::cout<< "\t\t\t\t\t -------------------------------" << endl;
        mySleep(500);
    }
    void basmazir()
    {
        system("color 5f");
        char cc;
        char cl;
        std::cout<< "\t\t\t\t=================БАС МАЗИР================\n\n"
             << endl;
        mySleep(300);
        std::cout<< "\t\t\t\t1. ЖАНА СТУДЕНТ ЕНГИЗУ\n\n"
             << endl;
        mySleep(200);
        std::cout<< "\t\t\t\t2. МАЛИМЕТТЕРДИ КОРУ\n\n"
             << endl;
        mySleep(200);
        std::cout<< "\t\t\t\t3. СТУДЕНТТИ ИЗДЕУ\n\n"
             << endl;
        mySleep(200);
        std::cout<< "\t\t\t\t4. МАЛИМЕТКЕ ОЗГЕРИС ЕНГИЗУ\n\n"
             << endl;
        mySleep(200);
        std::cout<< "\t\t\t\t5. ЖУРНАЛ\n\n"
             << endl;
        mySleep(200);
        std::cout<< "\t\t\t\t6. СТУДЕНТ МАЛИМЕТТЕРИН ЖОЮ\n\n"
             << endl;
        mySleep(200);
        std::cout<< "\t\t\t\t7. АНЫКТАМА АЛУ \n\n"
             << endl;
        mySleep(200);
        std::cout<< "\t\t\t\t8. <- АРТКА \n"
             << endl;
        mySleep(200);
        std::cout<< "\t\t\t\t==============================" << endl;
        mySleep(300);
        std::cout<< "\t\t\t\tТАНДАУ ЖАСАНЫЗ: <1-8> :";
        mySleep(300);
        std::cin >> cc;
        std::cout<< endl;
        switch (cc)
        {
        case '1':
        {
            engizu();
            break;
        }
        case '2':
        {
            barlygy();
            break;
        }
        case '3':
        {
            int n;
            std::cout<< "СТУДЕНТТИН ID НОМЕРИН ЕНГИЗИНИЗ :";
            std::cin >> n;
            zheke_student(n);
            break;
        }
        case '4':
        {
            int n;
            std::cout<< "СТУДЕНТТИН ID НОМЕРИН ЕНГИЗИНИЗ :";
            std::cin >> n;
            ozgertu(n);
            break;
        }
        case '5':
        {
            zhurnal();
            break;
        }
        case '6':
        {
            system("cls");
            std::cout<< "\t\t\t\t===========СТУДЕНТ МАЛИМЕТТЕРИН ЖОЮ==========\n\n";
            std::cout<< "\t\t\t\t1. ЖЕКЕ СТУДЕНТТИН МАЛИМЕТИН ЖОЮ\n\n"
                 << endl;
            std::cout<< "\t\t\t\t2. БАРЛЫК СТУДЕНТТЕРДИН МАЛИМЕТТЕРИН ЖОЮ\n\n"
                 << endl;
            std::cout<< "\t\t\t\t3. <- АРТКА\n\n"
                 << endl;
            std::cout<< "\t\t\t\tТАНДАУ ЖАСАНЫЗ:";
            std::cin >> cl;
            std::cout<< endl;
            switch (cl)
            {
            case '1':
            {
                int n;
                std::cout<< "СТУДЕНТТИН ID НОМЕРИН ЕНГИЗИНИЗ :";
                std::cin >> n;
                std::cout<< endl;
                oshiru(n);
                break;
            }
            case '2':
            {
                barinoshiru();
                break;
            }
            case '3':
            {
                basmazir();
                break;
            }
            }
            break;
        }
        case '7':
        {
            int n;
            std::cout<< " АНЫКТАМА АЛГЫНЫЗ КЕЛГЕН СТУДЕНТТИН ID НОМЕРИН ЕНГИЗИНИЗ:";
            std::cin >> n;
            anyktama(n);
            break;
        }
        case '8':
        {
            break;
        }
        }
    }
    void barlygy()
    {
        system("cls");
        student s;
        ifstream infile;
        bool check = false;
        infile.open("Report.txt", ios::app | ios::binary);
        if (infile.fail())
        {
            std::cout<< "ФАЙЛ АШЫЛМАДЫ..." << endl;
            std::cin.ignore();
            std::cin.get();
        }
        std::cout<< "\n\n";
        std::cout<< "\t\t\t\tБАРЛЫК СТУДЕНТТЕРДИН МАЛИМЕТТЕРИ" << endl;
        std::cout<< "==================================================================================" << endl;
        while (infile.read(reinterpret_cast<char *>(&s), sizeof(student)))
        {
            std::cout<< "\t\t\tАТЫ-ЖОНИ :" << s.name << endl;
            std::cout<< "\t\t\tТОБЫ :" << s.gr << endl;
            std::cout<< "\t\t\tID НОМЕРИ :" << s.nom << endl;
            std::cout<< "\t\t\tБагалары:" << endl;
            std::cout<< "\t\t\t\tБАГДАРЛАМАЛАУ ТИЛДЕРИ: С, С++ :" << s.pro << endl;
            std::cout<< "\t\t\t\tДИСКРЕТТИК КУРЫЛЫМДАР :" << s.ds << endl;
            std::cout<< "\t\t\t\tСАЯСАТТАНУ :" << s.saya << endl;
            std::cout<< "\t\t\tGPA :" << s.gpa << endl;
            std::cout<< "==================================================================================" << endl;
            check = true;
        }
        infile.close();
        if (check == false)
            std::cout<< "\t\t\t\tМАЛИМЕТТЕР ТАБЫЛМАДЫ..." << endl
                 << endl;
        std::cout<< "жалгастыру ушин пернени басыныз...";
        std::cin.ignore();
        std::cin.get();
    }
    void zheke_student(int n)
    {
        system("cls");
        student s;
        ifstream infile;
        infile.open("Report.txt", ios::app | ios::binary);
        if (infile.fail())
        {
            std::cout<< "ФАЙЛ АШЫЛМАДЫ...";
            std::cin.ignore();
            std::cin.get();
        }
        bool equality = false;
        std::cout<< "\t\t\t\t============ЖЕКЕ СТУДЕНТТИН МАЛИМЕТИ============\n\n";
        while (infile.read(reinterpret_cast<char *>(&s), sizeof(student)))
        {
            if (s.nom == n)
            {
                std::cout<< "\t\t\tАТЫ-ЖОНИ :" << s.name << endl;
                std::cout<< "\t\t\tТОБЫ :" << s.gr << endl;
                std::cout<< "\t\t\tID НОМЕРИ :" << s.nom << endl;
                std::cout<< "\t\t\tБагалары:" << endl;
                std::cout<< "\t\t\t\tБАГДАРЛАМАЛАУ ТИЛДЕРИ: С, С++ :" << s.pro << endl;
                std::cout<< "\t\t\t\tДИСКРЕТТИК КУРЫЛЫМДАР :" << s.ds << endl;
                std::cout<< "\t\t\t\tСАЯСАТТАНУ :" << s.saya << endl;
                std::cout<< "\t\t\tGPA :" << s.gpa << endl;
                std::cout<< "\t\t\t\t================================================" << endl;
                equality = true;
            }
        }
        infile.close();
        if (equality == false)
            std::cout<< "\t\t\t\tМАЛИМЕТ ТАБЫЛМАДЫ..." << endl;
        std::cout<< endl;
        std::cout<< "жалгастыру ушин пернени басыныз...";
        std::cin.ignore();
        std::cin.get();
    }
    void zhurnal()
    {
        system("cls");
        student s;
        ifstream infile;
        bool eq = false;
        infile.open("Report.txt", ios::app | ios::binary);
        if (infile.fail())
        {
            std::cout<< "ФАЙЛ АШЫЛМАДЫ...";
            std::cin.ignore();
            std::cin.get();
        }
        std::cout<< "\n\n";
        std::cout<< "\t\t\t\tЖУРНАЛ" << endl;
        std::cout<< "=======================================================================================" << endl;
        std::cout<< "\t\t\tС, С++ \t Дис.курылым \t Саясаттану \t| GPA" << endl;
        std::cout<< "=======================================================================================" << endl;
        while (infile.read(reinterpret_cast<char *>(&s), sizeof(student)))
        {
            std::cout<< "\t\t\t\t\n"
                 << s.name << "\t" << s.pro << "\t\t" << s.ds
                 << "\t\t" << s.saya << "\t| " << s.gpa << endl;
            std::cout<< "=======================================================================================" << endl;
            eq = true;
        }
        infile.close();
        if (eq == false)
            std::cout<< "\t\t\t\tМАЛИМЕТТЕР ТАБЫЛМАДЫ..." << endl
                 << endl;
        std::cout<< "жалгастыру ушин пернени басыныз...";
        std::cin.ignore();
        std::cin.get();
    }
    void ozgertu(int n)
    {
        system("cls");
        student s;
        fstream infile;
        infile.open("Report.txt", ios::binary | ios::in | ios::out);
        if (infile.fail())
        {
            std::cout<< "ФАЙЛ АШЫЛМАЙДЫ..." << endl;
            std::cin.ignore();
            std::cin.get();
        }
        bool checker = false;
        std::cout<< "\t\t\t\t==========МАЛИМЕТКЕ ОЗГЕРИС ЕНГИЗУ==========\n\n";
        while (!infile.eof() && checker == false)
        {
            infile.read(reinterpret_cast<char *>(&s), sizeof(student));
            {
                if (s.nom == n)
                {
                    std::cout<< "\t\t\tАТЫ-ЖОНИ :" << s.name << endl;
                    std::cout<< "\t\t\tТОБЫ :" << s.gr << endl;
                    std::cout<< "\t\t\tID НОМЕРИ :" << s.nom << endl;
                    std::cout<< "\t\t\tБагалары:" << endl;
                    std::cout<< "\t\t\t\tБАГДАРЛАМАЛАУ ТИЛДЕРИ: С, С++ :" << s.pro << endl;
                    std::cout<< "\t\t\t\tДИСКРЕТТИК КУРЫЛЫМДАР :" << s.ds << endl;
                    std::cout<< "\t\t\t\tСАЯСАТТАНУ :" << s.saya << endl;
                    std::cout<< "============================================="
                         << endl;
                    std::cout<< "\t\tЖАНА МАЛИМЕТТИ ЕНГИЗИНИЗ" << endl;
                    std::cout<< "============================================="
                         << endl;
                    std::cout<< "АТЫ-ЖОНИ :";
                    std::cin.ignore();
                    std::cin.getline(s.name, 80);
                    std::cout<< "ТОБЫ :";
                    std::cin.get(s.gr, 80);
                    std::cout<< "ID НОМЕРИ :";
                    while (!(std::cin >> s.nom) || (std::cin.peek() != '\n'))
                    {
                        std::cin.clear();
                        while (std::cin.get() != '\n')
                            ;
                        std::cout<< "Кате! Бутин сан болуы кажет! Кайта енгизип кориниз!" << endl;
                        std::cout<< "ID НОМЕРИ :";
                    }
                pro:
                    std::cout<< "БАГДАРЛАМАЛАУ ТИЛДЕРИ:С, С++ :";
                    while (!(std::cin >> s.pro))
                    {
                        std::cin.clear();
                        while (std::cin.get() != '\n')
                            ;
                        std::cout<< "Кате! Накты сан болуы кажет! Кайта енгизип кориниз!" << endl;
                        std::cout<< "БАГДАРЛАМАЛАУ ТИЛДЕРИ:С, С++ :";
                    }
                    if (s.pro < 0 || s.pro > 100)
                    {
                        std::cout<< "\tБАГА 0-100 АРАЛЫГЫНДА БОЛУ КЕРЕК\n КАЙТА ЕНГИЗИНИЗ\n";
                        goto pro;
                    }
                ds:
                    std::cout<< "ДИСКРЕТТИК КУРЫЛЫМДАР :";
                    while (!(std::cin >> s.ds))
                    {
                        std::cin.clear();
                        while (std::cin.get() != '\n')
                            ;
                        std::cout<< "Кате! Накты сан болуы кажет! Кайта енгизип кориниз!" << endl;
                        std::cout<< "ДИСКРЕТТИК КУРЫЛЫМДАР :";
                    }
                    if (s.ds < 0 || s.ds > 100)
                    {
                        std::cout<< "\tБАГА 0-100 АРАЛЫГЫНДА БОЛУ КЕРЕК\n КАЙТА ЕНГИЗИНИЗ\n";
                        goto ds;
                    }
                saya:
                    std::cout<< "САЯСАТТАНУ :";
                    while (!(std::cin >> s.saya))
                    {
                        std::cin.clear();
                        while (std::cin.get() != '\n')
                            ;
                        std::cout<< "Кате! Накты сан болуы кажет! Кайта енгизип кориниз!" << endl;
                        std::cout<< "САЯСАТТАНУ :";
                    }
                    if (s.saya < 0 || s.saya > 100)
                    {
                        std::cout<< "\tБАГА 0-100 АРАЛЫГЫНДА БОЛУ КЕРЕК\n КАЙТА ЕНГИЗИНИЗ\n";
                        goto saya;
                    }
                    s.sum = s.pro + s.ds + s.saya;
                    s.gpa = ((s.sum / 3) * 0.04);
                    int pos = (-1) * static_cast<int>(sizeof(student));
                    infile.seekp(pos, ios::cur);
                    infile.write(reinterpret_cast<char *>(&s),
                                 sizeof(student));
                    std::cout<< endl;
                    std::cout<< "\t\t\t\tМАЛИМЕТТЕРДИ ОЗГЕРТУ САТТИ АЯКТАЛДЫ" << endl;
                    checker = true;
                }
            }
        }
        infile.close();
        if (checker == false)
            std::cout<< "\t\t\t\tМАЛИМЕТ ТАБЫЛМАДЫ" << endl;
        std::cout<< endl;
        std::cout<< "жалгастыру ушин пернени басыныз...";
        std::cin.ignore();
        std::cin.get();
    }
    void oshiru(int n)
    {
        student s;
        int r;
        ifstream infile;
        infile.open("Report.txt", ios::binary);
        if (!infile)
        {
            std::cout<< "ФАЙЛ АШЫЛМАЙДЫ..." << endl;
            std::cin.ignore();
            std::cin.get();
        }
        ofstream outfile;
        outfile.open("Record2.txt", ios::binary);
        infile.seekg(0, ios::beg);
        std::cout<< "\t\t\t\t=============================================\n\n";
        while (infile.read(reinterpret_cast<char *>(&s), sizeof(student)))
        {
            if (s.nom != n)
            {
                outfile.write(reinterpret_cast<char *>(&s), sizeof(student));
            }
            else
            {
                std::cout<< "\t\t\t\tМАЛИМЕТ ЖОЙЫЛДЫ" << endl;
            }
        }
        infile.close();
        outfile.close();
        remove("Report.txt");
        r = rename("Record2.txt", "Report.txt");
        std::cout<< "жалгастыру ушин пернени басыныз...";
        std::cin.ignore();
        std::cin.get();
    }
    void barinoshiru()
    {
        int r;
        ifstream infile;
        infile.open("Report.txt", ios::binary);
        if (!infile)
        {
            std::cout<< "ФАЙЛ АШЫЛМАЙДЫ..." << endl;
            std::cin.ignore();
            std::cin.get();
        }
        ofstream outfile;
        outfile.open("Record2.txt", ios::binary);
        infile.seekg(0, ios::beg);
        std::cout<< "\t\t\t\t=============================================\n\n";
        infile.close();
        outfile.close();
        remove("Report.txt");
        r = rename("Record2.txt", "Report.txt");
        std::cout<< "БАРЛЫК МАЛИМЕТТЕР ЖОЙЫЛДЫ\n"
             << endl;
        std::cout<< "жалгастыру ушин пернени басыныз...";
        std::cin.ignore();
        std::cin.get();
    }
    void anyktama(int n)
    {
        system("cls");
        student s;
        ofstream out;
        out.open("Справка.doc");
        if (out.fail())
        {
            std::cout<< "ФАЙЛ АШЫЛМАДЫ..." << endl;
            std::cin.ignore();
            std::cin.get();
        }
        ifstream infile;
        infile.open("Report.txt", ios::app | ios::binary);
        if (infile.fail())
        {
            std::cout<< "ФАЙЛ АШЫЛМАДЫ...";
            std::cin.ignore();
            std::cin.get();
        }
        bool y = false;
        std::cout<< "\t\t\t\t==========АНЫКТАМА БЕРУ==========\n\n";
        while (infile.read(reinterpret_cast<char *>(&s), sizeof(student)))
        {
            if (s.nom == n)
            {
                out << "\n\n";
                out << "\t\t\t\t\t АНЫКТАМА\n\n";
                out << "\tАзамат(ша) " << s.name << " берилген, ол ис жузинде Л.Н.Гумилев атындагы Еуразия улттык университетинин (мемлекеттик лицензиясы KZ39LAA00007162, берилген куни 31.05.2016 жыл, мерзими шексиз) оку тури кундизги болиминде " << s.gr << " тобынын билим алушысы болып табылады\nОкыту формасы: Мемлекеттик грант\nАныктама 2020-2021 оку жылына жарамды\nОку орындагы оку мерзими: 4 жыл\n\n\n\nМ О\n\nБилим алушыларга кызмет\nкорсету орталыгынын жетекшиси \t\t Канагатова Раушан Нурсагатовна" << endl;
                std::cout<< "\t\t\t\tАныктама берилди" << endl;
                y = true;
            }
        }
        infile.close();
        if (y == false)
            std::cout<< "\t\t\t\tМАЛИМЕТ ТАБЫЛМАДЫ..." << endl;
        std::cout<< endl;
        out.close();
        std::cout<< endl;
        std::cout<< "жалгастыру ушин пернени басыныз...";
        std::cin.ignore();
        std::cin.get();
    }
};


int main()
{
    // SetConsoleOutputCP(1251);
    // SetConsoleCP(1251);
    student s;
    system("color cf");
    char c;
    system("cls");
    s.kirispe();
    do
    {
        std::cout<< "\n\n\n";
        std::cout<< endl;
        std::cout<< "\t\t\t\t\t <<< 1. БАС МАЗИР >>>\n\n";
        std::cout<< "\t\t\t\t\t <<< 2. ШЫГУ >>>\n\n";
        std::cout<< "\t Тандау жасаныз :";
        std::cin >> c;
        system("cls");
        switch (c)
        {
        case '1':
        {
            s.basmazir();
            break;
        }
        case '2':
        {
            std::cout<< "\n\n";
            std::cout<< "\t\t\t\t РАХМЕТ, САУ БОЛЫНЫЗ! " << endl;
            std::cout<< "=======================================================================================" << endl;
            std::cout<< "\n\n";
            std::cout<< "\t КЕРИ БАЙЛАНЫС";
            std::cout<< "\n\n\n";
            std::cout<< "\t АТЫ-ЖОНИ БАЙЛАНЫС НОМЕРИ \n\n";
            std::cout<< "\t 1. Нургазиев Аслан Администратор +77474461688 \n\n";
            std::cout<< "\t 2. Мырзарахимова Жанар Эдвайзер +77756489069 \n\n";
            std::cout<< "\t 3. Газизова Назерке Багдарлама жасаушы +77474058836 \n\n";
            std::cout<< "\t 4. Кажибеков Максат Call-center +77001257770 \n\n";
            std::cout<< "\n\n";
            std::cout<< "\n\n";
        }
        }
    } while (c != '2');
    return 0;
}