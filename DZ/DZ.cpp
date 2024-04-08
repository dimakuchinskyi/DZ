
//�1

/*#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class Overcoat {
private:
    string type;
    double price;
public:
    Overcoat(const string& t, double p) : type(t), price(p) {}
    bool operator==(const Overcoat& other) const {
        return type == other.type && price == other.price;
    }
    Overcoat& operator=(const Overcoat& other) {
        if (this != &other) {
            type = other.type;
            price = other.price;
        }
        return *this;
    }
    bool operator>(const Overcoat& other) const {
        return price > other.price;
    }
    void display() const {
        cout << "���: " << type << ", ֳ��: " << price << endl;
    }
};
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Overcoat coat1("Winter", 100);
    Overcoat coat2("Spring", 150);
    Overcoat coat3("Winter", 100);
    if (coat1 == coat3) {
        cout << "������ 1 �� ������ 3 �������" << endl;
    }
    else {
        cout << "������ 1 �� ������ 3 �� �������" << endl;
    }
    coat2 = coat1;
    cout << "������ 2 ���� ���������: ";
    coat2.display();
    if (coat2 > coat1) {
        cout << "������ 2 ������� �� ������ 1" << endl;
    }
    else {
        cout << "������ 1 ������� �� ������ 2" << endl;
    }
    return 0;
}
*/

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class Flat {
private:
    string address;
    double area;
    double price;
public:
    Flat(const string& addr, double a, double p) : address(addr), area(a), price(p) {}
    bool operator==(const Flat& other) const {
        return area == other.area;
    }
    Flat& operator=(const Flat& other) {
        if (this != &other) {
            address = other.address;
            area = other.area;
            price = other.price;
        }
        return *this;
    }
    bool operator>(const Flat& other) const {
        return price > other.price;
    }
    void display() const {
        cout << "������: " << address << ", �����: " << area << ", ֳ��: " << price << endl;
    }
};
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Flat flat1("���. ������, 10", 75, 100000);
    Flat flat2("���. ����������, 15", 85, 120000);
    Flat flat3("���. ������, 10", 75, 100000);
    if (flat1 == flat3) {
        cout << "�������� 1 � 3 ����� �������� �����" << endl;
    }
    else {
        cout << "�������� 1 � 3 ����� ���� �����" << endl;
    }
    flat2 = flat1;
    cout << "ϳ��� ���������: ";
    flat2.display();
    if (flat2 > flat1) {
        cout << "�������� 2 ������� �� �������� 1" << endl;
    }
    else {
        cout << "�������� 1 ������� �� �������� 2" << endl;
    }
    return 0;
}
