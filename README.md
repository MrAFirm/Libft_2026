*This project has been created as part of the 42 curriculum by /<likhye-y>.*

## Description

This project is for us to reverse engineer and recreate a lot of the typical functions we normally use in different libraries and conform them into one, our own library for 42.

## Instructions

To use the `libft` library, first run `make` or `make libft.a` in the terminal of the project's root directory. Then create your own __main.c__ including the __libft.h__ header, and compile using `cc -Wall -Wextra -Werror main.c libft.a`

* To delete all the `object` files, use `make clean`
* To delete all the `object` files and / or the `static library`, use `make fclean`
* To `Recompile` the library, use `make re`

## Resources

The behaviour of each function was created based on the details in ```man``` and research done on websites such as stackoverflow, medium and geeksforgeeks.

This website provides the visualisation of memmove was used without the given solution to determine how the function can copy src to dest without memory and data loss.

https://marmota.medium.com/c-language-making-memmove-def8792bb8d5

* **Usage of A.I**
  * **AI used for** - Chatgpt in explaining and guidance on return values for memory, edge case checks, minor error handling for small missed out areas, confidence and verifications, and explanations of certain conditions and concepts like iterating while implementing a function pointer, memory typecasts and memory address return values, and quizzes me. **NO ANSWERS WERE GIVEN FROM AI, UPDATED THE PERSONALISATION INSTRUCTIONS TO ONLY GIVE GUIDANCE**

## Library
* Part 1 - Libc Functions
  * `ft_isalpha` - Check if function param is a part of the alphabet.
  * `ft_isdigit` - Check if function param is a whole number.
  * `ft_isalnum` - Check if function param is a part of the alphabet or a whole number.
  * `ft_isascii` - Check if function param is in the Ascii table. **Not Extended**
  * `ft_isprint` - Check if function param is a printable character.
  * `ft_strlen` - Calculates the length of a string.
  * `ft_memset` - Initialises pointer to a constant byte.
  * `ft_bzero` - Initialises pointer to 0.
  * `ft_memcpy` - Copy memory from src to dest.
  * `ft_memmove` - Copy memory from src to dest depending on src and / or dest size to prevent memory loss.
  * `ft_strlcpy` - Copy a string to dest based on src length.
  * `ft_strlcat` - Concatenate src string to dest based on src and dest length.
  * `ft_toupper` - Convert a character to uppercase.
  * `ft_tolower` - Convert a character to lowercase.
  * `ft_strchr` - Finding the first instance of the character in a string.
  * `ft_strrchr` - Finding the last instance of the character in a string.
  * `ft_strncmp` - Comparing two strings up to the size of n and returning the difference.
  * `ft_memchr` - Finding the first instance of the character in a block of memory.
  * `ft_memcmp` - Comparing two blocks of memory up to the size of n and returns the difference.
  * `ft_strnstr` - Scanning and locating a substring within a string.
  * `ft_atoi` - Converts Ascii char into integer.
  * `ft_calloc` - Allocates memory and assigns the memory to 0.
  * `ft_strdup` - Creates an empty array using malloc and copies a string into it.

* Part 2 - Additional Functions
  * `ft_substr` - Finds the substring in the string and copies it into a malloced array.
  * `ft_strjoin` - Creates an array using malloc to store the concatenation of src and dest.
  * `ft_strtrim` - Trims the referrence characters only at the start and end of the string.
  * `ft_split` - Creates an array of pointers to store each word separated by a delimiter.
  * `ft_itoa` - Converts integer into Ascii char.
  * `ft_strmapi` - Applying a function pointer to each character of a string and place them into a malloced array.
  * `ft_striteri` - Directly applies the function pointer to each character using indexing.
  * `ft_putchar_fd` - Outputs a character to a file descriptor.
  * `ft_putstr_fd` - Outputs a string to a file descriptor.
  * `ft_putendl_fd` - Outputs a string with a newline at the end of the string to a file descriptor.
  * `ft_putnbr_fd` - Outputs the Ascii char version of number(s) to a file descriptor.

* Part 3 - Linked List
  * `ft_lstnew` - Creates a new node using a struct.
  * `ft_lstadd_front` - Adds a new node to the front of a list.
  * `ft_lstsize` - Counts the size of the list based on the number of nodes in the list.
  * `ft_lstadd_back` - Adds a new node to the back of a list.
  * `ft_lstdelone` - Deletes one node's content and frees the node.
  * `ft_lstclear` - Clears the entire list node's content and freeing all nodes.
  * `ft_lstiter` - Directly applies the function pointer to each node's content while iterating.
  * `ft_lstmap` - Applying the function pointer to a new list nodes's contents by creating the new list, nodes and adding them to the back of the list.
