; ModuleID = 'CplusImple'
source_filename = "CplusImple"

@0 = private unnamed_addr constant [35 x i8] c"El n\C3\BAmero Fibonacci en posici\C3\B3n \00", align 1
@1 = private unnamed_addr constant [3 x i8] c"%d\00", align 1
@2 = private unnamed_addr constant [6 x i8] c" es: \00", align 1
@3 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@4 = private unnamed_addr constant [3 x i8] c"%d\00", align 1
@5 = private unnamed_addr constant [15 x i8] c" elevado a la \00", align 1
@6 = private unnamed_addr constant [3 x i8] c"%d\00", align 1
@7 = private unnamed_addr constant [6 x i8] c" es: \00", align 1
@8 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

define i32 @fibonacci(i32 %0) {
entry:
  %fib2 = alloca i32, align 4
  %fib1 = alloca i32, align 4
  %temp2 = alloca i32, align 4
  %temp1 = alloca i32, align 4
  %result = alloca i32, align 4
  %n = alloca i32, align 4
  store i32 %0, ptr %n, align 4
  %n1 = load i32, ptr %n, align 4
  %eqtmp = icmp eq i32 %n1, 0
  br i1 %eqtmp, label %if, label %else

if:                                               ; preds = %entry
  store i32 0, ptr %result, align 4
  br label %merge

else:                                             ; preds = %entry
  %n5 = load i32, ptr %n, align 4
  %eqtmp6 = icmp eq i32 %n5, 1
  br i1 %eqtmp6, label %if2, label %else3

merge:                                            ; preds = %merge4, %if
  %result15 = load i32, ptr %result, align 4
  ret i32 %result15

if2:                                              ; preds = %else
  store i32 1, ptr %result, align 4
  br label %merge4

else3:                                            ; preds = %else
  %n7 = load i32, ptr %n, align 4
  %subtmp = sub i32 %n7, 1
  store i32 %subtmp, ptr %temp1, align 4
  %n8 = load i32, ptr %n, align 4
  %subtmp9 = sub i32 %n8, 2
  store i32 %subtmp9, ptr %temp2, align 4
  %temp110 = load i32, ptr %temp1, align 4
  %calltmp = call i32 @fibonacci(i32 %temp110)
  store i32 %calltmp, ptr %fib1, align 4
  %temp211 = load i32, ptr %temp2, align 4
  %calltmp12 = call i32 @fibonacci(i32 %temp211)
  store i32 %calltmp12, ptr %fib2, align 4
  %fib113 = load i32, ptr %fib1, align 4
  %fib214 = load i32, ptr %fib2, align 4
  %addtmp = add i32 %fib113, %fib214
  store i32 %addtmp, ptr %result, align 4
  br label %merge4

merge4:                                           ; preds = %else3, %if2
  br label %merge
}

define i32 @potencia(i32 %0, i32 %1) {
entry:
  %temp = alloca i32, align 4
  %i = alloca i32, align 4
  %result = alloca i32, align 4
  %exponente = alloca i32, align 4
  %base = alloca i32, align 4
  store i32 %0, ptr %base, align 4
  store i32 %1, ptr %exponente, align 4
  store i32 1, ptr %result, align 4
  store i32 0, ptr %i, align 4
  br label %for_init

for_init:                                         ; preds = %entry
  store i32 0, ptr %i, align 4
  br label %for_cond

for_cond:                                         ; preds = %for_inc, %for_init
  %i1 = load i32, ptr %i, align 4
  %exponente2 = load i32, ptr %exponente, align 4
  %lttmp = icmp slt i32 %i1, %exponente2
  br i1 %lttmp, label %for_body, label %for_after

for_body:                                         ; preds = %for_cond
  %result3 = load i32, ptr %result, align 4
  %base4 = load i32, ptr %base, align 4
  %multmp = mul i32 %result3, %base4
  store i32 %multmp, ptr %result, align 4
  br label %for_inc

for_inc:                                          ; preds = %for_body
  %i5 = load i32, ptr %i, align 4
  %inc = add i32 %i5, 1
  store i32 %inc, ptr %i, align 4
  br label %for_cond

for_after:                                        ; preds = %for_cond
  %result6 = load i32, ptr %result, align 4
  ret i32 %result6
}

define i32 @main() {
entry:
  %resultadoPot = alloca i32, align 4
  %exponente = alloca i32, align 4
  %base = alloca i32, align 4
  %resultadoFib = alloca i32, align 4
  %numeroFib = alloca i32, align 4
  store i32 7, ptr %numeroFib, align 4
  %numeroFib1 = load i32, ptr %numeroFib, align 4
  %calltmp = call i32 @fibonacci(i32 %numeroFib1)
  store i32 %calltmp, ptr %resultadoFib, align 4
  %0 = call i32 (ptr, ...) @printf(ptr @0)
  %numeroFib2 = load i32, ptr %numeroFib, align 4
  %1 = call i32 (ptr, ...) @printf(ptr @1, i32 %numeroFib2)
  %2 = call i32 (ptr, ...) @printf(ptr @2)
  %resultadoFib3 = load i32, ptr %resultadoFib, align 4
  %3 = call i32 (ptr, ...) @printf(ptr @3, i32 %resultadoFib3)
  store i32 2, ptr %base, align 4
  store i32 5, ptr %exponente, align 4
  %base4 = load i32, ptr %base, align 4
  %exponente5 = load i32, ptr %exponente, align 4
  %calltmp6 = call i32 @potencia(i32 %base4, i32 %exponente5)
  store i32 %calltmp6, ptr %resultadoPot, align 4
  %base7 = load i32, ptr %base, align 4
  %4 = call i32 (ptr, ...) @printf(ptr @4, i32 %base7)
  %5 = call i32 (ptr, ...) @printf(ptr @5)
  %exponente8 = load i32, ptr %exponente, align 4
  %6 = call i32 (ptr, ...) @printf(ptr @6, i32 %exponente8)
  %7 = call i32 (ptr, ...) @printf(ptr @7)
  %resultadoPot9 = load i32, ptr %resultadoPot, align 4
  %8 = call i32 (ptr, ...) @printf(ptr @8, i32 %resultadoPot9)
  ret i32 0
}

declare i32 @printf(ptr, ...)
