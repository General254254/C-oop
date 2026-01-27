#include <iostream>

class AbstractEmployee {
    virtual void askForPromotion() = 0;
};

class Employee : AbstractEmployee {
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
            if(age >= 18)
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
        void askForPromotion() {
            if (Age >= 30)
                std::cout << Name << " got promoted!" << std::endl;
            else
                std::cout << Name << ", sorry no promotion for you!" << std::endl;
        }
};

int main() {
    Employee employee1 = Employee("John", "ABC Corp", 30);
    employee1.introduceyourself();
    employee1.askForPromotion();

    Employee employee2 = Employee("Jane", "XYZ Inc", 25);
    employee2.introduceyourself();
    employee2.askForPromotion();

    return 0;
}