; ModuleID = 'salida.ll'
source_filename = "CplusImple"

@0 = private unnamed_addr constant [35 x i8] c"El n\C3\BAmero Fibonacci en posici\C3\B3n \00", align 1
@1 = private unnamed_addr constant [15 x i8] c" elevado a la \00", align 1
@2 = private unnamed_addr constant [3 x i8] c"%d\00", align 1
@3 = private unnamed_addr constant [6 x i8] c" es: \00", align 1
@4 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

; Function Attrs: nofree nosync nounwind memory(none)
define i32 @fibonacci(i32 %0) local_unnamed_addr #0 {
entry:
  %switch10 = icmp ult i32 %0, 2
  br i1 %switch10, label %merge, label %else3

merge:                                            ; preds = %else3, %entry
  %accumulator.tr.lcssa = phi i32 [ 0, %entry ], [ %addtmp, %else3 ]
  %.tr.lcssa = phi i32 [ %0, %entry ], [ %subtmp9, %else3 ]
  %accumulator.ret.tr = add i32 %.tr.lcssa, %accumulator.tr.lcssa
  ret i32 %accumulator.ret.tr

else3:                                            ; preds = %entry, %else3
  %.tr12 = phi i32 [ %subtmp9, %else3 ], [ %0, %entry ]
  %accumulator.tr11 = phi i32 [ %addtmp, %else3 ], [ 0, %entry ]
  %subtmp = add i32 %.tr12, -1
  %subtmp9 = add i32 %.tr12, -2
  %calltmp = tail call i32 @fibonacci(i32 %subtmp)
  %addtmp = add i32 %calltmp, %accumulator.tr11
  %switch = icmp ult i32 %subtmp9, 2
  br i1 %switch, label %merge, label %else3
}

; Function Attrs: nofree norecurse nosync nounwind memory(none)
define i32 @potencia(i32 %0, i32 %1) local_unnamed_addr #1 {
entry:
  %lttmp3 = icmp sgt i32 %1, 0
  br i1 %lttmp3, label %for_body, label %for_after

for_body:                                         ; preds = %entry, %for_body
  %i.05 = phi i32 [ %inc, %for_body ], [ 0, %entry ]
  %result.04 = phi i32 [ %multmp, %for_body ], [ 1, %entry ]
  %multmp = mul i32 %result.04, %0
  %inc = add nuw nsw i32 %i.05, 1
  %lttmp = icmp slt i32 %inc, %1
  br i1 %lttmp, label %for_body, label %for_after

for_after:                                        ; preds = %for_body, %entry
  %result.0.lcssa = phi i32 [ 1, %entry ], [ %multmp, %for_body ]
  ret i32 %result.0.lcssa
}

; Function Attrs: nofree nounwind
define noundef i32 @main() local_unnamed_addr #2 {
entry:
  %calltmp = tail call i32 @fibonacci(i32 7)
  %0 = tail call i32 (ptr, ...) @printf(ptr nonnull dereferenceable(1) @0)
  %1 = tail call i32 (ptr, ...) @printf(ptr nonnull dereferenceable(1) @2, i32 7)
  %2 = tail call i32 (ptr, ...) @printf(ptr nonnull dereferenceable(1) @3)
  %3 = tail call i32 (ptr, ...) @printf(ptr nonnull dereferenceable(1) @4, i32 %calltmp)
  %4 = tail call i32 (ptr, ...) @printf(ptr nonnull dereferenceable(1) @2, i32 2)
  %5 = tail call i32 (ptr, ...) @printf(ptr nonnull dereferenceable(1) @1)
  %6 = tail call i32 (ptr, ...) @printf(ptr nonnull dereferenceable(1) @2, i32 5)
  %7 = tail call i32 (ptr, ...) @printf(ptr nonnull dereferenceable(1) @3)
  %8 = tail call i32 (ptr, ...) @printf(ptr nonnull dereferenceable(1) @4, i32 32)
  ret i32 0
}

; Function Attrs: nofree nounwind
declare noundef i32 @printf(ptr nocapture noundef readonly, ...) local_unnamed_addr #2

attributes #0 = { nofree nosync nounwind memory(none) }
attributes #1 = { nofree norecurse nosync nounwind memory(none) }
attributes #2 = { nofree nounwind }
