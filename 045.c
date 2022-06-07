/* Preprocessor in C
 * Quick Recap
 * 1. A compiler converts textual form of C program into an executable.
 * 2. There are four phases for a C program to become an executable.
 * Preprocessing -> Compilation -> Assembly -> Linking
 * Preprocessing
 * 1. Removal of comments
 * 2. Expansion of macros
 * 3. Expansion of include files
 * 
 * Compilation
 * 1. Assembly level instructions are generated
 * 
 * Assembly
 * 1. .o and .exe files are created.
 * 2. But function calls are not resolved yet.
 * 3. ALI are converted to machine code.
 * 
 * Linking
 * 1. Links the function implementation.
 * 
 * 
 * What is a C Preprocessor?
 * 1. C preprocessor comes under action before the actual compilation process.
 * 2. C preprocessor is not a part of the c compiler.
 * 3. It is a text text substitution tool.
 * 4. All preprocessor commands begin with a hash symbol (#).
 * 
 * Preprocessor commands examples
 * 1. #define
 * 2. #include
 * 3. #undef
 * 4. #ifdef
 * 5. #ifndef
 * 6. #if -> if any compile time condition is true.
 * 7. #else
 * 8. #elif
 */
