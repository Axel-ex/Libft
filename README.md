# About
The Libft is the first project of the 42 cursus, aiming to implement some of the functions found in the standard C library. 

# Usage
``git clone`` and ``cd`` into the directory. Then hit ``make``. The makefile will generate a ``libft.a``

# Functions
| :---: | :--- |
| ft_isalpha | checks if c is a char which belongs to the alphabet.
| ft_isdigit| checks if c is a digit.
| ft_isalnum | checks if c is a char of the alphabet or a digit.
| ft_isascii | checks if c is an ascii char.
| ft_isprint | checks if c is a printable char. 
| ft_toupper | puts lower case letters to upper case.
| ft_tolower | puts upper case letters to lower case.. 
| ft_memset | fills the first n bytes of the memory area pointed to by s with the byte c.
| ft_bzero | erases the data in the n bytes of the memory area starting at the location pointed to by s, by writing '\0' to that area.
| ft_memcpy | copies n bytes from memory area src to memory area dest. Memory areas must not overlap.
| ft_memmove | copies n bytes from memory area src to memory area dest. Memory areas can overlap.
| ft_memchr | scans the initial n bytes of the memory area pointed to by s for the first instance of c.
| ft_memcmp | compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.
| ft_strlen | returns the sisze of the string pointed to by s.
| ft_strlcat | Concacenates the string pointed by src to the string pointed by dest.
| ft_strlcpy | Copies the content of the string pointed by src into the string pointed by dst.
| ft_strchr | returns a pointer to the first occurrence of the character c in the string pointed to by s.
| ft_strrchr | returns a pointer to the last occurrence of the character c in the string pointed to by s.
| ft_strnstr | locates the first occurrence of the null-terminated string little in the null-terminated string big.
| ft_strncmp | compares n bytes of the strings pointed to by s1 and s2.
| ft_atoi | transform a string into an int.
| ft_strdup | duplicates the string pointed to by s and returns the copy (allocated on the heap).
| ft_calloc | allocates memory space for the type specified by nmemb.
| ft_substr | return a substring from the string pointed to by s from the index start of size len.
| ft_strjoin | joins two string. returns a pointer of the joined string (allocated on the heap).
| ft_strtrim | remove character found in the string pointed to by set from the beggining and the end of s1 (allocated on the heap).
| ft_split | split the string pointed to by s into an array of string on the specified separator c (allocated on the heap).
| ft_itoa | transform an int into a string.
| ft_strmapi | applies a function pointed to by f to each elements of the string pointed to by s (allocated on the heap).
| ft_striteri | applies a function pointed to by f to each elements of the string pointed to by s.
| ft_putchar_fd | puts a char in the file descriptor specified by fd.
| ft_putstr_fd | puts the string pointed to by s in the file descriptor specified by fd.
| ft_putendl_fd | puts the string pointed to by s in the file descriptor specified by fd.
| ft_putnbr_fd | puts the int in the file descriptor specified by fd.
| ft_lstnew | creates a new node of a list and returns it (allocated on the heap).
| ft_lstadd_front| adds the node pointed to by new_node at the beggining of the lst. **lst then points to the new_node.
| ft_lstsize | returns the size of the list pointed to by lst.
| ft_lstlast | returns the last node of the list pointed to by lst.
| ft_lstadd_back | adds the node pointed to by new_node at the end of the lst.
| ft_lstclear | applies the delete function to each element of the list pointed to by lst.
| ft_lstdelone | applies the delete function to the element of the list pointed to by lst.
| ft_lstmap | applies the function pointed to by f to each element of thec list pointed to by lst. returns a pointer to the head of the modified list (allocated on the heap). (undirect modfication)
| ft_lstiter | applies the function pointed to by f to each element of the list pointed to by lst. (direct modification)
| get_next_line | returns the first new-line-terminated line from the file descriptor fd.
| ft_printf | print output containing values specified in the string pointed to by format.