# DATA-COMPRESSION-TOOL

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: ELIAS BESRA

*INTERN ID*: CT04DF2337

*DOMAIN*: C PROGRAMMING

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTHOSH KUMAR

## Run-Length Encoding (RLE) Compression/Decompression in C

Run-Length Encoding (RLE) is a simple yet efficient lossless data compression algorithm that works by reducing the size of repetitive sequences in data. This program, implemented in **C**, provides both **compression** and **decompression** functionalities for text files using RLE. The tool is designed to be lightweight, fast, and easy to use, making it suitable for educational purposes, small-scale file compression, and applications where basic data reduction is needed.  

## **Tools and Platforms Used**  

### **Programming Language**  
The program is written in **C**, chosen for its efficiency, low-level control, and suitability for file operations.  

### **Development Environment**  
The **GCC (GNU Compiler Collection)** was used to compile the program on Unix-based systems (Linux/macOS). Windows users can compile it using **MinGW** or **Cygwin**.  

Various editors and IDEs can be used:  
- **Visual Studio Code** (with C/C++ extensions)  
- **Vim/Emacs** (for lightweight editing)  
- **Code::Blocks/Dev-C++** (for Windows users)  

### **Libraries Used**  
Key libraries include:  
- **`stdio.h`**: For file handling (`fopen`, `fgetc`, `fprintf`, etc.).  
- **`stdlib.h`**: For string-to-integer conversion (`atoi`).  
- **`ctype.h`**: For character classification (`isalpha`, `isdigit`).  

### **Operating System Compatibility**  
The program works on:  
- **Linux/Unix** (Ubuntu, Fedora, macOS)  
- **Windows** (via MinGW or WSL)  

## **How the Program Works**  

### **Compression Function**  
The compression process involves:  
1. **Input File Reading**: Opens the input file in **read mode**.  
2. **Run Detection & Encoding**: Counts consecutive occurrences of the same character and writes the character followed by its count.  
3. **Output File Writing**: Saves the compressed data to a specified output file.  
4. **Terminal Display**: Shows the **original text** and the **compressed output** in the terminal.  

### **Decompression Function**  
The decompression process includes:  
1. **Input File Reading**: Opens the compressed file in **read mode**.  
2. **Run Decoding**: Reconstructs the original sequence from character-number pairs.  
3. **Output File Writing**: Writes the decompressed data to a specified output file.  
4. **Terminal Display**: Shows the **compressed input** and the **decompressed output** in the terminal.  

### **User Interaction**  
The program provides a **menu-driven interface** to choose between compression and decompression. Users input filenames, and the program executes the selected operation while displaying results.  

## **Applications of This Program**  

### **Text File Compression**  
Useful for compressing **logs, documents, or configuration files** with repeated characters.  

### **Image Processing**  
Some **simple bitmap formats** use RLE for **lossless image compression**, especially for images with large uniform regions.  

### **Network Data Transmission**  
Can be used in **low-bandwidth environments** to reduce payload size before transmission.  

### **Embedded Systems**  
Suitable for **microcontrollers** with limited storage, such as Arduino or ESP32.  

### **Bioinformatics**  
DNA sequences often have **long repeats**, making RLE a viable compression method.  

## **Limitations and Possible Improvements**  

### **Limitations**  
1. **Inefficient for Non-Repetitive Data**: If input has few repetitions, RLE may **increase file size**.  
2. **No Binary File Support**: The current version only works with **text files**.  
3. **No Error Handling for Malformed Input**: Corrupted files may cause silent failures.  

### **Possible Improvements**  
1. **Binary File Support**: Extend functionality to work with **binary data**.  
2. **Combination with Other Algorithms**: Use RLE as a **preprocessing step** before more advanced compression techniques.  
3. **Better User Interface**: Add **command-line arguments** for easier use.  
4. **Multithreading**: Speed up compression/decompression for large files using **parallel processing**.  

## **Conclusion**  
This **Run-Length Encoding (RLE) program** provides a simple yet effective way to compress and decompress text files. While it has limitations, it serves as an **excellent educational tool** for understanding basic data compression. Future improvements could make it more versatile for real-world applications.

## Output

![Image](https://github.com/user-attachments/assets/3c7060d3-6407-48fe-81f4-33077d537f72)
