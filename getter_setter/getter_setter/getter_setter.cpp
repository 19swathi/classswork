#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Individual {
private:
    string fullName;
    int years;
    double stature;
    bool isStudentStatus;
    vector<string> interests;

public:
    // Constructor
    Individual(string name, int age, double height, bool isStudent, vector<string> hobbies)
        : fullName(name), years(age), stature(height), isStudentStatus(isStudent), interests(hobbies) {}

    // Getter and Setter for 'fullName'
    string getFullName() const {
        return fullName;
    }

    void setFullName(const string& name) {
        fullName = name;
    }

    // Getter and Setter for 'years'
    int getYears() const {
        return years;
    }

    void setYears(int age) {
        years = age;
    }

    // Getter and Setter for 'stature'
    double getStature() const {
        return stature;
    }

    void setStature(double height) {
        stature = height;
    }

    // Getter and Setter for 'isStudentStatus'
    bool isStudent() const {
        return isStudentStatus;
    }

    void setStudent(bool isStudent) {
        isStudentStatus = isStudent;
    }

    // Getter and Setter for 'interests'
    vector<string> getInterests() const {
        return interests;
    }

    void setInterests(const vector<string>& hobbies) {
        interests = hobbies;
    }
};

int main() {
    // Example usage
    Individual person1("John Doe", 25, 175.5, true, { "Reading", "Sports" });

    // Display initial values
    cout << "Name: " << person1.getFullName() << endl;
    cout << "Age: " << person1.getYears() << endl;
    cout << "Height: " << person1.getStature() << endl;
    cout << "Is Student: " << (person1.isStudent() ? "Yes" : "No") << endl;
    cout << "Interests: ";
    for (const auto& interest : person1.getInterests()) {
        cout << interest << " ";
    }
    cout << endl;

    // Updating values using setter methods
    person1.setFullName("Jane Doe");
    person1.setYears(30);
    person1.setStature(160.0);
    person1.setStudent(false);
    person1.setInterests({ "Traveling", "Photography" });

    // Displaying updated values
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

    return 0;
}
