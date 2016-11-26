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
	PartCreate(material_string, file);
	return 0;
}

bool PartCreate(string characters, string filename)
{
	fstream outfile(filename);
	int characters_size = characters.size();
	for (int i = 0; i < characters_size; i++){
		for (int j = 0; j < characters_size; j++){
			for (int k = 0; k < characters_size; k++){
				if ((characters[i] == characters[j]) || (characters[j] == characters[k]))
					continue;
				else
					outfile << characters[i] + characters[j] + characters[k] + "\n";
			}
		}
	}
	outfile.close();
	return true;
}