#include <iostream> 
#include <set> 
#include <vector> 
using namespace std; 
  
// Function to convert Vector to Set 
set<int> convertToSet(vector<int> v) 
{ 
    // Declaring the  set 
    set<int> s; 
  
    // Traverse the Vector 
    for (int x : v) { 
  
        // Insert each element 
        // into the Set 
        s.insert(x); 
    } 
  
    // Return the resultant Set 
    return s; 
} 
  
// Functiont for printing the set 
void printSet(set<int> s) 
{ 
  
    cout << "Set: "; 
    for (int x : s) { 
        cout << x << " "; 
    } 
    cout << endl; 
} 
  
// Functiont for printing the vector 
void printVector(vector<int> vec) 
{ 
  
    cout << "Vector: "; 
    for (int x : vec) { 
        cout << x << " "; 
    } 
    cout << endl; 
} 
  
// Driver Code 
int main() 
{ 
  
    // Vector 
    vector<int> vec = { 1, 2, 3, 1, 1 }; 
    printVector(vec); 
  
    // Convert Vector to Set 
    set<int> s = convertToSet(vec); 
  
    printSet(s); 
  
    return 0; 
} 
