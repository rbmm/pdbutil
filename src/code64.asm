
_TEXT segment 'CODE'
?strnlen@NT@@YA_K_KPEBD@Z proc
	xor eax,eax
	jecxz @@2
	push rdi
	mov rdi,rdx
	repne scasb
	jne @@1
	dec rdi
@@1:
	sub rdi,rdx
	mov rax,rdi
	pop rdi
@@2:
	ret
?strnlen@NT@@YA_K_KPEBD@Z endp

strnchr proc
	jrcxz @@1
	mov rax,r8
	xchg rdi,rdx
	repne scasb
	mov rax,rdi
	mov rdi,rdx
	cmovne rax,rcx
	ret
@@1:
	xor eax,eax
	ret
strnchr endp

_TEXT ends
end