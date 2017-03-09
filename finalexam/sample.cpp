#include <iostream>
#include <string>
#include <cctype>


using namespace std;

string vowel="aeiou";
string conso="bcdfghjklmnpqrstvwxyz";
string word;

int main()

{
   
     do
    {
    cout << "Enter an Alphanumeric word!" << endl;
    
    cin >> word;
    
   
        
    for (int i=0; word [i] != '\0'; i++)
            { word[i] = tolower (word[i]); }
    
   
    } while (word != "exit");
 
 
    system ("pause");
    return 0;
    }