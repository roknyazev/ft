;global _ft_strcmp
;
;section .text
;_ft_strcmp:
;		xor	rcx,	rcx			;	rcx = 0
;again:
;		movsx	rax, byte[rdi + rcx]		;	al = *(str1 + rcx)
;		movsx	rbx, byte[rsi + rcx]		;	bl = *(str2 + rcx)
;		inc rcx					;	rcx++
;		cmp	rax, rbx				;	al - bl
;		je	checkendl			;	if (al - bl) == 0 check that al is 0
;		js	retn1				;	if (al - bl) < 0 return -1
;		jmp	ret1				;	if (al - bl) > 0 return 1
;checkendl:
;		cmp rax, 0				;	al - 0
;		je	ret0				;	if (al - 0) == 0 return 0
;		jmp again				;	if (al - 0) != 0 continue cycle
;ret0:
;		xor rax, rax			;	rax = 0
;		ret						;	return rax
;retn1:
;		cmp	rax, 0
;		jl	ret1
;		mov	rax, -1				;	rax = -1
;		ret						;	return rax
;ret1:
;		cmp	rbx, 0
;		jl	retn1
;		mov rax, 1				;	rax = 1
;		ret						;	return rax
;

global _ft_strcmp
section .text
_ft_strcmp:
		xor	rcx,	rcx			;	rcx = 0
again:
		mov	al, [rdi + rcx]		;	al = *(str1 + rcx)
		mov	bl, [rsi + rcx]		;	bl = *(str2 + rcx)
		inc rcx					;	rcx++
		cmp	al, bl				;	al - bl
		je	checkendl			;	if (al - bl) == 0 check that al is 0
		js	retn1				;	if (al - bl) < 0 return -1
		jmp	ret1				;	if (al - bl) > 0 return 1
checkendl:
		cmp al, 0				;	al - 0
		je	ret0				;	if (al - 0) == 0 return 0
		jmp again				;	if (al - 0) != 0 continue cycle
ret0:
		xor rax, rax			;	rax = 0
		ret						;	return rax
retn1:
		cmp	al, 0				;	if al < 0
		jl	ret1				;	return 1
		mov	rax, -1				;	rax = -1
		ret						;	return rax
ret1:
		cmp	bl, 0				;	if bl < 0
		jl	retn1				;	return -1
		mov rax, 1				;	rax = 1
		ret						;	return rax
