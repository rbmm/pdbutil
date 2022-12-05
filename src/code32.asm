.686p

_TEXT segment public 'CODE'

?strnlen@NT@@YIIIPBD@Z proc
	xor eax,eax
	jecxz @@2
	push edi
	mov edi,edx
	repne scasb
	jne @@1
	dec edi
@@1:
	sub edi,edx
	mov eax,edi
	pop edi
@@2:
	ret
?strnlen@NT@@YIIIPBD@Z endp

@strnchr@12 proc
	jecxz @@1
	mov al,[esp + 4]
	xchg edi,edx
	repne scasb
	mov eax,edi
	cmovne eax,ecx
	mov edi,edx
	ret 4
@@1:
	xor eax,eax
	ret 4
@strnchr@12 endp

_TEXT ends
end