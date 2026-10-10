
undefined4 __thiscall FUN_006436b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)(param_2 + (param_2 >> 0x1f & 0xfffffU)) >> 0x14;
  iVar2 = iVar1 * 0x100000;
  iVar3 = *param_1 + iVar1 * -0x100000;
  param_1[0x15e] = iVar2;
  iVar1 = 0x100000;
  if (iVar3 < 0x100001) {
    iVar1 = iVar3;
  }
  param_1[0x15f] = iVar2 + -1 + iVar1;
  FUN_0064f650(param_1[0x162],param_1[0x161] + iVar2,0);
  FUN_0064f350(param_1[0x160],iVar1,1,param_1[0x162]);
  return CONCAT31((int3)((uint)param_1[0x160] >> 8),
                  *(undefined1 *)((param_2 - param_1[0x15e]) + param_1[0x160]));
}

