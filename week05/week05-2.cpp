/// week05-2.cpp
/// ���x stringstream
#include <iostream> /// cin, cout, genline Ū�g���
#include <sstream> /// stringstream �ݭn��
#include <string> /// �ڭ̪��r�� string
using namespace std;
int main()
{
    cout << "�п�J�@�q�^��A �̭��i���Ů�: ";
    string s; /// �r�� s
    getline(cin, s); /// �@��Ū�J�@���A��Js
    cout << "Ū��Fs�r��: " << s <<endl;
    stringstream ss(s); /// �N�r�� s �ܦ� ss
    string word; /// �r�� word
    while ( ss >> word ){
        cout << "��1�Ӧr: " << word << endl;
    }
}
