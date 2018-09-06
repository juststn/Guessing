#include <iostream>
using namespace std;
int main() {
srand(time(NULL));
 int num = rand() %100;
int input;
 int running = 1;
 while(running == 1){
   cin >>input;
 if (input > num){
   cout << "not equal, greater"<<endl  ; }

 if (input < num){
cout << "not equal, less" << endl; }

 if (input == num){ cout <<"equal"<<endl;
  running = 0;
 }
}
 return 0;
}
