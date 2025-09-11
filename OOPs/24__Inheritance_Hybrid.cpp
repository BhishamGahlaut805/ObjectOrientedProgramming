#include <iostream>
using namespace std;

// Base Class
class Teacher {
protected:
    int id;
    int age;
public:
    string name;
    Teacher(int i, int a, string n) : id(i), age(a), name(n) {}
    void showTeacher() {
        cout << "ID: " << id << endl;
        cout << "Age: " << age << endl;
        cout << "Name: " << name << endl;
    }
};

// Derived from Teacher
class Science : virtual public Teacher {
protected:
    string subject;
public:
    Science(int i, int a, string n, string sub) : Teacher(i, a, n), subject(sub) {}
    void showScience() {
        cout << "Science Subject: " << subject << endl;
    }
};

// Another derived from Teacher
class Arts : virtual public Teacher {
protected:
    string field;
public:
    Arts(int i, int a, string n, string f) : Teacher(i, a, n), field(f) {}
    void showArts() {
        cout << "Arts Field: " << field << endl;
    }
};

// Derived from both Science and Arts (Diamond shape)
class MultiSkill : public Science, public Arts {
    string extraSkill;
public:
    MultiSkill(int i, int a, string n, string sub, string f, string skill)
        : Teacher(i, a, n), Science(i, a, n, sub), Arts(i, a, n, f), extraSkill(skill) {}

    void showProfile() {
        showTeacher();      // Comes only once due to virtual inheritance
        showScience();
        showArts();
        cout << "Extra Skill: " << extraSkill << endl;
    }
};

int main() {
    MultiSkill ms(1, 35, "Dr.Rahul", "Physics", "Painting", "Public Speaking");
    ms.showProfile();
    return 0;
}
