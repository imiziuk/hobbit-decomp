
void __thiscall FUN_004aa910(int param_1,undefined4 param_2)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x7a);
  pcVar2 = *(char **)(param_1 + 0xa0);
  if ((pcVar2 != (char *)0x0) && (pcVar2 != s_NONAME_0072b754)) {
    FUN_0064ff40(pcVar2,s_C__projects_meridian_Support_Obj_0072b7a4,0x1ca);
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  if ((bVar1 & 1) != 0) {
    iVar3 = FUN_00647cf0(param_2);
    uVar4 = thunk_FUN_0064ff70(iVar3 + 1,s_C__projects_meridian_Support_Obj_0072b7a4,0x1d2);
    *(undefined4 *)(param_1 + 0xa0) = uVar4;
    FUN_00648480(uVar4,param_2,iVar3);
    *(undefined1 *)(iVar3 + *(int *)(param_1 + 0xa0)) = 0;
    return;
  }
  *(char **)(param_1 + 0xa0) = s_NONAME_0072b754;
  return;
}

