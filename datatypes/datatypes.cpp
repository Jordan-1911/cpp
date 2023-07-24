/**
 * INTRO TO DATA TYPES
 *
 * - Recap: variables are names for a piece of memory that can be used to store information. Computers have RAM that is available for programs to use. When a variable is defined, a piece of memory is set aside for that variable
 * 
 * - BINARY DIGIT
 * -- the smallest unit of memory is a binary digit or a bit
 * -- a bit can hold a value of 0 or 1
 * -- Like a light switch, either the light is OFF (0),
 * or the light is ON (1)
 * -- there is no in between. If we were to look at a random segment of memory, all we would see is 011010101100 or some combination thereof
 * 
 * - memory is organized into sequential units called memory addresses or addresses for short
 * -- this is similar to how a street address can be used to find a given house on a street, the memory address allows us to find and access the contents of memory at a particular location
 * 
 * - in modern computer architectures, each bit does not get its own unique memory address. This is because the number of memory addresses is limited, and need to access data bit-by-bit is rate. Instead, each memory address holds 1 byte of data.
 * 
 * - BYTES
 * -- a byte is a group of bits that are operated on as a unit. The modern standard is that a byte is comprised of 8 sequential bits.
 * 
 * For illustration:
 * 
 * Address 3 ---- 11101000
 * Address 2 ---- 00000000
 * Address 1 ---- 10010111
 * Address 0 ---- 01101001
 * 
 * - because all data on a computer is just a sequence of bits, we use a data type to tell the compiler how to interpret the contents of memory in some meaningful way.
 * - When you give an object a value, the compiler and CPU take care of encoding your value into the appropriate sequence of bits for that data type.
 * - For example, when you assign an integer object the value of 65, that value is converted to the sequence of bits 0100 0001 and sotred in the memory assigned to the objecf.
 * 
 * 
 * FUNDAMENTAL DATA TYPES
 * - AKA basic types
 * - AKA primitive types
 * - AKA built-in types
 * 
 * float ---- floating point ---- number with a fractional part ---- 3.1415
 * double ---- floating point ---- number with a fractional part ---- 3.1415
 * long double ---- floating point ---- number with a fractional part ---- 3.1415
 * bool ---- Integral (Boolean) ---- true or false ---- true
 * char ---- Integral (Character) ---- a single character of text ---- 'c'
 * wchar_t ---- Integral (Character) ---- a single character of text ---- 'c'
 * char8_t (C++ 20) Integral (Character) ---- a single character of text ---- 'c'
 * char16_t (C++11) ---- Integral (Character) ---- a single character of text ---- 'c'
 * char32_t (C++11) ---- Integral (Character) ---- a single character of text ---- 'c'
 * 
 * short int ---- Integral (Integer) ---- positive and negative whole numbers, including 0 ---- 64
 * int ---- Integral (Integer) ---- positive and negative whole numbers, including 0 ---- 64
 * long int ---- Integral (Integer) ---- positive and negative whole numbers, including 0 ---- 64
 * long long int (C++11) ---- Integral (Integer) ---- positive and negative whole numbers, including 0 ---- 64
 * 
 * std::nullptr_t (C++11) ---- Null Pointer ---- a null pointer ---- nullptr
 * 
 * void ---- Void ---- no type ---- n/a
 * 
 * - most modern programming languages include a fundamental *string* type
 * 
 * - The _t suffix
 * -- many of the types defined in newer versions of C++ (e.g. std::nullptr_t) use a _t suffix. This simply means "type" and its a commen nomenclature applied to modern types
 * 
 * 
 * 
 */
