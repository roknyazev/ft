global _ft_strlen

section .text
_ft_strlen:
		mov		rax,	-1			;	rax = -1
again:	inc		rax					;	rax++
		cmp		byte [rdi+rax], 0	;	[rdi+rax] - 0 and set ZF (ZF = 0 if [rdi+rax] != 0; ZF = 1 if [rdi+rax] == 0)
    	jne		again				;	if ZF == 0 jump to "again" label (if [rdi+rax] not equal 0 then repeat)
		ret							;	return rax