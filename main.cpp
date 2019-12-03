#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> listFromString(string input);

int main()
{
    string input;
    vector <string> inventory;

    cout<<"What's in the store (separate items by commas)? ";
    getline(cin,input);

    inventory = listFromString(input); //TODO: Write this function!

    cout<<inventory.size()<<" items in inventory.\n";
    for(int i=0; i<inventory.size(); i++)
    {
        cout<<inventory.at(i)<<endl;
    }

    return 0;
}
vector<string> listFromString(string input) 
{
        string word;
        vector<string> listItems;

        for(int i=0; i< input.size(); i++)
        {
               if(input.at(i) != ',')
               {
                        word.append(1, input.at(i));
               }
               else
               {
                listItems.push_back(word); //push to the list 
                word = "";
               }

        }
       listItems.push_back(word); 
        return listItems; 
}
