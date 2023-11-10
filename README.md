# ByteCompressor README

# Introduction
# ByteCompressor is a personal project designed and developed by Shazcodes. This project showcases my skills in implementing file compression and decompression techniques. It is a simple yet powerful tool that provides efficient ways to handle file compression using two different methods: Run-Length Encoding (RLE) and Huffman Coding.

# Features
# - **File Compression and Decompression**: ByteCompressor allows users to compress and decompress files using either Run-Length Encoding or Huffman Coding.
# - **User-Friendly Interface**: The application offers a straightforward interface, guiding users through the process of compression and decompression.
# - **Two Compression Methods**:
#   - **Run-Length Encoding (RLE)**: A simple form of data compression where runs of data are stored as a single data value and count.
#   - **Huffman Coding**: An algorithm used for lossless data compression, utilizing a variable-length code table for encoding a source symbol.

# Code Overview
# - **Compression Tool Header** ([compression_tool.h](https://github.com/Shazcodes/ByteCompressor/blob/main/include/compression_tool.h)): Defines the functions for both RLE and Huffman Coding compression and decompression.
# - **Huffman Coding Implementation** ([HuffmanCoding.cpp](https://github.com/Shazcodes/ByteCompressor/blob/main/src/HuffmanCoding.cpp)): Implements the logic for compressing and decompressing files using Huffman Coding.
# - **Run-Length Encoding Implementation** ([RunLengthEncoding.cpp](https://github.com/Shazcodes/ByteCompressor/blob/main/src/RunLengthEncoding.cpp)): Implements the logic for compressing and decompressing files using Run-Length Encoding.
# - **Main Application** ([main.cpp](https://github.com/Shazcodes/ByteCompressor/blob/main/src/main.cpp)): The entry point of the application, handling user inputs and directing to the appropriate compression or decompression method.

# How to Use
# 1. **Choose Operation**: Start the application and choose between compression (1) and decompression (2).
# 2. **Select Method**: Choose the desired compression method (1 for RLE, 2 for Huffman Coding).
# 3. **File Input**: Enter the names of the input and output files.
# 4. **Process Files**: The application will process the files according to the selected method and operation.

# Author
# This project is a personal endeavor by Shazcodes, demonstrating my capabilities in software development, particularly in the area of data compression algorithms.
