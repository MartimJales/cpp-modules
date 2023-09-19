#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main(int argc, char** argv)
{
    if (argc != 4)
    {
        std::cout << "Incorrect input, read the subject ;)" << std::endl;
        return 1;
    }

    std::ifstream file(argv[1]);
    if (!file) {
        std::cerr << "Unable to open input file." << std::endl;
        return 1;
    }

    std::string outputFileName = std::string(argv[1]) + ".replace";
    std::ofstream outputFile(outputFileName.c_str());
    if (!outputFile) {
        std::cerr << "Unable to open output file." << std::endl;
        return 1;
    }

    char c;
    std::ostringstream wordBuffer;

    while (file.get(c)) {
        if (isspace(c)) {
            if (wordBuffer.str() == argv[2]) {
                outputFile << argv[3];
            } else {
                outputFile << wordBuffer.str();
            }
            wordBuffer.str(""); // clear the buffer
            wordBuffer.clear();
            outputFile << c;  // output the space or punctuation directly
        } else {
            wordBuffer << c;
        }
    }

    // Handle the last word if there's no delimiter after it
    if (wordBuffer.str() == argv[2]) {
        outputFile << argv[3];
    } else {
        outputFile << wordBuffer.str();
    }

    file.close();
    outputFile.close();
    return 0;
}
