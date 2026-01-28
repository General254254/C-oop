#include <iostream>

class AbstractEmployee {
    virtual void askForPromotion() = 0;
};

class Employee : AbstractEmployee {
    private:
        std::string Company;
        int Age;
    protected:
        std::string Name;
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
        void work() {
            std::cout << Name << " is checking email, task backlog, performing tasks..." << std::endl;
        }
};

class Developer : public Employee {
    public:
        std::string FavProgrammingLanguage;
        Developer(std::string name, std::string company, int age, std::string favProgrammingLanguage)
            : Employee(name, company, age) {
                FavProgrammingLanguage = favProgrammingLanguage;
        }
        void fixBug() {
            std::cout << Name << " fixed bug using " << FavProgrammingLanguage << std::endl;
        }
        void work() {
            std::cout << Name << " is writing " << FavProgrammingLanguage << " code" << std::endl;
        }
};

class Teacher : public Employee {
    public:
        std::string Subject;
        void prepareLesson() {
            std::cout << Name << " is preparing " << Subject << " lesson" << std::endl;
        }
        Teacher(std::string name, std::string company, int age, std::string subject)
            : Employee(name, company, age) {
                Subject = subject;
        }
        void work() {
            std::cout << Name << " is teaching " << Subject << std::endl;
        }
};

int main() {
    Developer d = Developer("Alice", "TechCorp", 28, "C++");
    d.introduceyourself();
    d.fixBug();
    d.askForPromotion();
    d.work();

    Teacher t = Teacher("Bob", "HighSchool", 35, "Math");
    t.introduceyourself();
    t.prepareLesson();
    t.askForPromotion();
    t.work();
    return 0;
}