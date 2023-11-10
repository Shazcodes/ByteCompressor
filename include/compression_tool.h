#ifndef COMPRESSION_TOOL_H
#define COMPRESSION_TOOL_H

#include <string>

void compressFileRLE(const std::string &inputFile, const std::string &outputFile);
void decompressFileRLE(const std::string &inputFile, const std::string &outputFile);

void compressFileHuffman(const std::string &inputFile, const std::string &outputFile);
void decompressFileHuffman(const std::string &inputFile, const std::string &outputFile);

#endif // COMPRESSION_TOOL_H