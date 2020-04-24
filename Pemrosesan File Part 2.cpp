#include <iostream>
#include <fstream>
using namespace std;

//Membuat File
int main()
{
    ofstream datamhs;

    datamhs.open("datamhs.txt");
    

    //menulis sesuatu kedalam file
    datamhs << "Syahrul Ramadhan\n";
    datamhs << "A2\n";
    datamhs << "13020190099\n";
    datamhs << "Umur 19\n";

    datamhs.close();
    

}

#include <iostream>
#include <fstream>
using namespace std;

//Membuat File
int main()
{
    ofstream output;

    output.open("datatugas5.txt");

    //menulis sesuatu kedalam file
    output << "data mahasiswa";
    output.close();

}


#include <iostream>
#include <fstream>
using namespace std;

//Membuat File
int main()
{
    ifstream input;

    input.open("datatugas5.txt");

    //menulis sesuatu kedalam file
    string line;
    getline(input, line);
    cout << line << endl;  //perintah menulis/menampilkan teks file

    input.close();

}

#include <iostream>
#include <fstream>
using namespace std;

//Membuat File
int main()
{
    ofstream mhsFile;

    mhsFile.open("datamhs.txt");
    

    //menulis sesuatu kedalam file
    mhsFile << "Syahrul Ramadhan\n";
    mhsFile << "A2\n";
    mhsFile << "13020190099\n";

    mhsFile.close();
    

}

