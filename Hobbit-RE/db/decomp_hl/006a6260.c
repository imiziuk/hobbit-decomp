
undefined4 __thiscall
FUN_006a6260(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            undefined4 param_6,uint param_7)

{
  int *piVar1;
  uint uVar2;
  undefined4 unaff_retaddr;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  FUN_006a2400(param_2,param_3,param_4,param_5,param_6,param_7 | 0x1000,0);
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined1 *)(param_1 + 0x10f) = 0xff;
  *(undefined1 *)(param_1 + 0x10e) = 0;
  *(undefined1 *)(param_1 + 0x10d) = 0x14;
  *(undefined1 *)(param_1 + 0x10c) = 0x1e;
  piVar1 = (int *)FUN_006a3320(0);
  *(int **)(param_1 + 0x158) = piVar1;
  local_10 = 8;
  local_8 = (param_5[2] - *param_5) + -8;
  local_4 = (param_5[3] - param_5[1]) + -8;
  local_c = 8;
  (**(code **)(*piVar1 + 0xc))(&local_10);
  uVar2 = FUN_006a3230();
  FUN_006a3220(uVar2 | 0x200);
  *(undefined4 *)(param_1 + 0x160) = 1;
  *(undefined4 *)(param_1 + 0x164) = unaff_retaddr;
  return param_6;
}

