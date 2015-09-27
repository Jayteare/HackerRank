#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
    public:
        Student &set_age(int age)
        {
            this->st.age = age;
            return(*this);
        }
    
        Student &set_standard(int standard)
        {
            this->st.standard  = standard;
            return(*this);
        }
    
        Student &set_first_name(string first_name)
        {
            this->st.first_name = first_name;
            return(*this);
        }
    
        Student &set_last_name(string last_name)
        {
            this->st.last_name = last_name;
            return(*this);
        }
    
        int get_age()
            { 
            return this->st.age; }
    
        string get_last_name()
            { return this->st.last_name; }
    
        string get_first_name()
            { return this->st.first_name; }
    
        int get_standard()
            { return this->st.standard; }
    
        string to_string()
            { 
                cout << get_age() << "," << get_first_name() << "," << get_last_name() << "," << get_standard();
                string make_up = "";
            
            return make_up;
            }
    
    private:
    
    struct Student_
    {
        int age, standard;
        string first_name, last_name;
    };
    
    Student_ st;

};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
