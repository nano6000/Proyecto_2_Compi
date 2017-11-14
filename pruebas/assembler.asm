	mov temp0000, 2
	add temp0000, 56

-----inicio_if
	cmp temp0000, 0
	jz label0000

-----inicio_if
	cmp temp0001, 0
	jz label0002

-----inicio_while
label0004

	mov temp0002, 2
	add temp0002, 6

-----eval_while
	cmp temp0002, 0
	jz label0005

	mov al, 5
	mov cl, 8
	mul cl
	mov temp0003, ax
	mov temp0004, 9
	add temp0004, temp0003

	mov temp0005, temp0004
	sub temp0005, 9

-----inicio_DOwhile
label0006

	mov temp0006, 5
	add temp0006, 6

-----eval_DOwhile
	cmp 5, 0
	jnz label0006

-----fin_while
label0007:

-----fin_while
	jmp label0004:
label0005:

-----inicio_else
	jmp label0003
label0002:

-----fin_if
label0003:

-----inicio_else
	jmp label0001
label0000:

-----fin_if
label0001:

