	.file	"test.c"
	.text
	.section	.rodata
.LC0:
	.string	"ankit gupta"
.LC1:
	.string	"%d\n"
.LC2:
	.string	"%ld\n"
.LC4:
	.string	"%f\n"
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
	subq	$16, %rsp
	leaq	2+.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$2147483647, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$-2147483648, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movabsq	$9223372036854775807, %rsi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	.LC3(%rip), %rax
	movq	%rax, -8(%rbp)
	movsd	-8(%rbp), %xmm0
	leaq	.LC4(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movq	.LC5(%rip), %rax
	movq	%rax, -8(%rbp)
	movsd	-8(%rbp), %xmm0
	leaq	.LC4(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movq	.LC6(%rip), %rax
	movq	%rax, -8(%rbp)
	movsd	-8(%rbp), %xmm0
	leaq	.LC4(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movq	.LC7(%rip), %rax
	movq	%rax, -8(%rbp)
	movsd	-8(%rbp), %xmm0
	leaq	.LC4(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC3:
	.long	3758096384
	.long	1206910975
	.align 8
.LC5:
	.long	0
	.long	940572672
	.align 8
.LC6:
	.long	4294967295
	.long	2146435071
	.align 8
.LC7:
	.long	0
	.long	1048576
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
