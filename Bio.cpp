// This is the code for level 1 of the hunt
//Input: Motto of ACM-W as given in bio. Please ensure that it is "In tech it's her turn". No extra spaces or delimiters.
// Output: her_281023

#include <iostream>
#include <string>
#include <ctime>
#include <sstream>
#include <iomanip>

using namespace std;

string func1(string s, int left, int right) //returns reverse of a string
{
    if (left < right) {
        swap(s[left], s[right]);
        return func1(s, left + 1, right - 1);
    }
    return s;
}

string func2() //returns date as "ddmmyy"
{
    time_t now = time(0);
    tm* timeinfo = localtime(&now);

    // Format the date as "ddmmyy"
    stringstream formattedDate;
    formattedDate << setfill('0') << setw(2) << timeinfo->tm_mday;   // Day
    formattedDate << setfill('0') << setw(2) << 1 + timeinfo->tm_mon;  // Month 
    formattedDate << setfill('0') << setw(2) << timeinfo->tm_year % 100;  // Last two digits of the year

    // Get the formatted date as a string
    string st = formattedDate.str();

    return st;
}
int main() 
{

    // string s=""; //Initialize this string with the clue found via insta story no.1

    string s = "In tech it's her turn"; //what is expected out of them

    string s1 = func1(s, 0, s.length() - 1); //nrut reh s'ti hcet nI 
    string s2 = func1(s1.substr(5, 3), 0, (s1.substr(5, 3)).length() - 1); //her
    
    string s3=func2(); //281023
    string s4=s2+"_"+s3; //her_281023
    cout << s4 << endl;
    return 0;
 
}








