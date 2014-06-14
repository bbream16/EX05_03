#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main(){
	vector<int> intVector(5, 1);
	vector<int> vector2(10, 2);
	
	intVector.push_back(7);
	intVector.pop_back();
	cout << "intVector has " << intVector.size() << " elements inside.\n";
	cout << "The third element of intVector is " << intVector.at(3) << endl;
	cout << intVector.empty() << endl;
	intVector.clear();
	cout << intVector.empty() << endl << endl;
	cout << "intVector = " << endl;
	for (int i = 0; i < intVector.size(); i++)
		cout << intVector[i] << endl;
	cout << "vector2 = " << endl;
	for (int i = 0; i < vector2.size(); i++)
		cout << vector2[i] << endl;
	intVector.swap(vector2);
	cout << "\n\nThe vectors have swapped.\n\n";
	cout << "intVector = " << endl;
	for (int i = 0; i < intVector.size();i++)
		cout << intVector[i] << endl;
	cout << "vector2 = " << endl;
	for (int i = 0; i < vector2.size(); i++)
		cout << vector2[i] << endl;

	return 0;


}