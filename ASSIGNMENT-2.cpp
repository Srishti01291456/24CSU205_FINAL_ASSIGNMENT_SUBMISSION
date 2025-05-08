#include<iostream>
using namespace std;
class Person{
    private:
    string name;
    int age;
    string id;
    int contact;
    //Default Constructor
    public:
    Person(){
        cout<<"You are in the default constructor:"<<endl;
        name="Anonymous";
        age=0;
        id="00XX";
        contact=0000000000;
    }
    //Parameterised Constructor
    Person(string n,int a,string i,int c)
    {
        cout<<"You are in the parameterised constructor:"<<endl;
        name=n;
        age=a;
        id=i;
        contact=c;
    }
    //Destructor
    ~Person(){
        cout<<"Destructor Called:"<<endl;
        name="Anonymous";
        age=0;
        id="00XX";
        contact=0000000000;
    }
    //Setter
    void setPerson(){
        name="XYZ";
        age=20;
        id="12er";
        contact=1425364738;
    } 
    void setName(string n)
    {
        if(!n.empty())
        name=n;
        else
        cout<<"Invalid name!"<<endl;
    }
    void setAge(int a)
    {
        if(a>0)
        age=a;
        else
        cout<<"Invalid age!"<<endl;
    }
    //Display Function
    void display()
    {
        cout<<name;
        cout<<age;
        cout<<id;
        cout<<contact;
    }
    //Dispaly details method added
    virtual void displaydetails()
    {
        cout<<"Name:"<<name<<"Age:"<<age<<"ID:"<<id<<"Conatact:"<<contact<<endl;
    }
    //Calculate payment method added
    virtual float Calculatepayment()
    {
        return 0.0f;
    }
};
class Student:public Person{
    private:
    int enr_date;
    string program;
    float gpa;
    //Default Constructor
    public:
    Student(){
        cout<<"You are in  the default constructor:"<<endl;
        enr_date=000000;
        program="program";
        gpa=0.0;
    }
    //Parameterised Constructor
    Student(int en,string p,float g)
    {
        cout<<"You are in the parameterised constructor:"<<endl;
        enr_date=en;
        program=p;
        gpa=g;
    }
    //Destructor
    ~Student(){
        cout<<"Destructor Called:"<<endl;
        enr_date=000000;
        program="program";
        gpa=0.0;
    }
    //Setter
    void setStudent()
    {
        enr_date=120425;
        program="CS";
        gpa=9.9;
    }
    void setGpa(float g)
    {
        if(g>=0.0 && g<=4.0)
        gpa=g;
        else
        cout<<"Invalid Gpa!"<<endl;
    }
    //Display Function
    void display()
    {
        cout<<enr_date;
        cout<<program;
        cout<<gpa;
    }
    //Override
    void displaydetails()override{
        Person::displaydetails();
        cout<<"Enrollment Date:"<<enr_date;
        cout<<"Program:"<<program;
        cout<<"GPA:"<<gpa<<endl;
    }
    float Calculatepayment() override {
        return 500.0f; // Example tuition fee
    }
};
class Professor:public Person{
    private:
    string department;
    string specialisation;
    int hire_date;
    //Default Constructor
    public:
    Professor(){
        cout<<"You are in  the default constructor:"<<endl;
        department="Dept";
        specialisation="spec";
        hire_date=000000;
    }
    //Parameterised Constructor
    Professor(string d,string s,int hd)
    {
        cout<<"You are in the parameterised constructor:"<<endl;
        department=d;
        specialisation=s;
        hire_date=hd;
    }
    //Destructor
    ~Professor(){
        cout<<"Destructor Called:"<<endl;
        department="Dept";
        specialisation="spec";
        hire_date=000000;
    }
    //Setter
    void setProfessor()
    {
        department="CSE";
        specialisation="AI-ML";
        hire_date=120314;
    }
    //Display Function
    void display()
    {
        cout<<department;
        cout<<specialisation;
        cout<<hire_date;
    }
    //Display details
    void displaydetails()
    {
        Person::displaydetails();
        cout<<"Department:"<<department<<"Specialisation:"<<specialisation<<"Hire Date:"<<hire_date<<endl;
    }
    float Calculatepayment() override
    {
        return 1000000.0f;
    }
};
class Course{
    private:
    string code;
    string title;
    float credits;
    string description;
    //Default Constructor
    public:
    Course(){
        cout<<"You are in  the default constructor:"<<endl;
        code="code";
        title="title";
        credits=0.00;
        description="desc";
    }
    //Parameterised Constructor
    Course(string c,string t,float cr,string d)
    {
        cout<<"You are in the parameterised constructor:"<<endl;
        code=c;
        title=t;
        credits=cr;
        description=d;
    }
    //Destructor
    ~Course(){
        cout<<"Destructor Called:"<<endl;
        code="code";
        title="title";
        credits=0.00;
        description="desc";
    }
    //Setter
    void setCourse()
    {
        code="FOCP-2";
        title="focp";
        credits=20.0;
        description="Computer-Languages";
    }
    void setCredits(float c)
    {
        if(c>=0)
        credits=c;
        else
        cout<<"Invalid Course Credits!"<<endl;
    }
    //Display Function
    void display()
    {
        cout<<code;
        cout<<title;
        cout<<credits;
        cout<<description;
    }
};
class Department{
    private:
    string name;
    string location;
    float budget;
    //Default Constructor
    public:
    Department(){
        cout<<"You are in  the default constructor:"<<endl;
        name="name";
        location="location";
        budget=0.000000;
    }
    //Parameterised Constructor
    Department(string n,string l,float b)
    {
        cout<<"You are in the parameterised constructor:"<<endl;
        name=n;
        location=l;
        budget=b;
    }
    //Destructor
    ~Department(){
        cout<<"Destructor Called:"<<endl;
        name="name";
        location="location";
        budget=0.000000;
    }
    //Setter
    void setDepartment()
    {
        name="CSE";
        location="First Floor";
        budget=90000000;
    }
    //Display Function
    void display()
    {
        cout<<name;
        cout<<location;
        cout<<budget;
    }
};
class Gradebook{
    public:
    int student[100];
    float grade[100];
    int size;
    Gradebook(){
        size=0;
    }
    void addGrade(int studentid,float studentgrade)
    {
        if(size<100)
        {
            student[size]=studentid;
            grade[size]=studentgrade;
            size++;
        }
    }
    float calavgegrade() {
        if (size == 0) 
        {
            cout << "No average grades calculated:";
        }
        float total = 0.0;
        int i;
        for (i = 0; i < size; i++) {
            total += grade[i];
        }
        return total / size;
    }
    int GetHighestGrade()
    {
        if(size==0)
        return -1;
        int max=grade[0];
        int i;
        for(i=0;i<size;i++)
        {
            if(grade[i]>max)
            max=grade[i];
        }
        return max;
    }
    void GetfailedStudents()
    {
        cout<<"The failing students(below 33 ) are:"<<endl;
        int i;
        for(i=0;i<size;i++)
        if(grade[i]<40)
        {
            cout<<student[i]<<endl;
        }
    }
};
class EnrollmentMananger{
    public:
    int Stid[100];
    int CourseCode[100];
    int size;
    EnrollmentMananger(){
        size=0;
    }
    void enrollstudent(int id,int code)
    {
        if(size<100)
        {
            Stid[size]=id;
            CourseCode[size]=code;
            size++;
            cout<<"student enrolled:"<<endl;
        }
        else
        {
            cout<<"enrollment is full:"<<endl;
        }
    }
    void dropstudent(int id,int code)
    {
        bool found=false;
        int i;
        for(i=0;i<size;i++)
        {
            if(Stid[i]==id && CourseCode[i]==code)
            {
                for(int j=i;j<size-1;j++)
                {
                    Stid[j]=Stid[j+1];
                    CourseCode[j] = CourseCode[j + 1];
                }
                size--;
                found=true;
                cout<<"Student dropped:"<<id<<"from course"<<code<<endl;
                break;
            }
        }
        if(!found)
        {
            cout<<"Enrollment not found:"<<endl;
        }
    }
    int getEnrollmentCount(int code){
    int count=0;
    for(int i=0;i<size;i++)
    {   
        if(CourseCode[i]==code)
        count++;
    }
        return count;
    }
};
//Test function that accepts a Person pointer/reference and calls these polymorphic methods.
void testPayment(Person* p) {
    cout << "Payment:"<<endl;
    p->displaydetails();
    cout << "Payment: " << p->Calculatepayment() << endl;
}
// Function to demonstrate polymorphic behavior with array of Person pointers
void demonstratePolymorphism(Person* persons[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Payment for person " << i + 1 << ": " << persons[i]->Calculatepayment() << endl;
    }
    }
int main(){
    Person p1, p2;
    // Assuming setters are used instead of inputperson
    p1.setName("Anonymous");
    p1.setAge(18);
    p1.displaydetails();

    p2.setName("Srishti");
    p2.setAge(18);
    p2.displaydetails();

    cout << endl;

    Student s1, s2;
    s1.setStudent(); // placeholder
    s2.setStudent(); // placeholder
    s1.displaydetails();
    s2.displaydetails();

    cout << endl;

    Professor pr1, pr2;
    pr1.setProfessor(); // placeholder
    pr2.setProfessor(); // placeholder
    pr1.displaydetails();
    pr2.displaydetails();

    cout << endl;

    Course c1, c2;
    c1.setCourse(); // placeholder
    c2.setCourse(); // placeholder
    c1.display(); 
    c2.display(); 

    cout << endl;

    Department d1, d2;
    d1.setDepartment();
    d2.setDepartment();
    d1.display();
    d2.display();

    cout << endl;

    // Fix class name and variable types
    EnrollmentMananger em;
    Gradebook gb;

    // Enroll students using int ids
    em.enrollstudent(100, 505);
    em.enrollstudent(107, 504);
    em.enrollstudent(105, 508);
    cout << "Enrollment Count: " << em.getEnrollmentCount(501) << endl;

    em.dropstudent(102, 501);
    cout << "Updated Enrollment Count: " << em.getEnrollmentCount(501) << endl;

    // Add grades
    gb.addGrade(100, 7.5);
    gb.addGrade(107, 8.8);
    gb.addGrade(105, 9.0);

    cout << "Average Grade: " << gb.calavgegrade() << endl;
    cout << "Highest Grade: " << gb.GetHighestGrade() << endl;
    gb.GetfailedStudents();

    // Test polymorphism
    cout << "\nTesting with Person pointer:\n";
    testPayment(&p1);
    testPayment(&p2);

    cout << "\nTesting with Student pointer:\n";
    testPayment(&s1);
    testPayment(&s2);

    cout << "\nTesting with Professor pointer:\n";
    testPayment(&pr1);
    testPayment(&pr2);

    Person* persons[4] = { &s1, &s2, &pr1, &pr2 };
    demonstratePolymorphism(persons, 4);

    return 0;
}
