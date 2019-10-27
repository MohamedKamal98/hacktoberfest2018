
#include<unordered_map>
#include<iterator>
#include <utility> 
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(int s1, int s2)
{
	return (s1<s2);
}

void main()
{
//	unordered_map<int, string>b;
//	unordered_map<int, string>::iterator it;
//	b.insert(make_pair(1, "A"));
//	b.insert(make_pair(2, "b"));
//	b.insert(make_pair(3, "c"));
//	b.insert(make_pair(4, "d"));
//	for (it = b.begin(); it != b.end(); it++)
//	{
//		cout <<it->first << "   "<<it->second<<endl;
//	}
	vector<int>v;

	v.push_back(1);
	v.push_back(-2);
	v.push_back(7);
	v.push_back(0);
//	v.emplace(v.begin(), 50);
	sort(v.begin(), v.end());
	for (int it=0; it<v.size(); it++)
	{
		cout<< v.back()<<endl;
		v.pop_back();
	}
	//unordered_map<string, string> phonebook;
	//phonebook.insert(make_pair("Ahmed", "01005689445"));
	//phonebook.insert(make_pair("salma","01114447775"));
	//	phonebook["Hossam"]="01228064449"; //another way of inserting key-value.
	//	phonebook["Mariam"] = "01003030897";
	////Search for name and display his phone number
	//string name = "", number;
	//unordered_map<string, string>::iterator it;
	//while (true)
	//{
	//	cout << "Enter Name: ";
	//	cin >> name;
	//	if (name == "exit")
	//		break;
	//	it = phonebook.find(name);
	//	if (it != phonebook.end())
	//		cout << name << "'s number is: " << it->second << endl;
	//	else
	//	{
	//		cout << name << " is not found but can be added. " << endl;
	//		cout << "Enter number: ";
	//		cin >> number;
	//		phonebook[name] = number;
	//	}
	//}

	system("pause");
}