# About
The Libft is the first project of the 42 cursus, aiming to implement some of the functions found in the standard C library. 

# Usage
``git clone`` and ``cd`` into the directory. Then hit ``make``. The makefile will generate a ``libft.a`` archive that can be compiled with your project giving you access to its content.

# Functions
| **Name** | **Prototype** | **description** | 
| :---: | :--- | :--- |
| **ft_isalpha** | int ft_isalpha(int c) | checks if c is a char which belongs to the alphabet.
| **ft_isdigit**| int ft_isdigit(int c) | checks if c is a digit.
| **ft_isalnum** | int ft_isalnum(int c) | checks if c is a char of the alphabet or a digit.
| **ft_isascii** | int ft_isascii(int c) | checks if c is an ascii char.
| **ft_isprint** | int ft_isprint(int c) | checks if c is a printable char. 
| **ft_toupper** | int ft_toupper(int c) | puts lower case letters to upper case.
| **ft_tolower** | int ft_tolower(int c) | puts upper case letters to lower case.
| **ft_memset** | void *ft_memset(void *s, int c, size_t n) | fills the first n bytes of the memory area pointed to by s with the byte c.
| **ft_bzero** | void ft_bzero(void *s, size_t n) | erases the data in the n bytes of the memory area starting at the location pointed to by s, by writing '\0' to that area.
| **ft_memcpy** | void *ft_memcpy(void *dest, const void *src, size_t n) | copies n bytes from memory area src to memory area dest. Memory areas must not overlap.
| **ft_memmove** | void	*ft_memmove(void *dest, const void *src, size_t n) | copies n bytes from memory area src to memory area dest. Memory areas can overlap.
| **ft_memchr** | void *ft_memchr(const void *s, int c, size_t n) | scans the initial n bytes of the memory area pointed to by s for the first instance of c.
| **ft_memcmp** | int ft_memcmp(const void *s1, const void *s2, size_t n) | compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.
| **ft_strlen** | size_t ft_strlen(const char *s) | returns the sisze of the string pointed to by s.
| **ft_strlcat** | size_t ft_strlcat(char *dst, const char *src, size_t size) | Concacenates the string pointed by src to the string pointed by dest.
| **ft_strlcpy** | size_t ft_strlcpy(char *dst, const char *src, size_t size) | Copies the content of the string pointed by src into the string pointed by dst.
| **ft_strchr** | char *ft_strchr(const char *s, int c) | returns a pointer to the first occurrence of the character c in the string pointed to by s.
| **ft_strrchr** | char *ft_strrchr(const char *s, int c) | returns a pointer to the last occurrence of the character c in the string pointed to by s.
| **ft_strnstr** | char *ft_strnstr(const char *big, const char *little, size_t len) | locates the first occurrence of the null-terminated string little in the null-terminated string big.
| **ft_strncmp** | int ft_strncmp(const char *s1, const char *s2, size_t n) | compares n bytes of the strings pointed to by s1 and s2.
| **ft_atoi** | int ft_atoi(const char *nptr) | transform a string into an int.
| **ft_strdup** | char *ft_strdup(const char *s) | duplicates the string pointed to by s and returns the copy (allocated on the heap).
| **ft_calloc** | void *ft_calloc(size_t nmemb, size_t size) | allocates memory space for the type specified by nmemb (allocated on the heap). 
| **ft_substr** | char *ft_substr(char const *s, unsigned int start, size_t len) | return a substring from the string pointed to by s from the index start of size len (allocated on the heap).
| **ft_strjoin** | char *ft_strjoin(char const *s1, char const *s2) | joins two string. returns a pointer of the joined string (allocated on the heap).
| **ft_strtrim** | char *ft_strtrim(char const *s1, char const *set) | remove character found in the string pointed to by set from the beggining and the end of s1 (allocated on the heap).
| **ft_split** | char **ft_split(char const *s, char c) | split the string pointed to by s into an array of string on the specified separator c (allocated on the heap).
| **ft_itoa** | char *ft_itoa(int n) | transform an int into a string (allocated on the heap).
| **ft_strmapi** | char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) | applies a function pointed to by f to each elements of the string pointed to by s (allocated on the heap). (undirect modification)
| **ft_striteri** | void ft_striteri(char *s, void (*f)(unsigned int, char *)) | applies a function pointed to by f to each elements of the string pointed to by s. (direct modification)
| **ft_putchar_fd** | void ft_putchar_fd(char c, int fd) | puts a char in the file descriptor specified by fd.
| **ft_putstr_fd** | void ft_putstr_fd(char *s, int fd) | puts the string pointed to by s in the file descriptor specified by fd.
| **ft_putendl_fd** | void ft_putendl_fd(char *s, int fd) | puts the string pointed to by s in the file descriptor specified by fd.
| **ft_putnbr_fd** | void ft_putnbr_fd(int n, int fd) | puts the int in the file descriptor specified by fd.
| **ft_lstnew** | t_list *ft_lstnew(void *content) | creates a new node of a list and returns it (allocated on the heap).
| **ft_lstadd_front** | void ft_lstadd_front(t_list **lst, t_list *new_node) | adds the node pointed to by new_node at the beggining of the lst. **lst then points to the new_node.
| **ft_lstsize** | int ft_lstsize(t_list *lst) | returns the size of the list pointed to by lst.
| **ft_lstlast** | t_list *ft_lstlast(t_list *lst) | returns the last node of the list pointed to by lst.
| **ft_lstadd_back** | void	ft_lstadd_back(t_list **lst, t_list *new_node) | adds the node pointed to by new_node at the end of the lst.
| **ft_lstclear** | void ft_lstclear(t_list **lst, void (*del)(void *)) | applies the delete function to each element of the list pointed to by lst.
| **ft_lstdelone** | void ft_lstdelone(t_list *lst, void (*del)(void *)) | applies the delete function to the element of the list pointed to by lst.
| **ft_lstmap** | t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) | applies the function pointed to by f to each element of thec list pointed to by lst. returns a pointer to the head of the modified list (allocated on the heap). (undirect modfication)
| **ft_lstiter** | void ft_lstiter(t_list *lst, void (*f)(void *)) | applies the function pointed to by f to each element of the list pointed to by lst. (direct modification)
| **get_next_line** | char *get_next_line(int fd) | returns the first new-line-terminated line from the file descriptor fd.
| **ft_printf** | int ft_printf(char const *format, ...) | print output containing values specified in the string pointed to by format.