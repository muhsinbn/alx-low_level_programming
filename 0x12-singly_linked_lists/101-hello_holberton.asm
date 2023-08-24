section .info
	global main
	extern printf
main:
	mov     edi, mess
	mov     eax, 0
	call    printf

	section .data
mesg: db      "Hello, Holberton", 10
