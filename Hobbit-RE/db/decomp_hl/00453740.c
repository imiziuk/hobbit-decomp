
undefined4 __thiscall
FUN_00453740(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d0028;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_0075ca3c & 1) == 0) {
    DAT_0075ca3c = DAT_0075ca3c | 1;
    ExceptionList = &local_c;
    FUN_00649b20(s_MUSIC_Silence_00724fb8);
    FUN_006bfe55(&LAB_00453890);
  }
  FUN_0064a320(param_2);
  *(undefined4 *)(param_1 + 0x2f0) = param_6;
  iVar1 = *(int *)(param_1 + 0x458);
  *(undefined4 *)(param_1 + 0x458) = 1;
  if (iVar1 == 0) {
    FUN_0064a320(param_2);
    *(undefined4 *)(param_1 + 0x3b0) = param_5;
    *(undefined4 *)(param_1 + 0x3b4) = param_6;
    FUN_0064a320(param_2);
    uVar2 = FUN_0064a4f0(local_38,param_2,s__Cover_0072500c);
    local_4 = 0;
    FUN_0064a320(uVar2);
    local_4 = 0xffffffff;
    FUN_00649ba0();
    *(undefined4 *)(param_1 + 0x3a0) = 0;
    *(undefined4 *)(param_1 + 0x3a4) = 0;
    *(undefined4 *)(param_1 + 0x3a8) = 0;
    *(undefined4 *)(param_1 + 0x3ac) = 0;
    *(undefined4 *)(param_1 + 0x3b8) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x3bc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x3c0) = 0;
    *(undefined4 *)(param_1 + 0x3c4) = 0;
    *(undefined4 *)(param_1 + 0x3c8) = 0;
    *(undefined4 *)(param_1 + 0x3cc) = 0;
    *(undefined4 *)(param_1 + 0x45c) = 0;
    *(undefined4 *)(param_1 + 0x460) = 0;
  }
  DAT_00724fa0 = 0;
  ExceptionList = local_c;
  return 0;
}

