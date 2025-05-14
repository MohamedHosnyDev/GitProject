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

            if (Item == StudentsData.end())
            {
                cout << "Student not found!" << endl;
                return 0;
            }
            
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


class Teachers
{
    private:
        string TeachersDataKey ;
        int TeachersDataValue ;
        multimap<string,int> TeachersData;
    public:
        void SetTeacherDataItem()
        {
            cout << "Please enter the Teacher name and his age" <<endl;
            cin >> TeachersDataKey ;
            cin >> TeachersDataValue ; 
            TeachersData.insert({TeachersDataKey , TeachersDataValue});
        }

        int GetTeacherAge()
        {
            cout << "Please enter the Teacher name" <<endl;
            cin >> TeachersDataKey;
            multimap<string,int> :: iterator Item ;
            Item = TeachersData.find(TeachersDataKey);

            if (Item == TeachersData.end())
            {
                cout << "Teacher not found!" << endl;
                return 0;
            }

            return Item->second;
        }
        
        void PrintAllTeachersData()
        {
            multimap<string,int> :: iterator Item ;
            for (Item = TeachersData.begin(); Item != TeachersData.end(); ++Item)
            {
                cout << "Teacher Name: " << Item->first << " Age: " << Item->second << endl;
            }
        }

};


int main()
{
    
}

