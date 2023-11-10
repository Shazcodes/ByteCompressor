#include "../include/compression_tool.h"
#include <fstream>
#include <queue>
#include <unordered_map>
#include <vector>
#include <string>
#include <bitset>

// Huffman Node structure
struct HuffmanNode
{
    char data;
    unsigned freq;
    HuffmanNode *left, *right;

    HuffmanNode(char data, unsigned freq) : data(data), freq(freq), left(nullptr), right(nullptr) {}
};

// Compare function for priority queue
struct compare
{
    bool operator()(HuffmanNode *left, HuffmanNode *right)
    {
        return (left->freq > right->freq);
    }
};

// Storing codes from Huffman tree in a map
void storeCodes(HuffmanNode *root, std::string str, std::unordered_map<char, std::string> &huffmanCode)
{
    if (root == nullptr)
    {
        return;
    }
    if (root->data != '$')
    {
        huffmanCode[root->data] = str;
    }
    storeCodes(root->left, str + "0", huffmanCode);
    storeCodes(root->right, str + "1", huffmanCode);
}

// Utility function to compress data using Huffman Coding
std::string compressData(const std::string &data, std::unordered_map<char, std::string> &huffmanCode)
{
    std::string encodedString;
    for (char c : data)
    {
        encodedString += huffmanCode[c];
    }
    return encodedString;
}

// Function to compress file using Huffman Coding
void compressFileHuffman(const std::string &inputFile, const std::string &outputFile)
{
    std::ifstream input(inputFile, std::ios::binary);
    std::ofstream output(outputFile, std::ios::binary);

    // Read the whole file into a string
    std::string data((std::istreambuf_iterator<char>(input)), std::istreambuf_iterator<char>());
    std::unordered_map<char, int> freq;
    for (char c : data)
    {
        freq[c]++;
    }

    // Create Huffman tree
    std::priority_queue<HuffmanNode *, std::vector<HuffmanNode *>, compare> minHeap;
    for (auto pair : freq)
    {
        minHeap.push(new HuffmanNode(pair.first, pair.second));
    }
    while (minHeap.size() != 1)
    {
        HuffmanNode *left = minHeap.top();
        minHeap.pop();
        HuffmanNode *right = minHeap.top();
        minHeap.pop();
        HuffmanNode *top = new HuffmanNode('$', left->freq + right->freq);
        top->left = left;
        top->right = right;
        minHeap.push(top);
    }

    // Store Huffman Codes in a map
    std::unordered_map<char, std::string> huffmanCode;
    storeCodes(minHeap.top(), "", huffmanCode);

    // Compress data
    std::string encodedData = compressData(data, huffmanCode);

    // Write compressed data to output file
    output << encodedData;

    input.close();
    output.close();
}

// Decompression function for Huffman Coding would go here
void decompressFileHuffman(const std::string &inputFile, const std::string &outputFile)
{
    // Huffman decompression logic goes here.
}
