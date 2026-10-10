
void __thiscall
FUN_006cded0(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_18;
  int local_14;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e869a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00549470(param_1 + 4);
  local_14 = iVar1;
  FUN_00549580(param_1 + 4);
  FUN_00649920(&local_18,s__s_02d_02d_0075b260,param_2,0,0);
  local_4 = 0;
  uVar2 = FUN_00649940();
  uVar2 = FUN_0053cc70(uVar2);
  *(undefined4 *)(param_1 + 8) = uVar2;
  local_4 = 0xffffffff;
  FUN_00649950();
  iVar4 = 0;
  if (0 < param_3) {
    do {
      iVar1 = 0;
      if (0 < param_4) {
        local_18 = 0;
        do {
          FUN_00649920(local_10,s__s_02d_02d_0075b26c,param_2,iVar4,iVar1);
          local_4 = 1;
          uVar2 = FUN_00649940();
          iVar3 = FUN_0053cc70(uVar2);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 != *(int *)(param_1 + 8) + local_18 + iVar4) {
            *(undefined4 *)(param_1 + 8) = 0xffffffff;
          }
          local_18 = local_18 + param_3;
          iVar1 = iVar1 + 1;
        } while (iVar1 < param_4);
      }
      iVar4 = iVar4 + 1;
      iVar1 = local_14;
    } while (iVar4 < param_3);
  }
  if (*(int *)(param_1 + 8) != -1) {
    *(int *)(param_1 + 0xc) = param_3;
    *(int *)(param_1 + 0x10) = param_4;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(int *)(param_1 + 0x20) =
         (int)*(short *)(*(int *)(param_1 + 8) * 0x50 + 0x24 + *(int *)(iVar1 + 0x58));
    *(undefined4 *)(param_1 + 0x2c) = param_5;
  }
  ExceptionList = local_c;
  return;
}

