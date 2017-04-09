#include<iostream>
#include<string>

using namespace std;

int main()
{
  int choice;
  cin>>choice;

   string Name;
  getline(cin,Name);

  cout<<"My name is "
    <<Name
<<"Choice "<<choice<<endl;
  return 0;
}
