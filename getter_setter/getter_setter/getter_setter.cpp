#include <iostream> // Include the input/output stream library
#include <string>    // Include the string library
#include <vector>    // Include the vector library

using namespace std; // Using the standard namespace

class Individual { // Define a class named 'Individual'
private: // Define private members of the class
    string fullName; // Member variable to store the full name
    int years;       // Member variable to store the age
    double stature;  // Member variable to store the height
    bool isStudentStatus; // Member variable to store the student status
    vector<string> interests; // Member variable to store interests as a vector of strings

public: // Define public members of the class

    // Constructor with parameters to initialize the object
    Individual(string name, int age, double height, bool isStudent, vector<string> hobbies)
        : fullName(name), years(age), stature(height), isStudentStatus(isStudent), interests(hobbies) {}

    // Getter method to retrieve the full name
    string getFullName() const { // Const member function, doesn't modify the object
        return fullName;
    }

    // Setter method to set the full name
    void setFullName(const string& name) {
        fullName = name;
    }

    // Getter method to retrieve the age
    int getYears() const { // Const member function, doesn't modify the object
        return years;
    }

    // Setter method to set the age
    void setYears(int age) {
        years = age;
    }

    // Getter method to retrieve the height
    double getStature() const { // Const member function, doesn't modify the object
        return stature;
    }

    // Setter method to set the height
    void setStature(double height) {
        stature = height;
    }

    // Getter method to retrieve the student status
    bool isStudent() const { // Const member function, doesn't modify the object
        return isStudentStatus;
    }

    // Setter method to set the student status
    void setStudent(bool isStudent) {
        isStudentStatus = isStudent;
    }

    // Getter method to retrieve the interests
    vector<string> getInterests() const { // Const member function, doesn't modify the object
        return interests;
    }

    // Setter method to set the interests
    void setInterests(const vector<string>& hobbies) {
        interests = hobbies;
    }
};

int main() { // Main function where the program execution begins
    // Example usage: creating an Individual object with initial values
    Individual person1("John Doe", 25, 175.5, true, { "Reading", "Sports" });

    // Displaying initial values of the object
    cout << "Name: " << person1.getFullName() << endl;
    cout << "Age: " << person1.getYears() << endl;
    cout << "Height: " << person1.getStature() << endl;
    cout << "Is Student: " << (person1.isStudent() ? "Yes" : "No") << endl;
    cout << "Interests: ";
    for (const auto& interest : person1.getInterests()) {
        cout << interest << " ";
    }
    cout << endl;

    // Updating values of the object using setter methods
    person1.setFullName("Jane Doe");
    person1.setYears(30);
    person1.setStature(160.0);
    person1.setStudent(false);
    person1.setInterests({ "Traveling", "Photography" });

    // Displaying updated values of the object
    cout << "\nAfter updating values:" << endl;
    cout << "Name: " << person1.getFullName() << endl;
    cout << "Age: " << person1.getYears() << endl;
    cout << "Height: " << person1.getStature() << endl;
    cout << "Is Student: " << (person1.isStudent() ? "Yes" : "No") << endl;
    cout << "Interests: ";
    for (const auto& interest : person1.getInterests()) {
        cout << interest << " ";
    }
    cout << endl;

    return 0; // Indicates successful completion of the program
}
