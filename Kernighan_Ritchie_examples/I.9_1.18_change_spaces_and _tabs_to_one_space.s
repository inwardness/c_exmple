	.file	"I.9_1.18_change_spaces_and _tabs_to_one_space.c"
	.text
	.def	printf;	.scl	3;	.type	32;	.endef
	.seh_proc	printf
printf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	48(%rsp), %rbp
	.seh_setframe	%rbp, 48
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movq	%r8, 48(%rbp)
	movq	%r9, 56(%rbp)
	leaq	40(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rbx
	movl	$1, %ecx
	movq	__imp___acrt_iob_func(%rip), %rax
	call	*%rax
	movq	%rax, %rcx
	movq	32(%rbp), %rax
	movq	%rbx, %r8
	movq	%rax, %rdx
	call	__mingw_vfprintf
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "%s\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$112, %rsp
	.seh_stackalloc	112
	.seh_endprologue
	call	__main
	jmp	.L4
.L5:
	cmpl	$0, -4(%rbp)
	je	.L4
	leaq	-80(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	printf
.L4:
	leaq	-80(%rbp), %rax
	movq	%rax, %rcx
	call	get_line
	movl	%eax, -4(%rbp)
	cmpl	$0, -4(%rbp)
	jns	.L5
	movl	$0, %eax
	addq	$112, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	get_line
	.def	get_line;	.scl	2;	.type	32;	.endef
	.seh_proc	get_line
get_line:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	$0, -8(%rbp)
	movb	$65, -9(%rbp)
	jmp	.L8
.L14:
	cmpb	$32, -9(%rbp)
	je	.L9
	cmpb	$9, -9(%rbp)
	jne	.L10
.L9:
	cmpl	$32, -4(%rbp)
	je	.L11
	cmpl	$9, -4(%rbp)
	jne	.L10
.L11:
	subl	$1, -8(%rbp)
	jmp	.L12
.L10:
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movl	-4(%rbp), %edx
	movb	%dl, (%rax)
	movl	-4(%rbp), %eax
	movb	%al, -9(%rbp)
.L12:
	addl	$1, -8(%rbp)
.L8:
	cmpl	$69, -8(%rbp)
	jg	.L13
	call	getchar
	movl	%eax, -4(%rbp)
	cmpl	$-1, -4(%rbp)
	je	.L13
	cmpl	$10, -4(%rbp)
	jne	.L14
.L13:
	movl	-8(%rbp), %eax
	cltq
	leaq	-1(%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$9, %al
	je	.L15
	movl	-8(%rbp), %eax
	cltq
	leaq	-1(%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$32, %al
	jne	.L16
.L15:
	movl	-8(%rbp), %eax
	cltq
	leaq	-1(%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movb	$10, (%rax)
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movb	$0, (%rax)
	movl	-8(%rbp), %eax
	jmp	.L17
.L16:
	cmpl	$-1, -4(%rbp)
	jne	.L18
	movl	$-1, %eax
	jmp	.L17
.L18:
	cmpl	$10, -4(%rbp)
	jne	.L19
	cmpl	$0, -8(%rbp)
	jne	.L19
	movl	-8(%rbp), %eax
	jmp	.L17
.L19:
	cmpl	$10, -4(%rbp)
	jne	.L20
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movl	-4(%rbp), %edx
	movb	%dl, (%rax)
.L20:
	addl	$1, -8(%rbp)
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movb	$0, (%rax)
	movl	-8(%rbp), %eax
.L17:
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (GNU) 13.2.0"
	.def	__mingw_vfprintf;	.scl	2;	.type	32;	.endef
	.def	getchar;	.scl	2;	.type	32;	.endef
