	.file	"calculus.c"
	.text
	.section	.rodata
	.align 8
.LC1:
	.string	"l-\320\264\320\273\320\270\320\275\320\275\320\260 \320\262\320\276\320\273\320\275\321\213, v-\321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \321\200\320\260\321\201\320\277\321\200\320\276\321\201\321\202\321\200\320\260\320\275\320\265\320\275\320\270\321\217 \321\215.\320\274. \320\262\320\276\320\273\320\275\321\213, t -\320\277\320\265\321\200\320\270\320\276\320\264 \320\272\320\276\320\273\320\265\320\261\320\260\320\275\320\270\320\271"
.LC2:
	.string	"l-[m];v-[m/s]=%f;t-[Mhz]\n"
	.align 8
.LC3:
	.string	"\320\224\320\273\320\270\320\275\320\275\320\260 \320\262\320\276\320\273\320\275\321\213:l= v/t"
	.align 8
.LC4:
	.string	"\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\260\321\201\321\202\320\276\321\202\321\203 \320\264\320\273\321\217 \321\200\320\260\321\201\321\207\321\221\321\202\320\260 \320\264\320\273\320\270\320\275\321\213 \320\262\320\270\320\261\321\200\320\260\321\202\320\276\321\200\320\260[f-Mhz][xx.xx]:\n "
.LC5:
	.string	"%f"
	.align 8
.LC7:
	.string	"\320\224\320\273\320\270\320\275\320\275\320\260 \320\262\320\276\320\273\320\275\321\213[m]:%f\n"
.LC10:
	.string	"\320\264\320\273\320\270\320\275\320\275\320\260 5/8[m]:%f\n"
	.align 8
.LC12:
	.string	"\320\224\320\273\320\270\320\275\320\275\320\260 \320\277\320\276\320\273\321\203\320\262\320\276\320\273\320\275\320\276\320\262\320\276\320\271 \320\260\320\275\321\202\320\265\320\275\320\275\321\213 \320\262 \321\201\320\262\320\276\320\261\320\276\320\264\320\275\320\276\320\274 \320\277\321\200\320\276\321\201\321\202\321\200\320\260\320\275\321\201\321\202\320\262\320\265 [m]:%3.2f\n"
	.align 8
.LC14:
	.string	"\320\247\320\265\321\202\320\262\320\265\321\200\321\202\321\214 \320\264\320\273\320\270\320\275\321\213 \320\262\320\276\320\273\320\275\321\213 [m]:%3.2f\n"
	.align 8
.LC16:
	.string	"\320\237\321\217\321\202\321\214-\320\262\320\276\321\201\321\214\320\274\321\213\321\205 \320\264\320\273\320\270\320\275\321\213 \320\260\320\275\321\202\320\265\320\275\320\275\321\213 [m]:%3.2f\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movss	.LC0(%rip), %xmm0
	movss	%xmm0, -4(%rbp)
	movl	$.LC1, %edi
	call	puts
	pxor	%xmm2, %xmm2
	cvtss2sd	-4(%rbp), %xmm2
	movq	%xmm2, %rax
	movq	%rax, %xmm0
	movl	$.LC2, %edi
	movl	$1, %eax
	call	printf
	movl	$.LC3, %edi
	call	puts
	movl	$.LC4, %edi
	movl	$0, %eax
	call	printf
	leaq	-28(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC5, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movss	-28(%rbp), %xmm1
	movss	.LC6(%rip), %xmm0
	mulss	%xmm1, %xmm0
	movss	%xmm0, -28(%rbp)
	movss	-28(%rbp), %xmm1
	movss	-4(%rbp), %xmm0
	divss	%xmm1, %xmm0
	movss	%xmm0, -8(%rbp)
	pxor	%xmm3, %xmm3
	cvtss2sd	-8(%rbp), %xmm3
	movq	%xmm3, %rax
	movq	%rax, %xmm0
	movl	$.LC7, %edi
	movl	$1, %eax
	call	printf
	movss	-8(%rbp), %xmm1
	movss	.LC8(%rip), %xmm0
	mulss	%xmm1, %xmm0
	movss	.LC9(%rip), %xmm1
	divss	%xmm1, %xmm0
	movss	%xmm0, -12(%rbp)
	pxor	%xmm4, %xmm4
	cvtss2sd	-12(%rbp), %xmm4
	movq	%xmm4, %rax
	movq	%rax, %xmm0
	movl	$.LC10, %edi
	movl	$1, %eax
	call	printf
	movss	-8(%rbp), %xmm0
	movss	.LC11(%rip), %xmm1
	divss	%xmm1, %xmm0
	movss	%xmm0, -16(%rbp)
	pxor	%xmm5, %xmm5
	cvtss2sd	-16(%rbp), %xmm5
	movq	%xmm5, %rax
	movq	%rax, %xmm0
	movl	$.LC12, %edi
	movl	$1, %eax
	call	printf
	movss	-8(%rbp), %xmm0
	movss	.LC13(%rip), %xmm1
	divss	%xmm1, %xmm0
	movss	%xmm0, -20(%rbp)
	pxor	%xmm6, %xmm6
	cvtss2sd	-20(%rbp), %xmm6
	movq	%xmm6, %rax
	movq	%rax, %xmm0
	movl	$.LC14, %edi
	movl	$1, %eax
	call	printf
	movss	-8(%rbp), %xmm0
	movss	.LC15(%rip), %xmm1
	divss	%xmm1, %xmm0
	movss	%xmm0, -24(%rbp)
	pxor	%xmm7, %xmm7
	cvtss2sd	-24(%rbp), %xmm7
	movq	%xmm7, %rax
	movq	%rax, %xmm0
	movl	$.LC16, %edi
	movl	$1, %eax
	call	printf
	movl	$10, %edi
	call	putchar
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 4
.LC0:
	.long	1301214146
	.align 4
.LC6:
	.long	1232348160
	.align 4
.LC8:
	.long	1084227584
	.align 4
.LC9:
	.long	1090519040
	.align 4
.LC11:
	.long	1073741824
	.align 4
.LC13:
	.long	1082130432
	.align 4
.LC15:
	.long	1059061760
	.ident	"GCC: (GNU) 13.2.1 20230728 (Red Hat 13.2.1-1)"
	.section	.note.GNU-stack,"",@progbits
