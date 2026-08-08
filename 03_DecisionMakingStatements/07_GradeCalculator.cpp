//Assign grades based on marks.

#include <iostream>
using namespace std;
int main () {
      int marks;
      cout<<"Enter the marks: ";
      cin>>marks;
       
if ( marks >= 90) {
   cout<<"O Grade";
}
else if (marks >=80) {
   cout<<"A+ Grade";
}
else if (marks >=70) {
   cout<<"A Grade";
}
else if (marks >=60) {
   cout<<"B Grade";
}
else {
    cout<<"Re-Appear for exam";
}
return 0;
}