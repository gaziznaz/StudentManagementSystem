#include <iostream>
#include<fstream>
#include<windows.h>
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
cout << "ФАЙЛ АШЫЛМАДЫ..." << endl;
cin.ignore();
cin.get();
}
cout << "\n\n";
cout << "\t\t\t\t=======ЖАНА СТУДЕНТ ЕНГИЗУ========\n\n";
cout << "АТЫ-ЖОНИ :";
cin.ignore();
cin.getline(s.name, 80);
cout << "ТОБЫ : ";
cin.get(s.gr, 80);
cout << "ID НОМЕРИ :";
while (!(cin >> s.nom) || (cin.peek() != '\n'))
{
cin.clear();
while (cin.get() != '\n');
cout << "Кате! Бутин сан болуы керек! Кайта енгизип кориниз!" <<
endl;
cout << "ID НОМЕРИ :";
}
cout << "Багалары:" << endl;
pro:
cout << "\tБАГДАРЛАМАЛАУ ТИЛДЕРИ:С, С++ :";
while (!(cin >> s.pro))
{
cin.clear();
while (cin.get() != '\n');
cout << "Кате! Накты сан болуы кажет! Кайта енгизип кориниз!" <<
endl;
cout << "\tБАГДАРЛАМАЛАУ ТИЛДЕРИ:С, С++ :";
}
if (s.pro < 0 || s.pro>100) {
cout << "\tБАГА 0-100 АРАЛЫГЫНДА БОЛУ КЕРЕК\n КАЙТА ЕНГИЗИНИЗ\n";
goto pro;
}
ds:
cout << "\tДИСКРЕТТИК КУРЫЛЫМДАР :";
while (!(cin >> s.ds))
{
cin.clear();
while (cin.get() != '\n');
cout << "Кате! Накты сан болуы кажет! Кайта енгизип кориниз!" <<
endl;
cout << "\tБАГДАРЛАМАЛАУ ТИЛДЕРИ:С, С++ :";
}
if (s.ds < 0 || s.ds>100) {
cout << "\tБАГА 0-100 АРАЛЫГЫНДА БОЛУ КЕРЕК\n КАЙТА ЕНГИЗИНИЗ\n";
goto ds;
}
saya:
cout << "\tСАЯСАТТАНУ :";
while (!(cin >> s.saya))
{
cin.clear();
while (cin.get() != '\n');
cout << "Кате! Накты сан болуы кажет! Кайта енгизип кориниз!" <<
endl;
cout << "\tБАГДАРЛАМАЛАУ ТИЛДЕРИ:С, С++ :";
}
if (s.saya < 0 || s.saya>100) {
cout << "\tБАГА 0-100 АРАЛЫГЫНДА БОЛУ КЕРЕК\n КАЙТА ЕНГИЗИНИЗ\n";
goto saya;
}
s.sum = s.pro + s.ds + s.saya;
s.gpa = ((s.sum /3)*0.04);
outfile.write(reinterpret_cast<char*> (&s), sizeof(student));
outfile.close();
cout << endl;
cout << "\t\t\t\tЖАНА СТУДЕНТ ЕНГИЗИЛДИ" << endl;
cout << endl;
cout << "жалгастыру ушин пернени басыныз...";
cin.ignore();
cin.get();
}
void kirispe()
{
cout << "\n\n\n";
Sleep(300);
cout << "\t\t\t * * *** * * * * * **** * *** *
* * * **** " << endl;
Sleep(300);
cout << "\t\t\t * * * * * * * * * * ** * * *
* * * * " << endl;
Sleep(300);
cout << "\t\t\t ** * * * * * ** **** * * * * *
**** * ** " << endl;
Sleep(300);
cout << "\t\t\t * * * * * * * * * * * * * ***** *
* ** * * " << endl;
Sleep(300);
cout << "\t\t\t * * *** ******* * * **** * * * * *
* * * **** " << endl;
Sleep(300);
cout << endl;
cout << "\t\t\t\t\t -------------------------------" << endl;
Sleep(500);
cout << "\t\t\t\t\t СТУДЕНТТЕРДИ БАСКАРУ ЖУЙЕСИ" << endl;
Sleep(500);
cout << "\t\t\t\t\t -------------------------------" << endl;
Sleep(500);
}
void basmazir()
{
system("color 5f");
char cc;
char cl;
cout << "\t\t\t\t=================БАС МАЗИР================\n\n" <<
endl;
Sleep(300);
cout << "\t\t\t\t1. ЖАНА СТУДЕНТ ЕНГИЗУ\n\n" << endl;
Sleep(200);
cout << "\t\t\t\t2. МАЛИМЕТТЕРДИ КОРУ\n\n" << endl;
Sleep(200);
cout << "\t\t\t\t3. СТУДЕНТТИ ИЗДЕУ\n\n" << endl;
Sleep(200);
cout << "\t\t\t\t4. МАЛИМЕТКЕ ОЗГЕРИС ЕНГИЗУ\n\n" << endl;
Sleep(200);
cout << "\t\t\t\t5. ЖУРНАЛ\n\n" << endl;
Sleep(200);
cout << "\t\t\t\t6. СТУДЕНТ МАЛИМЕТТЕРИН ЖОЮ\n\n" << endl;
Sleep(200);
cout << "\t\t\t\t7. АНЫКТАМА АЛУ \n\n" << endl;
Sleep(200);
cout << "\t\t\t\t8. <- АРТКА \n" << endl;
Sleep(200);
cout << "\t\t\t\t==============================" << endl;
Sleep(300);
cout << "\t\t\t\tТАНДАУ ЖАСАНЫЗ: <1-8> :";
Sleep(300);
cin >> cc;
cout << endl;
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
cout << "СТУДЕНТТИН ID НОМЕРИН ЕНГИЗИНИЗ :";
cin >> n;
zheke_student(n);
break;
}
case '4':
{
int n;
cout << "СТУДЕНТТИН ID НОМЕРИН ЕНГИЗИНИЗ :";
cin >> n;
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
cout << "\t\t\t\t===========СТУДЕНТ МАЛИМЕТТЕРИН
ЖОЮ==========\n\n";
cout << "\t\t\t\t1. ЖЕКЕ СТУДЕНТТИН МАЛИМЕТИН ЖОЮ\n\n" << endl;
cout << "\t\t\t\t2. БАРЛЫК СТУДЕНТТЕРДИН МАЛИМЕТТЕРИН ЖОЮ\n\n" <<
endl;
cout << "\t\t\t\t3. <- АРТКА\n\n" << endl;
cout << "\t\t\t\tТАНДАУ ЖАСАНЫЗ:";
cin >> cl;
cout << endl;
switch (cl)
{
case '1':
{
int n;
cout << "СТУДЕНТТИН ID НОМЕРИН ЕНГИЗИНИЗ :";
cin >> n;
cout << endl;
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
cout << " АНЫКТАМА АЛГЫНЫЗ КЕЛГЕН СТУДЕНТТИН ID НОМЕРИН ЕНГИЗИНИЗ
:";
cin >> n;
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
cout << "ФАЙЛ АШЫЛМАДЫ..." << endl;
cin.ignore();
cin.get();
}
cout << "\n\n";
cout << "\t\t\t\tБАРЛЫК СТУДЕНТТЕРДИН МАЛИМЕТТЕРИ" << endl;
cout <<
"============================================================================
======" << endl;
while (infile.read(reinterpret_cast<char*>(&s), sizeof(student)))
{
cout << "\t\t\tАТЫ-ЖОНИ :" << s.name << endl;
cout << "\t\t\tТОБЫ :" << s.gr << endl;
cout << "\t\t\tID НОМЕРИ :" << s.nom << endl;
cout << "\t\t\tБагалары:" << endl;
cout << "\t\t\t\tБАГДАРЛАМАЛАУ ТИЛДЕРИ: С, С++ :" << s.pro <<
endl;
cout << "\t\t\t\tДИСКРЕТТИК КУРЫЛЫМДАР :" << s.ds << endl;
cout << "\t\t\t\tСАЯСАТТАНУ :" << s.saya << endl;
cout << "\t\t\tGPA :" << s.gpa << endl;
cout <<
"============================================================================
======" << endl;
check = true;
}
infile.close();
if (check == false)
cout << "\t\t\t\tМАЛИМЕТТЕР ТАБЫЛМАДЫ..." << endl << endl;
cout << "жалгастыру ушин пернени басыныз...";
cin.ignore();
cin.get();
}
void zheke_student(int n)
{
system("cls");
student s;
ifstream infile;
infile.open("Report.txt", ios::app | ios::binary);
if (infile.fail())
{
cout << "ФАЙЛ АШЫЛМАДЫ...";
cin.ignore();
cin.get();
}
bool equality = false;
cout << "\t\t\t\t============ЖЕКЕ СТУДЕНТТИН
МАЛИМЕТИ============\n\n";
while (infile.read(reinterpret_cast<char*>(&s), sizeof(student)))
{
if (s.nom == n)
{
cout << "\t\t\tАТЫ-ЖОНИ :" << s.name << endl;
cout << "\t\t\tТОБЫ :" << s.gr << endl;
cout << "\t\t\tID НОМЕРИ :" << s.nom << endl;
cout << "\t\t\tБагалары:" << endl;
cout << "\t\t\t\tБАГДАРЛАМАЛАУ ТИЛДЕРИ: С, С++ :" << s.pro <<
endl;
cout << "\t\t\t\tДИСКРЕТТИК КУРЫЛЫМДАР :" << s.ds << endl;
cout << "\t\t\t\tСАЯСАТТАНУ :" << s.saya << endl;
cout << "\t\t\tGPA :" << s.gpa << endl;
cout <<
"\t\t\t\t================================================" << endl;
equality = true;
}
}
infile.close();
if (equality == false)
cout << "\t\t\t\tМАЛИМЕТ ТАБЫЛМАДЫ..." << endl;
cout << endl;
cout << "жалгастыру ушин пернени басыныз...";
cin.ignore();
cin.get();
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
cout << "ФАЙЛ АШЫЛМАДЫ...";
cin.ignore();
cin.get();
}
cout << "\n\n";
cout << "\t\t\t\tЖУРНАЛ" << endl;
cout <<
"============================================================================
===========" << endl;
cout << "\t\t\tС, С++ \t Дис.курылым \t Саясаттану \t| GPA" <<
endl;
cout <<
"============================================================================
===========" << endl;
while (infile.read(reinterpret_cast<char*>(&s), sizeof(student)))
{
cout << "\t\t\t\t\n" << s.name << "\t" << s.pro << "\t\t" << s.ds
<< "\t\t" << s.saya <<"\t| "<<s.gpa<< endl;
cout <<
"============================================================================
===========" << endl;
eq = true;
}
infile.close();
if (eq == false)
cout << "\t\t\t\tМАЛИМЕТТЕР ТАБЫЛМАДЫ..." << endl << endl;
cout << "жалгастыру ушин пернени басыныз...";
cin.ignore();
cin.get();
}
void ozgertu(int n)
{
system("cls");
student s;
fstream infile;
infile.open("Report.txt", ios::binary | ios::in | ios::out);
if (infile.fail())
{
cout << "ФАЙЛ АШЫЛМАЙДЫ..." << endl;
cin.ignore();
cin.get();
}
bool checker = false;
cout << "\t\t\t\t==========МАЛИМЕТКЕ ОЗГЕРИС ЕНГИЗУ==========\n\n";
while (!infile.eof() && checker == false)
{
infile.read(reinterpret_cast<char*>(&s), sizeof(student));
{
if (s.nom == n)
{
cout << "\t\t\tАТЫ-ЖОНИ :" << s.name << endl;
cout << "\t\t\tТОБЫ :" << s.gr << endl;
cout << "\t\t\tID НОМЕРИ :" << s.nom << endl;
cout << "\t\t\tБагалары:" << endl;
cout << "\t\t\t\tБАГДАРЛАМАЛАУ ТИЛДЕРИ: С, С++ :" <<
s.pro << endl;
cout << "\t\t\t\tДИСКРЕТТИК КУРЫЛЫМДАР :" << s.ds <<
endl;
cout << "\t\t\t\tСАЯСАТТАНУ :" << s.saya << endl;
cout << "============================================="
<< endl;
cout << "\t\tЖАНА МАЛИМЕТТИ ЕНГИЗИНИЗ" << endl;
cout << "============================================="
<< endl;
cout << "АТЫ-ЖОНИ :";
cin.ignore();
cin.getline(s.name, 80);
cout << "ТОБЫ :";
cin.get(s.gr, 80);
cout << "ID НОМЕРИ :";
while (!(cin >> s.nom) || (cin.peek() != '\n'))
{
cin.clear();
while (cin.get() != '\n');
cout << "Кате! Бутин сан болуы кажет! Кайта енгизип
кориниз!" << endl;
cout << "ID НОМЕРИ :";
}
pro:
cout << "БАГДАРЛАМАЛАУ ТИЛДЕРИ:С, С++ :";
while (!(cin >> s.pro))
{
cin.clear();
while (cin.get() != '\n');
cout << "Кате! Накты сан болуы кажет! Кайта енгизип
кориниз!" << endl;
cout << "БАГДАРЛАМАЛАУ ТИЛДЕРИ:С, С++ :";
}
if (s.pro < 0 || s.pro>100) {
cout << "\tБАГА 0-100 АРАЛЫГЫНДА БОЛУ КЕРЕК\n КАЙТА
ЕНГИЗИНИЗ\n";
goto pro;
}
ds:
cout << "ДИСКРЕТТИК КУРЫЛЫМДАР :";
while (!(cin >> s.ds))
{
cin.clear();
while (cin.get() != '\n');
cout << "Кате! Накты сан болуы кажет! Кайта енгизип
кориниз!" << endl;
cout << "ДИСКРЕТТИК КУРЫЛЫМДАР :";
}
if (s.ds < 0 || s.ds>100) {
cout << "\tБАГА 0-100 АРАЛЫГЫНДА БОЛУ КЕРЕК\n КАЙТА
ЕНГИЗИНИЗ\n";
goto ds;
}
saya:
cout << "САЯСАТТАНУ :";
while (!(cin >> s.saya))
{
cin.clear();
while (cin.get() != '\n');
cout << "Кате! Накты сан болуы кажет! Кайта енгизип
кориниз!" << endl;
cout << "САЯСАТТАНУ :";
}
if (s.saya < 0 || s.saya>100) {
cout << "\tБАГА 0-100 АРАЛЫГЫНДА БОЛУ КЕРЕК\n КАЙТА
ЕНГИЗИНИЗ\n";
goto saya;
}
s.sum = s.pro + s.ds + s.saya;
s.gpa = ((s.sum /3)*0.04);
int pos = (-1) * static_cast<int>(sizeof(student));
infile.seekp(pos, ios::cur);
infile.write(reinterpret_cast<char*> (&s),
sizeof(student));
cout << endl;
cout << "\t\t\t\tМАЛИМЕТТЕРДИ ОЗГЕРТУ САТТИ АЯКТАЛДЫ" <<
endl;
checker = true;
}
}
}
infile.close();
if (checker == false)
cout << "\t\t\t\tМАЛИМЕТ ТАБЫЛМАДЫ" << endl;
cout << endl;
cout << "жалгастыру ушин пернени басыныз...";
cin.ignore();
cin.get();
}
void oshiru(int n)
{
student s;
int r;
ifstream infile;
infile.open("Report.txt", ios::binary);
if (!infile)
{
cout << "ФАЙЛ АШЫЛМАЙДЫ..." << endl;
cin.ignore();
cin.get();
}
ofstream outfile;
outfile.open("Record2.txt", ios::binary);
infile.seekg(0, ios::beg);
cout << "\t\t\t\t=============================================\n\n";
while (infile.read(reinterpret_cast<char*>(&s), sizeof(student)))
{
if (s.nom != n)
{
outfile.write(reinterpret_cast<char*>(&s), sizeof(student));
}
else {
cout << "\t\t\t\tМАЛИМЕТ ЖОЙЫЛДЫ" << endl;
}
}
infile.close();
outfile.close();
remove("Report.txt");
r=rename("Record2.txt", "Report.txt");
cout << "жалгастыру ушин пернени басыныз...";
cin.ignore();
cin.get();
}
void barinoshiru() {
int r;
ifstream infile;
infile.open("Report.txt", ios::binary);
if (!infile)
{
cout << "ФАЙЛ АШЫЛМАЙДЫ..." << endl;
cin.ignore();
cin.get();
}
ofstream outfile;
outfile.open("Record2.txt", ios::binary);
infile.seekg(0, ios::beg);
cout << "\t\t\t\t=============================================\n\n";
infile.close();
outfile.close();
remove("Report.txt");
r = rename("Record2.txt", "Report.txt");
cout << "БАРЛЫК МАЛИМЕТТЕР ЖОЙЫЛДЫ\n" << endl;
cout << "жалгастыру ушин пернени басыныз...";
cin.ignore();
cin.get();
}
void anyktama(int n) {
system("cls");
student s;
ofstream out;
out.open("Справка.doc");
if (out.fail())
{
cout << "ФАЙЛ АШЫЛМАДЫ..." << endl;
cin.ignore();
cin.get();
}
ifstream infile;
infile.open("Report.txt", ios::app | ios::binary);
if (infile.fail())
{
cout << "ФАЙЛ АШЫЛМАДЫ...";
cin.ignore();
cin.get();
}
bool y = false;
cout << "\t\t\t\t==========АНЫКТАМА БЕРУ==========\n\n";
while (infile.read(reinterpret_cast<char*>(&s), sizeof(student)))
{
if (s.nom == n)
{
out << "\n\n";
out << "\t\t\t\t\t АНЫКТАМА\n\n";
out << "\tАзамат(ша) " << s.name << " берилген, ол ис жузинде
Л.Н.Гумилев атындагы Еуразия улттык университетинин (мемлекеттик лицензиясы
KZ39LAA00007162, берилген куни 31.05.2016 жыл, мерзими шексиз) оку тури
кундизги болиминде " << s.gr << " тобынын билим алушысы болып табылады\nОкыту
формасы: Мемлекеттик грант\nАныктама 2020-2021 оку жылына жарамды\nОку
орындагы оку мерзими: 4 жыл\n\n\n\nМ О\n\nБилим алушыларга кызмет\nкорсету
орталыгынын жетекшиси \t\t Канагатова Раушан Нурсагатовна" << endl;
cout << "\t\t\t\tАныктама берилди" << endl;
y = true;
}
}
infile.close();
if (y == false)
cout << "\t\t\t\tМАЛИМЕТ ТАБЫЛМАДЫ..." << endl;
cout << endl;
out.close();
cout << endl;
cout << "жалгастыру ушин пернени басыныз...";
cin.ignore();
cin.get();
}
};
int main()
{
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
student s;
system("color cf");
char c;
system("cls");
s.kirispe();
do {
cout << "\n\n\n";
cout << endl;
cout << "\t\t\t\t\t <<< 1. БАС МАЗИР >>>\n\n";
cout << "\t\t\t\t\t <<< 2. ШЫГУ >>>\n\n";
cout << "\t Тандау жасаныз :";
cin >> c;
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
cout << "\n\n";
cout << "\t\t\t\t РАХМЕТ, САУ БОЛЫНЫЗ! " << endl;
cout <<
"============================================================================
===========" << endl;
cout << "\n\n";
cout << "\t КЕРИ БАЙЛАНЫС";
cout << "\n\n\n";
cout << "\t АТЫ-ЖОНИ
БАЙЛАНЫС НОМЕРИ \n\n";
cout << "\t 1. Нургазиев Аслан Администратор
+77474461688 \n\n";
cout << "\t 2. Мырзарахимова Жанар Эдвайзер
+77756489069 \n\n";
cout << "\t 3. Газизова Назерке Багдарлама жасаушы
+77474058836 \n\n";
cout << "\t 4. Кажибеков Максат Call-center
+77001257770 \n\n";
cout << "\n\n";
cout << "\n\n";
}
}
} while (c != '2');
return 0;
}