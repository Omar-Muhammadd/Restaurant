// أكتب برنامج لإحدى المطاعم يقوم بتسجيل تاريخ الحجز و اسم الشخص صاحب الحجز و ترتيب الأولوية للتاريخ الأقدم

#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main() {
	string name,date;
	vector<map<string, string> > v;
  map<string, string> m;
	map<string, string> ::iterator it;
	more:
		cout <<"Enter the name: ";
			cin>>name;
		cout <<"Enter a date: ";
			cin>>date;

	m[date] = name;
	v.push_back(m);

		cout <<"--------------------------";
		cout <<"\nregister another appointment? (y/n) ";
			char y; cin >> y;
		cout <<"--------------------------\n";

		if   (y=='y'|| y=='Y') goto more;
		else if (y=='n'|| y=='N') NULL;

		
		for(it=m.begin() ; it!=m.end() ; it++)
			cout <<(*it).first<<" "<<(*it).second<<endl;
		

} 