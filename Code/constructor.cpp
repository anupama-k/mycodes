#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class Student {
public:
 int studentID;
 char *name;
 Student() {
 studentID = 0;
 name = "";
 }
 Student(Student &o) {
 studentID = o.studentID;
 name = strdup(o.name);
 }
};
int main() {
 Student student1;
 student1.studentID = 98;
 char n[] = "foo";
 student1.name = n;
 Student student2 = student1;
 student2.name[0] = 'b';
 cout << student1.name << endl; 
}
