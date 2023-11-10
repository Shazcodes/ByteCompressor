#include "../include/compression_tool.h"
#include <fstream>
#include <iostream>

void compressFileRLE(const std::string &inputFile, const std::string &outputFile)
{
    std::ifstream input(inputFile, std::ios::binary);
    std::ofstream output(outputFile, std::ios::binary);

    char currentChar, previousChar = '\0';
    int count = 0;

    std::cout << "Compressing file using RLE...\n";
    while (input.get(currentChar))
    {
        if (currentChar == previousChar && count < 255)
        {
            count++;
        }
        else
        {
            if (count > 0)
            {
                output << previousChar << char(count);
            }
            previousChar = currentChar;
            count = 1;
        }
    }

    if (count > 0)
    {
        output << previousChar << char(count);
    }

    std::cout << "RLE Compression completed.\n";
    input.close();
    output.close();
}

void decompressFileRLE(const std::string &inputFile, const std::string &outputFile)
{
    std::ifstream input(inputFile, std::ios::binary);
    std::ofstream output(outputFile, std::ios::binary);

    char ch, count;
    std::cout << "Decompressing file using RLE...\n";
    while (input.get(ch).get(count))
    {
        for (int i = 0; i < static_cast<unsigned char>(count); ++i)
        {
            output << ch;
        }
    }

    std::cout << "RLE Decompression completed.\n";
    input.close();
    output.close();
}
