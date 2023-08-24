section .data
	global main
	extern printf
main:
	mov     edi, mesg
	mov     eax, 0
	call    printf

	section .text
mesg: db      "Hello, Holberton", 10
