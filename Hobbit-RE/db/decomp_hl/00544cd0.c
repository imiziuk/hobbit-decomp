
void FUN_00544cd0(void)

{
  int in_stack_00000010;
  int *in_stack_00000014;
  
  if (0 < in_stack_00000010) {
    do {
      FUN_0063d440(*in_stack_00000014);
      in_stack_00000010 = in_stack_00000010 + -1;
      *in_stack_00000014 = *in_stack_00000014 + 0xc;
    } while (in_stack_00000010 != 0);
  }
  return;
}

