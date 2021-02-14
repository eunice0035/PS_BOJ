#include<iostream>
#include<list>
#include<string>
using namespace std;

int main(void) {
	list<char> editor;

	string a;
	int n;
	getline(cin, a);
	
	a.append("0");
	
	for (int i = 0; i < a.size(); i++) {
		editor.push_back(a[i]);	
	}
	list<char>::iterator t = editor.end();
	t--;
	cin >> n;
	char cmd;
	char word;
	for (int i = 0; i < n; i++) {
		cin >> cmd;
		if (cmd == 'L') {
			if (t != editor.begin()) {
				t--;
			}
		}
		else if (cmd == 'D') {
			t++;
			if (t == editor.end())
				t--;

		}
		else if (cmd == 'B') {
			if (t != editor.begin()) {
				t--;
				t = editor.erase(t);
			}
		}
		else if (cmd == 'P') {
			cin >> word;
			editor.insert(t, word);
		}
		else
			break;
	}
	t = editor.end();
	t--;
	for (list<char>::iterator it = editor.begin(); it != t; it++) {
		cout << *it;
	}
	cout << "\n";

	return 0;
}