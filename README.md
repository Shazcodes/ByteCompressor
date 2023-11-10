# ByteCompressor

ByteCompressor is a simple yet powerful tool for file compression and decompression, implemented in C++. This project demonstrates the use of Run-Length Encoding (RLE) and Huffman Coding algorithms to compress and decompress files efficiently.

## Features

- **Run-Length Encoding (RLE):** A simple compression technique that is particularly effective on data where many consecutive elements are the same.
- **Huffman Coding:** An optimal prefix code used for lossless data compression, based on the frequency of characters appearing in a file.
- **Support for Binary Files:** Can handle binary files, making it versatile for various types of data.
- **User-Friendly Interface:** Easy-to-use command line interface for choosing between compression and decompression, as well as selecting the desired algorithm.
- **Modular Design:** The project is structured in a modular way, separating Huffman Coding and RLE logic into different files.

## Programming Language

- The project is entirely written in C++.

## How to Run

### Prerequisites

Ensure you have a C++ compiler installed on your system, such as GCC or Clang.

### Compilation

Navigate to the project directory and compile the source files. For example, using `g++`:

```bash
g++ -o ByteCompressor src/main.cpp src/HuffmanCoding.cpp src/RunLengthEncoding.cpp -I include

This command will compile the source files and generate an executable named ByteCompressor.

Running the Application
After compiling, you can run the program using:
./ByteCompressor

Follow the on-screen prompts to select compression/decompression and the algorithm you wish to use.

Contributing
Contributions to ByteCompressor are welcome. Please feel free to fork the repository, make changes, and submit pull requests.

License
This project is open source and available under the MIT License.

Author
Shazcodes
