#include <iostream>
using namespace std;
int main() {
int num = rand() %100+1;
int input;
cin >>input;
if(input != num){
cout << "not equal" << endl; }
else { cout <<"equal"<<endl; }
return 0; }
