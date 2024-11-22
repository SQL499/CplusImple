	.text
	.file	"CplusImple"
	.globl	fibonacci                       # -- Begin function fibonacci
	.p2align	4
	.type	fibonacci,@function
fibonacci:                              # @fibonacci
	.cfi_startproc
# %bb.0:                                # %entry
	subq	$24, %rsp
	.cfi_def_cfa_offset 32
	movl	%edi, 4(%rsp)
	testl	%edi, %edi
	je	.LBB0_1
# %bb.4:                                # %else
	cmpl	$1, 4(%rsp)
	jne	.LBB0_5
# %bb.3:                                # %if2
	movl	$1, (%rsp)
	jmp	.LBB0_2
.LBB0_1:                                # %if
	movl	$0, (%rsp)
	jmp	.LBB0_2
.LBB0_5:                                # %else3
	movl	4(%rsp), %eax
	leal	-1(%rax), %edi
	movl	%edi, 16(%rsp)
	addl	$-2, %eax
	movl	%eax, 8(%rsp)
	callq	fibonacci@PLT
	movl	%eax, 12(%rsp)
	movl	8(%rsp), %edi
	callq	fibonacci@PLT
	movl	%eax, 20(%rsp)
	addl	12(%rsp), %eax
	movl	%eax, (%rsp)
.LBB0_2:                                # %merge
	movl	(%rsp), %eax
	addq	$24, %rsp
	.cfi_def_cfa_offset 8
	retq
.Lfunc_end0:
	.size	fibonacci, .Lfunc_end0-fibonacci
	.cfi_endproc
                                        # -- End function
	.globl	potencia                        # -- Begin function potencia
	.p2align	4
	.type	potencia,@function
potencia:                               # @potencia
	.cfi_startproc
# %bb.0:                                # %entry
	movl	%edi, -12(%rsp)
	movl	%esi, -8(%rsp)
	movl	$1, -20(%rsp)
	movl	$0, -16(%rsp)
	movl	$0, -16(%rsp)
	.p2align	4
.LBB1_1:                                # %for_cond
                                        # =>This Inner Loop Header: Depth=1
	movl	-16(%rsp), %eax
	cmpl	-8(%rsp), %eax
	jge	.LBB1_3
# %bb.2:                                # %for_body
                                        #   in Loop: Header=BB1_1 Depth=1
	movl	-20(%rsp), %eax
	imull	-12(%rsp), %eax
	movl	%eax, -20(%rsp)
	incl	-16(%rsp)
	jmp	.LBB1_1
.LBB1_3:                                # %for_after
	movl	-20(%rsp), %eax
	retq
.Lfunc_end1:
	.size	potencia, .Lfunc_end1-potencia
	.cfi_endproc
                                        # -- End function
	.globl	main                            # -- Begin function main
	.p2align	4
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# %bb.0:                                # %entry
	subq	$24, %rsp
	.cfi_def_cfa_offset 32
	movl	$7, 4(%rsp)
	movl	$7, %edi
	callq	fibonacci@PLT
	movl	%eax, 8(%rsp)
	movl	$.L__unnamed_1, %edi
	xorl	%eax, %eax
	callq	printf@PLT
	movl	4(%rsp), %esi
	movl	$.L__unnamed_2, %edi
	xorl	%eax, %eax
	callq	printf@PLT
	movl	$.L__unnamed_3, %edi
	xorl	%eax, %eax
	callq	printf@PLT
	movl	8(%rsp), %esi
	movl	$.L__unnamed_4, %edi
	xorl	%eax, %eax
	callq	printf@PLT
	movl	$2, 12(%rsp)
	movl	$5, 16(%rsp)
	movl	$2, %edi
	movl	$5, %esi
	callq	potencia@PLT
	movl	%eax, 20(%rsp)
	movl	12(%rsp), %esi
	movl	$.L__unnamed_5, %edi
	xorl	%eax, %eax
	callq	printf@PLT
	movl	$.L__unnamed_6, %edi
	xorl	%eax, %eax
	callq	printf@PLT
	movl	16(%rsp), %esi
	movl	$.L__unnamed_7, %edi
	xorl	%eax, %eax
	callq	printf@PLT
	movl	$.L__unnamed_8, %edi
	xorl	%eax, %eax
	callq	printf@PLT
	movl	20(%rsp), %esi
	movl	$.L__unnamed_9, %edi
	xorl	%eax, %eax
	callq	printf@PLT
	xorl	%eax, %eax
	addq	$24, %rsp
	.cfi_def_cfa_offset 8
	retq
.Lfunc_end2:
	.size	main, .Lfunc_end2-main
	.cfi_endproc
                                        # -- End function
	.type	.L__unnamed_1,@object           # @0
	.section	.rodata.str1.1,"aMS",@progbits,1
.L__unnamed_1:
	.asciz	"El n\303\272mero Fibonacci en posici\303\263n "
	.size	.L__unnamed_1, 35

	.type	.L__unnamed_2,@object           # @1
.L__unnamed_2:
	.asciz	"%d"
	.size	.L__unnamed_2, 3

	.type	.L__unnamed_3,@object           # @2
.L__unnamed_3:
	.asciz	" es: "
	.size	.L__unnamed_3, 6

	.type	.L__unnamed_4,@object           # @3
.L__unnamed_4:
	.asciz	"%d\n"
	.size	.L__unnamed_4, 4

	.type	.L__unnamed_5,@object           # @4
.L__unnamed_5:
	.asciz	"%d"
	.size	.L__unnamed_5, 3

	.type	.L__unnamed_6,@object           # @5
.L__unnamed_6:
	.asciz	" elevado a la "
	.size	.L__unnamed_6, 15

	.type	.L__unnamed_7,@object           # @6
.L__unnamed_7:
	.asciz	"%d"
	.size	.L__unnamed_7, 3

	.type	.L__unnamed_8,@object           # @7
.L__unnamed_8:
	.asciz	" es: "
	.size	.L__unnamed_8, 6

	.type	.L__unnamed_9,@object           # @8
.L__unnamed_9:
	.asciz	"%d\n"
	.size	.L__unnamed_9, 4

	.section	".note.GNU-stack","",@progbits
