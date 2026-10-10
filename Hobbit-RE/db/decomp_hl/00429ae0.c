
void __fastcall FUN_00429ae0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  if (*(int *)(param_1 + 0x400) != 0) {
    FUN_0043a3f0(0x19,s_C__projects_meridian_Support_Obj_00720b28,0x8af);
    return;
  }
  if (*(int *)(param_1 + 0x640) != 0) {
    iVar2 = FUN_00422510();
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x46d0) != 0) {
        FUN_0043a3f0(0x13,s_C__projects_meridian_Support_Obj_00720b28,0x8b8);
        return;
      }
      FUN_00422590();
      return;
    }
  }
  if (*(int *)(param_1 + 0x46d0) == 0) {
    *(undefined4 *)(param_1 + 0x7ac) = *(undefined4 *)(param_1 + 0x474);
    *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(*(int *)(param_1 + 0x450) + 4);
  }
  else {
    fVar5 = (float10)FUN_00426760();
    *(float *)(param_1 + 0x7ac) = (float)fVar5;
    *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(*(int *)(param_1 + 0x450) + 0x184);
  }
  iVar2 = *(int *)(param_1 + 0x560);
  if (*(int *)(iVar2 + 8) != -1) {
    FUN_00549470(iVar2 + 4);
    FUN_00549580(iVar2 + 4);
    iVar3 = FUN_0053cc70(s_STONE_ATTACK_00720cf4);
    if (*(int *)(iVar2 + 8) == iVar3) {
      if (*(int *)(param_1 + 0xa08) == 0) {
        uVar4 = FUN_00425fb0(0);
        *(undefined4 *)(param_1 + 0xa08) = uVar4;
      }
      if ((0 < *(int *)(param_1 + 0x534)) ||
         (fVar1 = (float)(*(int *)(param_1 + 0x52c) + -2),
         fVar1 < *(float *)(param_1 + 0x530) != (fVar1 == *(float *)(param_1 + 0x530)))) {
        if (*(int *)(param_1 + 0x46d0) != 0) {
          FUN_0043a3f0(0x11,s_C__projects_meridian_Support_Obj_00720b28,0x8da);
          return;
        }
        FUN_0043a3f0(1,s_C__projects_meridian_Support_Obj_00720b28,0x8de);
      }
    }
  }
  return;
}

