
void FUN_0053c520(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *in_stack_000028dc;
  undefined1 *puVar8;
  
  FUN_006c04f0();
  uVar2 = *(uint *)(extraout_ECX + 4) * 2;
  if (((uVar2 ^ *(uint *)(extraout_ECX + 4)) & 0x7fffffff ^ uVar2) != 0xffffffff) {
    FUN_00549470(extraout_ECX + 4);
  }
  FUN_0053b910(&stack0x000000d8);
  puVar8 = &stack0x000000d8;
  uVar3 = FUN_0053f260(&stack0x0000004c,1);
  uVar4 = FUN_0053f210(2);
  FUN_0053d2d0(&stack0x00000000,uVar4,uVar3,puVar8);
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
  FUN_00463c20(&stack0x00000000);
  uVar3 = FUN_0064e040(&stack0x00000098,&stack0x00000058,&param_3);
  FUN_00406570(uVar3);
  puVar5 = (undefined4 *)FUN_0064e040(&stack0x00000098,extraout_ECX + 0x20,&param_3);
  if ((&param_3 != puVar5) && (puVar1 = puVar5 + 0x10, puVar5 != puVar1)) {
    puVar6 = &param_5;
    iVar7 = (int)puVar5 - (int)&param_3;
    do {
      puVar6[-2] = *puVar5;
      puVar6[-1] = puVar5[1];
      *puVar6 = *(undefined4 *)(iVar7 + (int)puVar6);
      puVar6[1] = puVar5[3];
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
    } while (puVar5 != puVar1);
  }
  puVar5 = (undefined4 *)FUN_004065c0(&stack0x0000004c);
  uVar3 = puVar5[1];
  uVar4 = puVar5[2];
  *in_stack_000028dc = *puVar5;
  in_stack_000028dc[1] = uVar3;
  in_stack_000028dc[2] = uVar4;
  return;
}

