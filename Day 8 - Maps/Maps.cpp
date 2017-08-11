//
// Created by hamma on 8/11/2017.
//

#include <iostream>
#include <c++/map>

using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map <string,int> contacts;
    auto n = 0;
    std::cin >> n;

    string name = "";
    auto num = 0;

    for(int i; i < n; i++)
    {
        std::cin >> name >> num;
        contacts[name] = num;
    }

    map <string, int> :: key_compare mycomp = contacts.key_comp( );
    string query = "";
    bool isContact;

    auto it = contacts.begin();
    while(!cin.eof())
    {
        cin >> query;
        if(contacts.count(query) > 0)
        {
            it = contacts.find(query);
            std::cout << query << "=" << it->second << std::endl;
            break;
        }
        else
        {
            std::cout << "Not found" << std::endl;
            break;
        }

    }
    return 0;
}

