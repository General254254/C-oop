#include <iostream>

class Employee {
    private:
        std::string Name;
        std::string Company;
        int Age;
    public:
        void setName(std::string name) {
            Name = name;
        }
        std::string getName() {
            return Name;
        }

        void setCompany(std::string company) {
            Company = company;
        }
        std::string getCompany() {
            return Company;
        }
        void setAge(int age) {
            Age = age;
        }
        int getAge() {
            return Age;
        }
        void introduceyourself() {
            std::cout << "Name - " << Name << std::endl;
            std::cout << "Company - " << Company << std::endl;
            std::cout << "Age - " << Age << std::endl;
        }
        
        Employee(std::string name, std::string company, int age) {
            Name = name;
            Company  = company;
            Age = age;
        }
};

int main() {
    Employee employee1 = Employee("John", "ABC Corp", 30);
    employee1.introduceyourself();

    Employee employee2 = Employee("Jane", "XYZ Inc", 25);
    employee2.introduceyourself();

    employee1.setAge(31);
    std::cout << "After birthday, " << employee1.getName() << " is now " << employee1.getAge() << " years old." << std::endl;
    return 0;
}