#include "iostream"
#include "fstream"
#include "sstream"
#include "string"
using namespace std;
int main()
{
ifstream ifstr("input.txt");
ofstream ofstr("output.txt",ios_base::trunc);
string input((istreambuf_iterator<char>(ifstr)),istreambuf_iterator<char>());
ofstr<<input;
cout<<input;
return 0;
}

