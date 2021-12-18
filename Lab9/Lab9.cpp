#include <iostream>
#include <string>
using namespace std;

string fillString();
string fillSymbols();
int countWords(string, string);

int main(){
    string str;
    string symbols;
    int count;

    str = fillString();
    symbols = fillSymbols();
    count = countWords(str,symbols);
    cout << "The number of words starting with \"" << symbols << "\" is: " <<  count;
    return 0;
}
string fillString(){
    string s;
    cout << "Enter the string: ";
    getline(cin,s);
    return s;
}
string fillSymbols(){
    string smb;
    cout << "Enter symbols: ";
    getline(cin,smb);
    return smb;
}
int countWords(string s, string symb){
    int n = 0;
    size_t first_delim = 0;
    size_t last_delim = 0;
    string copy_string = s;
    string word;
    string delimiter = " ";
    while(last_delim < s.length()){
        last_delim = copy_string.find(delimiter);
        word = copy_string.substr(first_delim, first_delim + symb.length());
        if (word == symb)
            n++;
        copy_string = copy_string.erase(first_delim, last_delim + 1);
    }
    return n;
}