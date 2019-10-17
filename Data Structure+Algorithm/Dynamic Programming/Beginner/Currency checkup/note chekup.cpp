#include <bits/stdc++.h> 
using namespace std; 
void Currency(int amount) 
{ 
	   int notes[9] = { 2000, 500, 200, 100, 
                     50, 20, 10, 5, 1 }; 
    int noteCounter[9] = { 0 };    
    for (int i = 0; i < 9; i++) { 
        if (amount >= notes[i]) { 
            noteCounter[i] = amount / notes[i]; 
            amount = amount - noteCounter[i] * notes[i]; 
        } 
    }  
    for (int i = 0; i < 9; i++) { 
        if (noteCounter[i] != 0) 
		{ 
            cout <<"No. of notes of "<< notes[i] << " : " << noteCounter[i] << endl; 
        } 
    } 
}  
int main() 
{ 
	system("Color 4e");
 
    int n;
    cout<<"Enter Tour Amount Please Rs = ";
	cin>>n; 
    Currency(n); 
    return 0; 
} 
