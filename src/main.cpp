#include <iostream>
#include <string>
#include "../include/compression_tool.h"

int main()
{
    std::string inputFile, outputFile;
    int choice, method;

    std::cout << "Welcome to ByteCompressor!\n";
    std::cout << "A simple yet powerful tool for file compression and decompression.\n";

    while (true)
    {
        std::cout << "Enter 1 for compression, 2 for decompression, 0 to exit: ";
        std::cin >> choice;
        std::cin.ignore();

        if (choice == 0)
        {
            break;
        }

        std::cout << "Choose method: 1 for Run-Length Encoding, 2 for Huffman Coding: ";
        std::cin >> method;
        std::cin.ignore();

        std::cout << "Enter input file name: ";
        std::getline(std::cin, inputFile);
        std::cout << "Enter output file name: ";
        std::getline(std::cin, outputFile);

        if (choice == 1)
        {
            if (method == 1)
            {
                compressFileRLE(inputFile, outputFile);
            }
            else
            {
                compressFileHuffman(inputFile, outputFile);
            }
        }
        else if (choice == 2)
        {
            if (method == 1)
            {
                decompressFileRLE(inputFile, outputFile);
            }
            else
            {
                decompressFileHuffman(inputFile, outputFile);
            }
        }
        else
        {
            std::cout << "Invalid choice!\n";
        }
    }

    std::cout << "Thank you for using ByteCompressor. Goodbye!\n";
    return 0;
}
