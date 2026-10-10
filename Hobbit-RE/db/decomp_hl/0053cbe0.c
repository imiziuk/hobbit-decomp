
void __thiscall
FUN_0053cbe0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  uVar2 = thunk_FUN_0064ff70(*(int *)(param_1 + 0x4c) * 0x28,
                             s_C__projects_meridian_Support_Ani_00737800,0x129);
  iVar1 = *(int *)(param_1 + 0x58);
  uVar4 = uVar2;
  fVar3 = (float10)FUN_0064c6b0(param_3,(float)(*(short *)(param_4 * 0x50 + 0x24 + iVar1) + -1),
                                uVar2);
  FUN_0053fe50(*(undefined4 *)(param_4 * 0x50 + iVar1 + 0x20),(float)fVar3,uVar4);
  FUN_0053cd20(param_2,uVar2,param_5);
  FUN_0064ff40(uVar2,s_C__projects_meridian_Support_Ani_00737838,0x133);
  return;
}

