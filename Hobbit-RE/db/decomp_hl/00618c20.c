
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00618c20(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  if (*(short *)(param_1 + 0x42) == 7) {
    piVar1 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
    if (piVar1 != (int *)0x0) {
      puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x28))();
      *(undefined4 *)(param_1 + 0xc4) = *puVar2;
      *(undefined4 *)(param_1 + 200) = puVar2[1];
      *(undefined4 *)(param_1 + 0xcc) = puVar2[2];
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x98);
      *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x9c);
      return;
    }
  }
  else {
    piVar1 = (int *)FUN_0041bcc0();
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x28))();
    *(undefined4 *)(param_1 + 0xc4) = *puVar2;
    *(undefined4 *)(param_1 + 200) = puVar2[1];
    *(undefined4 *)(param_1 + 0xcc) = puVar2[2];
    *(float *)(param_1 + 200) = *(float *)(param_1 + 200) + _DAT_006e9988;
    uVar3 = FUN_0041bcd0();
    *(undefined8 *)(param_1 + 0xa0) = uVar3;
  }
  return;
}

