
void __thiscall FUN_004a6440(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3bf8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_NPCObject__Move_0072b23c);
  local_4 = 0;
  FUN_004aa440(param_2,param_3);
  iVar1 = (**(code **)(*param_1 + 0x154))();
  if (((iVar1 != 0) && (param_1[0x4a] == 0)) &&
     ((param_1[0xc1] == 0 ||
      ((iVar1 = *(int *)(param_1[0xc1] + 0x158), iVar1 == 0 ||
       (-1 < (char)((uint)*(undefined4 *)(iVar1 + 0x78) >> 8))))))) {
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x28))();
    iVar1 = (**(code **)(*param_1 + 0x154))();
    *(undefined4 *)(iVar1 + 300) = 1;
    *(undefined4 *)(iVar1 + 0x13c) = 1;
    *(int *)(iVar1 + 0x138) = *(int *)(iVar1 + 0x138) + 1;
    *(int *)(iVar1 + 0x148) = *(int *)(iVar1 + 0x148) + 1;
    *(undefined4 *)(iVar1 + 0x10) = *puVar2;
    *(undefined4 *)(iVar1 + 0x14) = puVar2[1];
    *(undefined4 *)(iVar1 + 0x18) = puVar2[2];
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

