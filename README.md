# ByteCompressor

## Introduction
ByteCompressor is an efficient and user-friendly file compression tool, developed in C++. It utilizes both Run-Length Encoding (RLE) and Huffman Coding techniques, catering to different compression needs. This application stands out for its ability to process binary files and it is a straightforward command-line interface.

## Key Features

- **Two Compression Algorithms**: 
  - **Run-Length Encoding (RLE)**: Best suited for data with repeated elements.
  - **Huffman Coding**: Ideal for creating optimal, lossless compression for diverse data sets.
- **Binary File Support**: Capable of compressing and decompressing binary files.
- **User-Friendly CLI**: Simple and interactive command-line interface for ease of use.
- **Modular Code Structure**: Clean and well-organized codebase for easy understanding and modification.

## Technologies Used

- **C++**: The entire application is written in C++, leveraging its powerful STL (Standard Template Library).

## Project Structure

ByteCompressor/
├── src/
│ ├── main.cpp - Main application entry point.
│ ├── HuffmanCoding.cpp - Implements Huffman Coding algorithm.
│ └── RunLengthEncoding.cpp - Implements Run-Length Encoding algorithm.
├── include/
│ └── compression_tool.h - Header file for compression and decompression functions.

markdown
Copy code

## Getting Started

### Prerequisites

- A C++ compiler (like GCC or Clang).
- Basic knowledge of command-line operations.

### Compiling the Program

1. Clone the repository to your local machine.
2. Open a terminal and navigate to the root of the project directory.
3. Compile the source files:
   ```bash
   g++ -o ByteCompressor src/main.cpp src/HuffmanCoding.cpp src/RunLengthEncoding.cpp -I include
This will create an executable named ByteCompressor.

Running ByteCompressor
Execute the program in the terminal:

bash
Copy code
./ByteCompressor
Follow the interactive prompts to select either compression or decompression and choose the desired algorithm.

Contributions
Contributions, bug reports, and feature requests are welcome! Feel free to fork the repo, push your changes in a new branch, and open a pull request.

License
Distributed under the MIT License. See the LICENSE file for more information.

Author & Acknowledgements
ByteCompressor is developed by Shazcodes.
