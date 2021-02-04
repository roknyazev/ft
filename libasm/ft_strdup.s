global	_ft_strdup
extern	___error
extern	_ft_strcpy
extern	_ft_strlen
extern	_malloc

section .text
_ft_strdup:
	push	rdi				;	push rdi (pointer to string) to stack
	call	_ft_strlen		;	rax = strlen(rdi)
	mov		rdi,	rax		;	rdi = rax
	inc		rdi				;	rdi++
	call	_malloc			;	rax = malloc(rdi)
	cmp		rax,	0		;	rax - 0
	jz		reterr			;	if (rax == 0) jump to "error" label
	mov		rdi,	rax		;	rdi = rax (rdi = pointer to memory for dublicate)
	pop		rsi				;	rsi = pointer to string, that is in stack
	call	_ft_strcpy		;	rax = strcpy(rdi, rsi)
	ret

reterr:
	ret

