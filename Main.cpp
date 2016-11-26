// Creating A 3 letter string generator. The Words generated are intended to be randomly concatenated together and 
// used as names for an NPC generator
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

bool PartCreate(string characters, string filename);

int main ()
{
	string file, material_string;
	cout << "filename: ";
	cin >> file;
	cout << "String for name Generation: ";
	cin >> material_string;
	PartCreate("abcdefghijklmnopqrstuvwxyz", file);
	return 0;
}

bool PartCreate(string characters, string filename)
{
	ofstream outfile;
	outfile.open(filename + ".txt");
	int characters_size = characters.size();
	cout << characters_size;//
	for (int i = 0; i < characters_size; i++){
		for (int j = 0; j < characters_size; j++){
			for (int k = 0; k < characters_size; k++){
				cout << characters[i] << characters[j] << characters[k] << "\n";
				//system("pause");
				if ((characters[i] == characters[j]) | (characters[j] == characters[k]))
					continue;
				else
					outfile << characters[i] << characters[j] << characters[k] << endl;
			}
		}
	}
	outfile.close();
	return true;
}