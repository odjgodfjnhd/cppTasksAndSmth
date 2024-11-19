#include <iostream>
#include <fstream>
#include <string>


using namespace std;
int main()
{

	ifstream testFile("sequences.txt");
	string line;
	ofstream answerFile;
	answerFile.open("answer.txt");
	int counterOfWords = 0, counterOfSentences = 0;
	while (getline(testFile, line))
	{
		int lengthOfLine = line.length();
		for (int i = 0; i < lengthOfLine; i++)
		{
			if (line[i] == ' ' or line[i] == ',' or line[i] == ';' or line[i] == ':')
			{
				if (i != 0 and (line[i - 1] == ' ' or line[i - 1] == ',' or line[i - 1] == ';' or line[i - 1] == ':' or line[i - 1] == '.' or line[i - 1] == '!' or line[i - 1] == '?'))
				{
					continue;
				}
				counterOfWords++;


			}
			else if (line[i] == '.' or line[i] == '!' or line[i] == '?')
			{
				if (i != 0 and (line[i - 1] == ' ' or line[i - 1] == ',' or line[i - 1] == ';' or line[i - 1] == ':' or line[i - 1] == '.' or line[i - 1] == '!' or line[i - 1] == '?'))
				{
					continue;
				}
				counterOfSentences++;
				counterOfWords++;
			}
		}
	}
	answerFile << "Total sentences in file: " << counterOfSentences << endl;
	answerFile << "AVG words per sentece: " << (double)counterOfWords / (double)counterOfSentences << endl;
	answerFile << "Total words in file: " << counterOfWords << endl;
	answerFile.close();

	return 0;
}