global	_ft_write
extern	___error

section .text
_ft_write:
	push	rbx
	mov		rax,	0x2000004	;	put read system-call-code into register rax
								;	rdi - file descriptor, rsi - pointer to string, rdx - string length
	syscall						;	call write(rdi, rsi, rdx)
	jc		error				;	if CF == 1 jump to "error" label
	pop		rbx
	ret							;

error:
	mov		rdx,	rax			;	rdx = error code
	call	___error			;	rax = pointer to errno
	mov		[rax],	rdx			;	*rax = rdx
	mov		rax,	-1			;	return -1
	pop		rbx
	ret							;
