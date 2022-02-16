// Породы и собачки с приватом.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <fstream>//для файла
#include <string>//для строк
#include <windows.h>//для строк
#include <sstream>//для строк

using namespace std;



class Dog
{

private:
    string breed;
public:
    string size;

    double years;

    string color;
public:
    Dog()
    {

        cout << endl << "Object create without param";

    };



    Dog(string breed)
    {

        this->breed = breed;

        cout << endl << "Object create with 1 param";

    };



    Dog(string breed, string size, double matematica)
    {

        this->breed = breed;

        this->size = size;

        this->years = matematica;

        this->color = color;

        cout << endl << "Object create";

    };



    ~Dog() { cout << " Gav" << endl; };

    void setBreed(string breed)
    {
        this->breed = breed;
    }

    void show_emp_details();

};









void Dog::show_emp_details()

{

    cout << "\n\n**** Details of  Dogs ****";

    cout << "\nDog Breed      :  " << breed;

    cout << "\nDog Size    :  " << size;

    cout << "\nDog Years       :  " << years;

    cout << "\nDog Color   :  " << color;

    cout << "\n-------------------------------\n\n";

}


class HouseDog : public Dog
{
private:
    string name;
    string owner;
public:
    HouseDog(string named, string ownerd)
    {
        setName(named, ownerd);

    }
    void setName(string s, string b)
    {
        name = s;
        owner = b;
    };
    void show_emp_details_p()

    {

       

        

        cout << "\nDog name      :  " << name;

        cout << "\nDog owner   :  " << owner;

        cout << "\n-------------------------------\n\n";

    }
};


int main()

{
    string P;
    setlocale(LC_ALL, "Russian");
    ofstream out;          // поток для записи
    out.open("D:\\Dogs.txt"); // окрываем файл для записи
    if (out.is_open())
    {



        cout << "End of program" << endl;

        Dog emp1;
        emp1.setBreed("Alabai");
        

        emp1.size = "Large";

        emp1.years = 10.5;

        emp1.color = "Grey";

        emp1.show_emp_details();



        Dog emp2;
        emp2.setBreed("Beagle");

        emp2.size = "Medium";

        emp2.years = 7;

        emp2.color = "Brown";

        emp2.show_emp_details();



        Dog emp3;

        emp3.setBreed("Husky");

        emp3.size = "Large";

        emp3.years = 11.5;

        emp3.color = "Grey";

        emp3.show_emp_details();



        Dog emp4;
        emp4.setBreed("Spitz");

        emp4.size = "Small";

        emp4.years = 5;

        emp4.color = "Orange";

        emp4.show_emp_details();

        Dog emp5;

        emp5.setBreed("Doberman");

        emp5.size = "Large";

        emp5.years = 11.5;

        emp5.color = "Grey";

        emp5.show_emp_details();

        HouseDog emp61("Pirat", "Daniil");

        emp61.setBreed("Doberman");

        emp61.size = "Large";

        emp61.years = 10;

        emp61.color = "White";



        emp61.show_emp_details();
        emp61.show_emp_details_p();

    }
    cout << "End of program" << endl;
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
