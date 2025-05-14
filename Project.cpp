#include <iostream>
#include <string>
#include <map>

using namespace std;

class Students
{
    private:
        string StudentsDataKey ;
        int StudentsDataValue ;
        multimap<string,int> StudentsData;
    public:
        void SetStudentDataItem()
        {
            cout << "Please enter the student name and his grade" <<endl;
            cin >> StudentsDataKey ;
            cin >> StudentsDataValue ; 
            StudentsData.insert({StudentsDataKey , StudentsDataValue});
        }

        int GetStudentGrade()
        {
            cout << "Please enter the student name" <<endl;
            cin >> StudentsDataKey;
            multimap<string,int> :: iterator Item ;
            Item = StudentsData.find(StudentsDataKey);
            return Item->second;
        }

        void PrintAllStudentsData()
        {
            multimap<string,int> :: iterator Item ;
            for (Item = StudentsData.begin(); Item != StudentsData.end(); ++Item)
            {
                cout << "Student Name: " << Item->first << " Grade: " << Item->second << endl;
            }
        }

};

int main()
{
    
}

