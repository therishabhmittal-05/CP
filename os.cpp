// #include <iostream>
// #include <fstream>
// #include <string> using namespace std;
// int main() {
// string filename = "vifile.txt"; 
// ofstream outputFile; // For writing to file ifstream inputFile; //For reading from file
// string data;
// // Open file for writing outputFile.open(filename); if (!outputFile) {
// cerr << "Unable to open file for writing." << endl; return 1;
// }
// // Write data to the file
// outputFile << "Hello, World!" << endl;
// outputFile << "This is a test file." << endl;
// outputFile.close(); // Close file after writing
// // Open file for reading
// inputFile.open(filename);
// if (!inputFile) {
// cerr << "Unable to open file for reading." << endl;
// return 1;
// }
// // Read data from the file
// while (getline(inputFile, data)) {
// }
// cout << data << endl;
// inputFile.close(); // Close file after reading return 