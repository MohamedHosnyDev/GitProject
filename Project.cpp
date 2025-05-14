#include <iostream>
#include <string>
#include <map>
using namespace std;

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
    
}