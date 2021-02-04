global	_ft_read
extern	___error

section .text
_ft_read:
	mov		rax,	0x2000003	;	put write system-call-code into register rax
								;	rdi - file descriptor, rsi - pointer to string, rdx - string length
	syscall						;	call read(rdi, rsi, rdx)
	jc		error				;	if CF == 1 jump to "error" label
    ret							;


error:
	mov		rdx,	rax			;	rdx = error code
    call	___error			;	rax = pointer to errno
    mov		[rax],	rdx			;	*rax = rdx
    mov		rax,	-1			;	return -1
    ret							;
