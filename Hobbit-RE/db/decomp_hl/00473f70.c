
int __fastcall FUN_00473f70(int param_1)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int local_18;
  int *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d164b;
  local_c = ExceptionList;
  local_18 = *(int *)(param_1 + 8);
  if (local_18 + 1 <= *(int *)(param_1 + 0x10)) goto LAB_004740f5;
  iVar2 = *(int *)(param_1 + 0x18);
  iVar5 = 0;
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x10) / 2;
    iVar4 = 1;
    if (0 < iVar2) {
      iVar4 = iVar2;
    }
    if (0 < local_18 + iVar4) {
      if (iVar2 < 1) {
        iVar2 = 1;
      }
      goto LAB_00473fe4;
    }
    local_18 = 1;
  }
  else {
LAB_00473fe4:
    local_18 = local_18 + iVar2;
  }
  ExceptionList = &local_c;
  piVar3 = (int *)operator_new(local_18 * 0x40 + 4);
  local_4 = 0;
  if (piVar3 == (int *)0x0) {
    local_14 = (int *)0x0;
  }
  else {
    local_14 = piVar3 + 1;
    *piVar3 = local_18;
    FUN_006c043b(local_14,0x40,local_18,FUN_00474270,thunk_FUN_00649ba0);
  }
  local_4 = 0xffffffff;
  if (0 < *(int *)(param_1 + 8)) {
    puVar6 = (ushort *)((int)local_14 + 0x3a);
    do {
      iVar2 = (int)puVar6 + *(int *)(param_1 + 0xc) + (-0x3a - (int)local_14);
      FUN_0064a320(iVar2);
      *(undefined4 *)(puVar6 + -7) = *(undefined4 *)(iVar2 + 0x2c);
      *(undefined4 *)(puVar6 + -5) = *(undefined4 *)(iVar2 + 0x30);
      *(undefined4 *)(puVar6 + -3) = *(undefined4 *)(iVar2 + 0x34);
      puVar6[-1] = *(ushort *)(iVar2 + 0x38);
      uVar1 = (byte)((byte)((int)(uint)(ushort)(*(short *)(iVar2 + 0x3a) << 0xf) >> 0xf) ^
                    (byte)*puVar6) & 1 ^ *puVar6;
      *puVar6 = uVar1;
      *puVar6 = (byte)((byte)((int)(uint)(ushort)(*(short *)(iVar2 + 0x3a) << 0xe) >> 0xe) ^
                      (byte)uVar1) & 2 ^ uVar1;
      *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(iVar2 + 0x3c);
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 0x20;
    } while (iVar5 < *(int *)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    FUN_006c026a(iVar2,0x40,*(undefined4 *)(iVar2 + -4),thunk_FUN_00649ba0);
    FUN_006bf840(iVar2 + -4);
  }
  *(int *)(param_1 + 0x10) = local_18;
  *(int **)(param_1 + 0xc) = local_14;
LAB_004740f5:
  iVar2 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar2;
  ExceptionList = local_c;
  return iVar2 * 0x40 + -0x40 + *(int *)(param_1 + 0xc);
}

