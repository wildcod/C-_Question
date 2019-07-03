#include <iostream>
using namespace std;

struct student {
    char name[20];
    int age;
};

int main(){

	struct student s1 = {"sahil" , 23};

	cout << s1.name << " " << s1.age << endl;

	struct student *p;

	p = &s1;

	cout << p->name;

}