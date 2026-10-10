
undefined4 __fastcall FUN_004c71a0(int param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint *extraout_ECX;
  uint *local_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d49a8;
  local_c = ExceptionList;
  local_28 = (uint *)s_rigid_instance__AnimDataAvailabl_0072d080;
  ExceptionList = &local_c;
  FUN_00649600();
  local_4 = 0;
  if (*(int *)(param_1 + 0x140) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x140) + 0x88) == 0) {
      puVar1 = (uint *)(param_1 + 0x13c);
      local_28 = puVar1;
      iVar4 = FUN_005495d0();
      if (iVar4 == 0) goto LAB_004c739e;
      *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x88) = 1;
      local_28 = extraout_ECX;
      FUN_00406bd0(0);
      uVar3 = *puVar1 * 2;
      local_28 = (uint *)(((uint)local_28 ^ (uVar3 ^ *puVar1) & 0x7fffffff ^ uVar3) & 0x7fffffff ^
                         (uint)local_28);
      FUN_005492b0(&local_28,0);
      if ((int)*puVar1 < 0) {
        FUN_00549470(&local_28);
      }
      uVar5 = FUN_00549620(puVar1);
      FUN_00549670(&local_28,uVar5);
      FUN_0053b5f0();
      local_28 = (uint *)0x1;
      FUN_0053b700(0);
      iVar4 = *(int *)(param_1 + 0x140);
      *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x90);
      *(uint *)(iVar4 + 100) = (uint)(*(int *)(iVar4 + 0x90) == 0);
      *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x6c) =
           *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x94);
      *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x7c) =
           *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x8c);
      piVar2 = *(int **)(param_1 + 0x140);
      local_28 = (uint *)(piVar2 + 1);
      uVar3 = piVar2[1] * 2;
      if (((uVar3 ^ piVar2[1]) & 0x7fffffff ^ uVar3) == 0xffffffff) {
        iVar4 = *piVar2;
      }
      else {
        iVar4 = FUN_00549470();
      }
      if (iVar4 == 0) {
        iVar4 = -1;
      }
      else {
        local_28 = (uint *)0x1;
        iVar4 = FUN_0053cb40(s__coll_0072c884);
        if (iVar4 == -1) {
          iVar4 = 0;
        }
      }
      *(int *)(*(int *)(param_1 + 0x140) + 0x98) = iVar4;
      piVar2 = *(int **)(param_1 + 0x140);
      local_28 = (uint *)(piVar2 + 1);
      uVar3 = piVar2[1] * 2;
      if (((uVar3 ^ piVar2[1]) & 0x7fffffff ^ uVar3) == 0xffffffff) {
        iVar4 = *piVar2;
      }
      else {
        iVar4 = FUN_00549470();
      }
      *(int *)(*(int *)(param_1 + 0x140) + 0x9c) =
           (int)*(short *)(piVar2[2] * 0x50 + 0x26 + *(int *)(iVar4 + 0x58));
      *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) & 0xf7;
    }
    local_4 = 0xffffffff;
    local_28 = (uint *)0x4c7387;
    FUN_00649720();
    ExceptionList = local_c;
    return 1;
  }
LAB_004c739e:
  local_4 = 0xffffffff;
  local_28 = (uint *)0x4c73af;
  FUN_00649720();
  ExceptionList = local_c;
  return 0;
}

