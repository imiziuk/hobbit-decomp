
void __thiscall
FUN_006455c0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_0064cc00();
  if (*param_1 != 0) {
    puVar2 = (undefined4 *)FUN_006452f0(param_2,param_3,param_4);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00646880();
      param_1[0x19] = *(int *)(*(int *)*puVar2 + 0xc);
      param_1[0x1b] = (int)param_5;
      param_1[0x1c] = param_1[2];
      param_1[0x1a] = (int)puVar2;
      iVar1 = *(short *)((int)puVar2 + 0xe) + 0x80 + param_1[2];
      param_1[0x1d] = iVar1;
      param_1[0x1e] = *param_5;
      param_1[0x1f] = iVar1;
      param_1[0x20] = *(int *)(param_1[0x19] + 100) + puVar2[6];
      FUN_006469c0();
    }
    FUN_0064cc50();
  }
  return;
}

