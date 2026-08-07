//Calculate the percentage from total marks.
#include <iostream> 
using namespace std; 
int main() { 
    double marksObtained; 
    double totalMarks;
    double percentage; 
    
    cout << "Enter marks obtained: "; 
    cin >> marksObtained; 
    
    cout << "Enter total marks: "; 
    cin >> totalMarks; 
    
    percentage = (marksObtained / totalMarks) * 100; 
    
    cout << "Percentage: " << percentage << "%" << endl; 
    
    return 0; 
} 