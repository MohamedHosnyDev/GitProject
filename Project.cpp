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

class Managers
{
private:
    string ManagersDataKey;
    float ManagersDataValue;
    multimap<string, float> ManagersData;
public:
    void SetManagerDataItem()
    {
        cout << "Please enter the Manager name and their ownership percentage" << endl;
        cin >> ManagersDataKey;
        cin >> ManagersDataValue;
        ManagersData.insert({ManagersDataKey, ManagersDataValue});
    }

    float GetManagerOwnershipPercentage()
    {
        cout << "Please enter the Manager name" << endl;
        cin >> ManagersDataKey;
        multimap<string, float>::iterator Item;
        Item = ManagersData.find(ManagersDataKey);
        if (Item == ManagersData.end())
        {
            cout << "Manager not found!" << endl;
            return 0.0f;
        }
        return Item->second;
    }

    void PrintAllManagersData()
    {
        multimap<string, float>::iterator Item;
        for (Item = ManagersData.begin(); Item != ManagersData.end(); ++Item)
        {
            cout << "Manager Name: " << Item->first << " Ownership Percentage: " << Item->second << "%" << endl;
        }
    }

};


int main()
{
    Students student;
    Teachers teacher;
    Managers manager;

    bool continueProgram = true;
    int SystemNum;
    int OperationNum;
    cout<<"Hello, please enter the system number : press 1 for Students , 2 for Teachers or 3 for Managers"<<endl;
    cin >> SystemNum;

    while(continueProgram)
    {

        switch(SystemNum)
        {
            case 1 :
            {
                cout << "Please enter the operation number (1: Set Data, 2: Get Grade, 3: Print All): ";
                cin >> OperationNum;

                switch(OperationNum)
                {
                    case 1:
                        student.SetStudentDataItem();
                        break;
                    case 2:
                        cout << "Student Grade: " << student.GetStudentGrade() << endl;
                        break;
                    case 3:
                        student.PrintAllStudentsData();
                        break;
                    default:
                        cout << "Invalid operation number!" << endl;
                }
                break;
            }
            case 2 :
            {
                cout << "Please enter the operation number (1: Set Data, 2: Get Age, 3: Print All): ";
                cin >> OperationNum;

                switch(OperationNum)
                {
                    case 1:
                        teacher.SetTeacherDataItem();
                        break;
                    case 2:
                        cout << "Teacher Age: " << teacher.GetTeacherAge() << endl;
                        break;
                    case 3:
                        teacher.PrintAllTeachersData();
                        break;
                    default:
                        cout << "Invalid operation number!" << endl;
                }
                break;
            }
            case 3 :
            {
                cout << "Please enter the operation number (1: Set Data, 2: Get Ownership Percentage, 3: Print All): ";
                cin >> OperationNum;

                switch(OperationNum)
                {
                    case 1:
                        manager.SetManagerDataItem();
                        break;
                    case 2:
                        cout << "Manager Ownership Percentage: " << manager.GetManagerOwnershipPercentage() << "%" << endl;
                        break;
                    case 3:
                        manager.PrintAllManagersData();
                        break;
                    default:
                        cout << "Invalid operation number!" << endl;
                }
                break;
            }
            default:
                cout << "Invalid system number" << endl;
        }
        cout << "Do you want to continue? (1: Yes, 0: No): ";
        cin >> continueProgram;
    }
}
