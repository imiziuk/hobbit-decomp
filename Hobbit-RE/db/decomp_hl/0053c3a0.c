
void FUN_0053c3a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int extraout_ECX;
  undefined4 unaff_retaddr;
  undefined4 *in_stack_000028a8;
  
  FUN_006c04f0();
  uVar1 = *(uint *)(extraout_ECX + 4) * 2;
  if (((uVar1 ^ *(uint *)(extraout_ECX + 4)) & 0x7fffffff ^ uVar1) != 0xffffffff) {
    FUN_00549470(extraout_ECX + 4);
  }
  FUN_0053b910(&stack0x000000a4);
  uVar2 = FUN_0053f260(&stack0x00000058,0);
  uVar3 = FUN_0053f210(2);
  param_15 = 0;
  param_11 = 0;
  param_7 = 0;
  param_16 = 0;
  param_12 = 0;
  param_4 = 0;
  param_17 = 0;
  param_9 = 0;
  param_5 = 0;
  param_14 = 0;
  param_10 = 0;
  param_6 = 0;
  param_3 = 0x3f800000;
  param_8 = 0x3f800000;
  param_13 = 0x3f800000;
  param_18 = 0x3f800000;
  FUN_0053cff0(uVar3,&param_3,&stack0x000000a4,&stack0x00000064);
  FUN_0041b9f0(&stack0x00000000,uVar2);
  FUN_004357e0(&stack0x00000000);
  FUN_0041b9f0(&stack0x00000000,&stack0x0000004c);
  *in_stack_000028a8 = unaff_retaddr;
  in_stack_000028a8[1] = param_1;
  in_stack_000028a8[2] = param_2;
  return;
}

