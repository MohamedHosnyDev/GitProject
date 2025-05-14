#include <iostream>
#include <string>
#include <map>

using namespace std;

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