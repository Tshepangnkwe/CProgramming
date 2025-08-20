# File I/O Practice Problems

Complete these 20 practice problems to master C file input/output operations. Write all programs from scratch and test them thoroughly.

## Instructions
- Create a separate C file for each problem
- Name your files: `file_io_01.c`, `file_io_02.c`, etc.
- Include comments explaining your logic
- Test with various inputs including edge cases
- Use proper C naming conventions (snake_case)

---

## Problem 1: Create and Write File
**File:** `file_io_01.c`

**Description:** Create a text file and write some data to it.

**Requirements:**
- Use fopen() in write mode
- Write multiple lines of text
- Close file properly and check for errors

---

## Problem 2: Read and Display File
**File:** `file_io_02.c`

**Description:** Read data from a text file and display it on screen.

**Requirements:**
- Check if file exists before reading
- Read character by character or line by line
- Handle file not found errors

---

## Problem 3: Append to File
**File:** `file_io_03.c`

**Description:** Append data to an existing file without overwriting.

**Requirements:**
- Use append mode
- Add timestamp to new entries
- Test with existing and non-existing files

---

## Problem 4: Count Lines in File
**File:** `file_io_04.c`

**Description:** Count the number of lines in a text file.

**Requirements:**
- Count newline characters
- Handle files without trailing newline
- Display total line count

---

## Problem 5: Count Words in File
**File:** `file_io_05.c`

**Description:** Count the number of words in a text file.

**Requirements:**
- Define word boundaries (spaces, tabs, newlines)
- Handle multiple consecutive spaces
- Display word count

---

## Problem 6: Count Characters in File
**File:** `file_io_06.c`

**Description:** Count the number of characters in a text file.

**Requirements:**
- Count all characters including spaces
- Count excluding spaces and newlines
- Display both counts

---

## Problem 7: Copy File Contents
**File:** `file_io_07.c`

**Description:** Copy contents from one file to another.

**Requirements:**
- Read from source file
- Write to destination file
- Handle file permissions and errors

---

## Problem 8: Merge Two Files
**File:** `file_io_08.c`

**Description:** Merge contents of two files into a third file.

**Requirements:**
- Read from two source files
- Combine content in order
- Create new merged file

---

## Problem 9: Find and Replace in File
**File:** `file_io_09.c`

**Description:** Find and replace a word in a file.

**Requirements:**
- Search for specific word
- Replace with new word
- Write updated content to new file

---

## Problem 10: Delete File
**File:** `file_io_10.c`

**Description:** Delete a file from the system.

**Requirements:**
- Check if file exists
- Use remove() function
- Confirm deletion with user

---

## Problem 11: Read Even Lines Only
**File:** `file_io_11.c`

**Description:** Read and display only even-numbered lines from a file.

**Requirements:**
- Track line numbers while reading
- Display lines 2, 4, 6, etc.
- Handle files with few lines

---

## Problem 12: Read Odd Lines Only
**File:** `file_io_12.c`

**Description:** Read and display only odd-numbered lines from a file.

**Requirements:**
- Track line numbers while reading
- Display lines 1, 3, 5, etc.
- Handle files with few lines

---

## Problem 13: Sort File Lines
**File:** `file_io_13.c`

**Description:** Sort lines in a file alphabetically.

**Requirements:**
- Read all lines into memory
- Sort using string comparison
- Write sorted lines to new file

---

## Problem 14: Find Longest Line
**File:** `file_io_14.c`

**Description:** Find and display the longest line in a file.

**Requirements:**
- Track length of each line
- Remember longest line
- Display both content and length

---

## Problem 15: Find Shortest Line
**File:** `file_io_15.c`

**Description:** Find and display the shortest line in a file.

**Requirements:**
- Track length of each line
- Remember shortest line
- Ignore empty lines

---

## Problem 16: Encrypt File Contents
**File:** `file_io_16.c`

**Description:** Encrypt the contents of a file using Caesar cipher.

**Requirements:**
- Read file character by character
- Apply Caesar cipher shift
- Write encrypted content to new file

---

## Problem 17: Decrypt File Contents
**File:** `file_io_17.c`

**Description:** Decrypt the contents of a file using Caesar cipher.

**Requirements:**
- Read encrypted file
- Apply reverse Caesar cipher shift
- Write decrypted content to new file

---

## Problem 18: Word Frequency Counter
**File:** `file_io_18.c`

**Description:** Count the frequency of each word in a file.

**Requirements:**
- Read words from file
- Store word counts
- Display frequency table

---

## Problem 19: Remove Blank Lines
**File:** `file_io_19.c`

**Description:** Remove all blank lines from a file.

**Requirements:**
- Read file line by line
- Skip empty or whitespace-only lines
- Write non-blank lines to new file

---

## Problem 20: Split File into Two
**File:** `file_io_20.c`

**Description:** Split a file into two files based on line numbers.

**Requirements:**
- Put first half of lines in file1
- Put second half of lines in file2
- Handle odd number of lines

---

## Testing Your Solutions

For each problem, test with:
1. **Valid files** - normal text files with content
2. **Edge cases** - empty files, single line files, very large files
3. **Invalid inputs** - non-existent files, permission issues
4. **Boundary conditions** - maximum file sizes, special characters
5. **Real-world scenarios** - actual text documents, code files

## Evaluation Criteria

Your solutions should demonstrate:
- [ ] Correct file opening and closing
- [ ] Proper error checking and handling
- [ ] Appropriate file modes (read, write, append)
- [ ] Memory management for dynamic content
- [ ] Proper use of file manipulation functions
- [ ] Clear and readable code with comments
- [ ] Meaningful variable names using snake_case

## Common Concepts to Practice

1. **File Operations**: fopen(), fclose(), fread(), fwrite()
2. **File Modes**: "r", "w", "a", "r+", "w+", "a+"
3. **Error Handling**: Checking return values, perror()
4. **String Manipulation**: Working with file content
5. **Memory Management**: Dynamic allocation for file content
6. **File Positioning**: fseek(), ftell(), rewind()
7. **Character Processing**: fgetc(), fputc(), fgets(), fputs()

## Tips for Success

1. **Always Check File Operations**: Verify fopen() success
2. **Close Files Properly**: Use fclose() to prevent data loss
3. **Handle Errors Gracefully**: Provide meaningful error messages
4. **Use Appropriate Buffer Sizes**: For efficient file reading
5. **Test with Different File Types**: Text, binary, empty files
6. **Consider File Permissions**: Read/write access issues

## Next Steps

After completing these problems:
1. Review your solutions for improvements
2. Try working with binary files
3. Move on to Functions exercises
4. Practice combining file I/O with other concepts

Remember: Programming is learned by doing. Write the code yourself, make mistakes, debug them, and learn from the process!
