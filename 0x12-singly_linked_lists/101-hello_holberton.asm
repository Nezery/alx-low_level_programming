global main
extern printf
main:
	mov di, format
	xor eax, eax
	mov eax, 0
	ret
format: db "Hello, Holberton\n",0
