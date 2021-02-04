global _ft_strcpy

section .text
_ft_strcpy:
		mov		rcx,	-1			;	rcx = -1
		mov		rax,	rdi			;	rax = dst
again:
		inc		rcx					;	rcx++
		mov		dl, [rsi + rcx]		;	dl = *(src + rcx)
		mov		[rdi + rcx], dl		;	*(src + rcx) = dl
		cmp		dl, 0				;	dl - 0
		jne		again				;	if (dl - 0) != 0 continue cycle
		ret							;	return rax
