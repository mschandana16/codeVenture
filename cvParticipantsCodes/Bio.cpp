// This is the code for level 1 of the hunt

#include <iostream>
#include <string>
#include <ctime>
#include <sstream>
#include <iomanip>

using namespace std;

string func1(string s, int left, int right) 
{
    if (left < right) {
        swap(s[left], s[right]);
        return func1(s, left + 1, right - 1);
    }
    return s;
}

string func2() 
{
    time_t now = time(0);
    tm* timeinfo = localtime(&now);

    stringstream formattedDate;
    formattedDate << setfill('0') << setw(2) << timeinfo->tm_mday;   
    formattedDate << setfill('0') << setw(2) << 1 + timeinfo->tm_mon;  
    formattedDate << setfill('0') << setw(2) << timeinfo->tm_year % 100;  
    string st = formattedDate.str();

    return st;
}
int main() 
{

    // string s=""; //Initialize this string with the clue found via insta story no.1 . Ensure that there are no extra delimiters or spaces. 

    string s1 = func1(s, 0, s.length() - 1); 
    string s2 = func1(s1.substr(5, 3), 0, (s1.substr(5, 3)).length() - 1); 
    
    string s3=func2(); 
    string s4=s2+"_"+s3; 
    cout << s4 << endl;
    return 0;
 
}








