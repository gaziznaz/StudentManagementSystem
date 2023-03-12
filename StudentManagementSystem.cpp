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
    double pro, ds, pol, sum, gpa;

public:
    void newStudent()
    {
        system("cls");
        student s;
        ofstream outfile;
        outfile.open("Report.txt", ios::app | ios::binary);
        if (outfile.fail())
        {
            std::cout << "error: can`t open file..." << endl;
            std::cin.ignore();
            std::cin.get();
        }
        std::cout << "\n\n";
        std::cout << "\t\t\t\t=======ADD NEW STUDENT========\n\n";
        std::cout << "FULL NAME : ";
        std::cin.ignore();
        std::cin.getline(s.name, 80);
        std::cout << "GROUP : ";
        std::cin.get(s.gr, 80);
        std::cout << "ID : ";
        while (!(std::cin >> s.nom) || (std::cin.peek() != '\n'))
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
                ;
            std::cout << "error: Score must be an integer. Try again!" << endl;
            std::cout << "ID :";
        }
        std::cout << "GRADES:" << endl;
    pro:
        std::cout << "\tPROGRAM LANGUAGES: C, C++ :";
        while (!(std::cin >> s.pro))
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
                ;
            std::cout << "error: Score must be an integer. Try again!" << endl;
            std::cout << "\tPROGRAM LANGUAGES: C, C++ :";
        }
        if (s.pro < 0 || s.pro > 100)
        {
            std::cout << "\terror: Score must be between 0-100.\n Try again!\n";
            goto pro;
        }
    ds:
        std::cout << "\tDISCRETE STRUCTURES :";
        while (!(std::cin >> s.ds))
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
                ;
            std::cout << "error: Score must be an integer. Try again!" << endl;
            std::cout << "\tPROGRAM LANGUAGES: C, C++ :";
        }
        if (s.ds < 0 || s.ds > 100)
        {
            std::cout << "\terror: Score must be between 0-100.\n Try again!\n";
            goto ds;
        }
    pol:
        std::cout << "\tPOLITICAL SCIENCE :";
        while (!(std::cin >> s.pol))
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
                ;
            std::cout << "error: Score must be an integer. Try again!" << endl;
            std::cout << "\tPROGRAM LANGUAGES: C, C++ :";
        }
        if (s.pol < 0 || s.pol > 100)
        {
            std::cout << "\terror: Score must be between 0-100.\n Try again!\n";
            goto pol;
        }
        s.sum = s.pro + s.ds + s.pol;
        s.gpa = ((s.sum / 3) * 0.04);
        outfile.write(reinterpret_cast<char *>(&s), sizeof(student));
        outfile.close();
        std::cout << endl;
        std::cout << "\t\t\t\tNEW STUDENT ADDED" << endl;
        std::cout << endl;
        std::cout << "press enter to continue...";
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
    void welcome()
    {
        std::cout << "\n\n\n";
        mySleep(300);
        std::cout << "\t\t\t *     *  ****  *      ****   ***   *     *  ****  * " << endl;
        mySleep(300);
        std::cout << "\t\t\t *  *  *  *     *     *      *   *  **   **  *     * " << endl;
        mySleep(300);
        std::cout << "\t\t\t *  *  *  ****  *     *      *   *  *  *  *  ****  * " << endl;
        mySleep(300);
        std::cout << "\t\t\t *  *  *  *     *     *      *   *  *     *  * " << endl;
        mySleep(300);
        std::cout << "\t\t\t  ** **   ****  ****   ****   ***   *     *  ****  * " << endl;
        mySleep(300);
        std::cout << endl;
        std::cout << "\t\t\t\t\t -------------------------------" << endl;
        mySleep(500);
        std::cout << "\t\t\t\t\t   STUDENT MANAGEMENT SYSTEM" << endl;
        mySleep(500);
        std::cout << "\t\t\t\t\t -------------------------------" << endl;
        mySleep(500);
    }
    void Menu()
    {
        system("color 5f");
        char cc;
        char cl;
        std::cout << "\t\t\t\t=================MENU================\n\n"
                  << endl;
        mySleep(300);
        std::cout << "\t\t\t\t1. ADD NEW STUDENT\n\n"
                  << endl;
        mySleep(200);
        std::cout << "\t\t\t\t2. VIEWING DATA\n\n"
                  << endl;
        mySleep(200);
        std::cout << "\t\t\t\t3. SEARCH FOR STUDENTS\n\n"
                  << endl;
        mySleep(200);
        std::cout << "\t\t\t\t4. CHANGE DATA\n\n"
                  << endl;
        mySleep(200);
        std::cout << "\t\t\t\t5. REGISTER\n\n"
                  << endl;
        mySleep(200);
        std::cout << "\t\t\t\t6. DELETE STUDENT DATA\n\n"
                  << endl;
        mySleep(200);
        std::cout << "\t\t\t\t7. GET REFERENCE \n\n"
                  << endl;
        mySleep(200);
        std::cout << "\t\t\t\t8. <- BACK \n"
                  << endl;
        mySleep(200);
        std::cout << "\t\t\t\t==============================" << endl;
        mySleep(300);
        std::cout << "\t\t\t\tMAKE A CHOICE: <1-8> :";
        mySleep(300);
        std::cin >> cc;
        std::cout << endl;
        switch (cc)
        {
        case '1':
        {
            newStudent();
            break;
        }
        case '2':
        {
            all();
            break;
        }
        case '3':
        {
            int n;
            std::cout << "PLEARE ENTER STUDENT ID :";
            std::cin >> n;
            astudent(n);
            break;
        }
        case '4':
        {
            int n;
            std::cout << "PLEARE ENTER STUDENT ID :";
            std::cin >> n;
            change(n);
            break;
        }
        case '5':
        {
            regist();
            break;
        }
        case '6':
        {
            system("cls");
            std::cout << "\t\t\t\t===========DELETE STUDENT DATA==========\n\n";
            std::cout << "\t\t\t\t1. DELETE STUDENT DATA\n\n"
                      << endl;
            std::cout << "\t\t\t\t2. DELETE DATA FOR ALL STUDENTS\n\n"
                      << endl;
            std::cout << "\t\t\t\t3. <- BACK\n\n"
                      << endl;
            std::cout << "\t\t\t\tMAKE A CHOICE:";
            std::cin >> cl;
            std::cout << endl;
            switch (cl)
            {
            case '1':
            {
                int n;
                std::cout << "ENTER THE STUDENT ID:";
                std::cin >> n;
                std::cout << endl;
                del(n);
                break;
            }
            case '2':
            {
                deleteAll();
                break;
            }
            case '3':
            {
                Menu();
                break;
            }
            }
            break;
        }
        case '7':
        {
            int n;
            std::cout << " ENTER YOUR ID TO GET REFERENCE:";
            std::cin >> n;
            reference(n);
            break;
        }
        case '8':
        {
            break;
        }
        }
    }
    void all()
    {
        system("cls");
        student s;
        ifstream infile;
        bool check = false;
        infile.open("Report.txt", ios::app | ios::binary);
        if (infile.fail())
        {
            std::cout << "error: can`t open file..." << endl;
            std::cin.ignore();
            std::cin.get();
        }
        std::cout << "\n\n";
        std::cout << "\t\t\t\tDATA OF ALL STUDENTS" << endl;
        std::cout << "==================================================================================" << endl;
        while (infile.read(reinterpret_cast<char *>(&s), sizeof(student)))
        {
            std::cout << "\t\t\tFULL NAME :" << s.name << endl;
            std::cout << "\t\t\tGROUP :" << s.gr << endl;
            std::cout << "\t\t\tID :" << s.nom << endl;
            std::cout << "\t\t\tGRADES:" << endl;
            std::cout << "\t\t\t\tPROGRAM LANGUAGES: C, C++ :" << s.pro << endl;
            std::cout << "\t\t\t\tDISCRETE STRUCTURES :" << s.ds << endl;
            std::cout << "\t\t\t\tPOLITICAL SCIENCE :" << s.pol << endl;
            std::cout << "\t\t\tGPA :" << s.gpa << endl;
            std::cout << "==================================================================================" << endl;
            check = true;
        }
        infile.close();
        if (check == false)
            std::cout << "\t\t\t\tINFO NOT FOUND..." << endl
                      << endl;
        std::cout << "press enter to continue...";
        std::cin.ignore();
        std::cin.get();
    }
    void astudent(int n)
    {
        system("cls");
        student s;
        ifstream infile;
        infile.open("Report.txt", ios::app | ios::binary);
        if (infile.fail())
        {
            std::cout << "error: can`t open file...";
            std::cin.ignore();
            std::cin.get();
        }
        bool equality = false;
        std::cout << "\t\t\t\t============STUDENT'S PERSONAL DATA============\n\n";
        while (infile.read(reinterpret_cast<char *>(&s), sizeof(student)))
        {
            if (s.nom == n)
            {
                std::cout << "\t\t\tFULL NAME :" << s.name << endl;
                std::cout << "\t\t\tGROUP :" << s.gr << endl;
                std::cout << "\t\t\tID :" << s.nom << endl;
                std::cout << "\t\t\tGRADES:" << endl;
                std::cout << "\t\t\t\tPROGRAM LANGUAGES: C, C++ :" << s.pro << endl;
                std::cout << "\t\t\t\tDISCRETE STRUCTURES :" << s.ds << endl;
                std::cout << "\t\t\t\tPOLITICAL SCIENCE :" << s.pol << endl;
                std::cout << "\t\t\tGPA :" << s.gpa << endl;
                std::cout << "\t\t\t\t================================================" << endl;
                equality = true;
            }
        }
        infile.close();
        if (equality == false)
            std::cout << "\t\t\t\tINFO NOT FOUND..." << endl;
        std::cout << endl;
        std::cout << "press enter to continue...";
        std::cin.ignore();
        std::cin.get();
    }
    void regist()
    {
        system("cls");
        student s;
        ifstream infile;
        bool eq = false;
        infile.open("Report.txt", ios::app | ios::binary);
        if (infile.fail())
        {
            std::cout << "error: can`t open file...";
            std::cin.ignore();
            std::cin.get();
        }
        std::cout << "\n\n";
        std::cout << "\t\t\t\tREGISTER" << endl;
        std::cout << "=======================================================================================" << endl;
        std::cout << "\t\t\tС, С++ \tDISCRETE S.\tPOLITICAL S.\t| GPA" << endl;
        std::cout << "=======================================================================================" << endl;
        while (infile.read(reinterpret_cast<char *>(&s), sizeof(student)))
        {
            std::cout << "\t\t\t\t\n"
                      << s.name << "\t" << s.pro << "\t\t" << s.ds
                      << "\t\t" << s.pol << "\t| " << s.gpa << endl;
            std::cout << "=======================================================================================" << endl;
            eq = true;
        }
        infile.close();
        if (eq == false)
            std::cout << "\t\t\t\tINFO NOT FOUND..." << endl
                      << endl;
        std::cout << "press enter to continue...";
        std::cin.ignore();
        std::cin.get();
    }
    void change(int n)
    {
        system("cls");
        student s;
        fstream infile;
        infile.open("Report.txt", ios::binary | ios::in | ios::out);
        if (infile.fail())
        {
            std::cout << "error: can`t open file..." << endl;
            std::cin.ignore();
            std::cin.get();
        }
        bool checker = false;
        std::cout << "\t\t\t\t==========CHANGE DATA==========\n\n";
        while (!infile.eof() && checker == false)
        {
            infile.read(reinterpret_cast<char *>(&s), sizeof(student));
            {
                if (s.nom == n)
                {
                    std::cout << "\t\t\tFULL NAME :" << s.name << endl;
                    std::cout << "\t\t\tGROUP :" << s.gr << endl;
                    std::cout << "\t\t\tID :" << s.nom << endl;
                    std::cout << "\t\t\tGRADES:" << endl;
                    std::cout << "\t\t\t\tPROGRAM LANGUAGES: C, C++ :" << s.pro << endl;
                    std::cout << "\t\t\t\tDISCRETE STRUCTURES :" << s.ds << endl;
                    std::cout << "\t\t\t\tPOLITICAL SCIENCE :" << s.pol << endl;
                    std::cout << "============================================="
                              << endl;
                    std::cout << "\t\tENTER A NEW DATA" << endl;
                    std::cout << "============================================="
                              << endl;
                    std::cout << "FULL NAME :";
                    std::cin.ignore();
                    std::cin.getline(s.name, 80);
                    std::cout << "GROUP :";
                    std::cin.get(s.gr, 80);
                    std::cout << "ID :";
                    while (!(std::cin >> s.nom) || (std::cin.peek() != '\n'))
                    {
                        std::cin.clear();
                        while (std::cin.get() != '\n')
                            ;
                        std::cout << "error: Score must be an integer. Try again!" << endl;
                        std::cout << "ID :";
                    }
                pro:
                    std::cout << "PROGRAM LANGUAGES: C, C++ :";
                    while (!(std::cin >> s.pro))
                    {
                        std::cin.clear();
                        while (std::cin.get() != '\n')
                            ;
                        std::cout << "error: Score must be an integer. Try again!" << endl;
                        std::cout << "PROGRAM LANGUAGES: C, C++ :";
                    }
                    if (s.pro < 0 || s.pro > 100)
                    {
                        std::cout << "\terror: Score must be between 0-100.\n Try again!\n";
                        goto pro;
                    }
                ds:
                    std::cout << "DISCRETE STRUCTURES :";
                    while (!(std::cin >> s.ds))
                    {
                        std::cin.clear();
                        while (std::cin.get() != '\n')
                            ;
                        std::cout << "error: Score must be an integer. Try again!" << endl;
                        std::cout << "DISCRETE STRUCTURES :";
                    }
                    if (s.ds < 0 || s.ds > 100)
                    {
                        std::cout << "\terror: Score must be between 0-100.\n Try again!\n";
                        goto ds;
                    }
                pol:
                    std::cout << "POLITICAL SCIENCE :";
                    while (!(std::cin >> s.pol))
                    {
                        std::cin.clear();
                        while (std::cin.get() != '\n')
                            ;
                        std::cout << "error: Score must be an integer. Try again!" << endl;
                        std::cout << "POLITICAL SCIENCE :";
                    }
                    if (s.pol < 0 || s.pol > 100)
                    {
                        std::cout << "\terror: Score must be between 0-100.\n Try again!\n";
                        goto pol;
                    }
                    s.sum = s.pro + s.ds + s.pol;
                    s.gpa = ((s.sum / 3) * 0.04);
                    int pos = (-1) * static_cast<int>(sizeof(student));
                    infile.seekp(pos, ios::cur);
                    infile.write(reinterpret_cast<char *>(&s),
                                 sizeof(student));
                    std::cout << endl;
                    std::cout << "\t\t\t\tCHANGES SAVED" << endl;
                    checker = true;
                }
            }
        }
        infile.close();
        if (checker == false)
            std::cout << "\t\t\t\tINFO NOT FOUND" << endl;
        std::cout << endl;
        std::cout << "press enter to continue...";
        std::cin.ignore();
        std::cin.get();
    }
    void del(int n)
    {
        student s;
        int r;
        ifstream infile;
        infile.open("Report.txt", ios::binary);
        if (!infile)
        {
            std::cout << "error: can`t open file..." << endl;
            std::cin.ignore();
            std::cin.get();
        }
        ofstream outfile;
        outfile.open("Record2.txt", ios::binary);
        infile.seekg(0, ios::beg);
        std::cout << "\t\t\t\t=============================================\n\n";
        while (infile.read(reinterpret_cast<char *>(&s), sizeof(student)))
        {
            if (s.nom != n)
            {
                outfile.write(reinterpret_cast<char *>(&s), sizeof(student));
            }
            else
            {
                std::cout << "\t\t\t\tDATA DELETED" << endl;
            }
        }
        infile.close();
        outfile.close();
        remove("Report.txt");
        r = rename("Record2.txt", "Report.txt");
        std::cout << "press enter to continue...";
        std::cin.ignore();
        std::cin.get();
    }
    void deleteAll()
    {
        int r;
        ifstream infile;
        infile.open("Report.txt", ios::binary);
        if (!infile)
        {
            std::cout << "error: can`t open file..." << endl;
            std::cin.ignore();
            std::cin.get();
        }
        ofstream outfile;
        outfile.open("Record2.txt", ios::binary);
        infile.seekg(0, ios::beg);
        std::cout << "\t\t\t\t=============================================\n\n";
        infile.close();
        outfile.close();
        remove("Report.txt");
        r = rename("Record2.txt", "Report.txt");
        std::cout << "ALL DATA IS REMOVED\n"
                  << endl;
        std::cout << "press enter to continue...";
        std::cin.ignore();
        std::cin.get();
    }
    void reference(int n)
    {
        system("cls");
        student s;
        ofstream out;
        out.open("reference.doc");
        if (out.fail())
        {
            std::cout << "error: can`t open file..." << endl;
            std::cin.ignore();
            std::cin.get();
        }
        ifstream infile;
        infile.open("Report.txt", ios::app | ios::binary);
        if (infile.fail())
        {
            std::cout << "error: can`t open file...";
            std::cin.ignore();
            std::cin.get();
        }
        bool y = false;
        std::cout << "\t\t\t\t==========GET REFERENCE==========\n\n";
        while (infile.read(reinterpret_cast<char *>(&s), sizeof(student)))
        {
            if (s.nom == n)
            {
                out << "\n\n";
                out << "\t\t\t\t\t REFERENCE\n\n";
                out << "\tThis reference is given to " << s.name << "  to confirm that he(she) is a student of L.N.Gumilyov Eurasian National University NPJSC (state license No. No KZ53LAA00018550, date of issue 06.08.2020 year without time limitation) of the 3 year of full-time study in group " << s.gr << ". \nPresent reference is valid for 2021-2022 academic year\nThe term of study at the university is 4 years.\n\n\n\nThe document was signed by: Head of the registrar`s office Kydyrbaeva A.T.tel +7(7172) 70-95-00" << endl;
                std::cout << "\t\t\t\tReference issued" << endl;
                y = true;
            }
        }
        infile.close();
        if (y == false)
            std::cout << "\t\t\t\tINFO NOT FOUND..." << endl;
        std::cout << endl;
        out.close();
        std::cout << endl;
        std::cout << "press enter to continue...";
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
    s.welcome();
    do
    {
        std::cout << "\n\n\n";
        std::cout << endl;
        std::cout << "\t\t\t\t\t <<< 1. MENU >>>\n\n";
        std::cout << "\t\t\t\t\t <<< 2. EXIT >>>\n\n";
        std::cout << "\t MAKE A CHOICE:";
        std::cin >> c;
        system("cls");
        switch (c)
        {
        case '1':
        {
            s.Menu();
            break;
        }
        case '2':
        {
            std::cout << "\n\n";
            std::cout << "\t\t\t\t GOOD BYE! " << endl;
            std::cout << "=======================================================================================" << endl;
            std::cout << "\n\n";
            std::cout << "\t FEEDBACK";
            std::cout << "\n\n\n";
            std::cout << "\t ADVIZER +77756489069 \n\n";
            std::cout << "\t Call-center 7770 \n\n";
            std::cout << "\n\n";
            std::cout << "\n\n";
        }
        }
    } while (c != '2');
    return 0;
}