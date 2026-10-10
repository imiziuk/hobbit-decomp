
void __fastcall FUN_004c8cd0(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x124) != 0) {
    FUN_0064ff40(*(int *)(param_1 + 0x124),s_C__projects_meridian_Support_Obj_0072d0f8,0x260);
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  *(undefined4 *)(param_1 + 0x120) = 2;
  iVar4 = thunk_FUN_0064ff70(0x58,s_C__projects_meridian_Support_Obj_0072d0f8,0x266);
  *(int *)(param_1 + 0x124) = iVar4;
  *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(param_1 + 0x1c);
  iVar4 = *(int *)(param_1 + 0x124);
  *(undefined4 *)(iVar4 + 0x20) = 0;
  *(undefined4 *)(iVar4 + 0x1c) = 0;
  *(undefined4 *)(iVar4 + 0x18) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x124) + 0x24) = 0;
  fVar1 = *(float *)(param_1 + 0xcc);
  iVar4 = *(int *)(param_1 + 0x124);
  fVar2 = *(float *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar4 + 0x38) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar4 + 0x40) = uVar3;
  *(float *)(iVar4 + 0x3c) = -fVar1 + fVar2;
  iVar4 = *(int *)(param_1 + 0x124);
  *(undefined4 *)(iVar4 + 0x4c) = 0;
  *(undefined4 *)(iVar4 + 0x48) = 0;
  *(undefined4 *)(iVar4 + 0x44) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x124) + 0x50) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0xc0) = 1;
  return;
}

