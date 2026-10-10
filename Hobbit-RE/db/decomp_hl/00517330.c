
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00517330(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  void *local_18 [2];
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d73b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006501d0(s_dlg_OptAudio__OnUpdate_007341c4);
  local_4 = 0;
  iVar4 = -1;
  *(float *)(param_1 + 0x1a0) = *(float *)(param_1 + 0x1a0) - DAT_006e92e8;
  uVar2 = FUN_004c8970();
  *(undefined4 *)(param_1 + 0x1ac) = uVar2;
  uVar2 = FUN_004c8970();
  *(undefined4 *)(param_1 + 0x1b0) = uVar2;
  uVar2 = FUN_004c8970();
  *(undefined4 *)(param_1 + 0x1b4) = uVar2;
  uVar2 = FUN_006a5900();
  *(undefined4 *)(param_1 + 0x1b8) = uVar2;
  uVar3 = FUN_006a3230();
  if ((uVar3 & 0x400) == 0) {
    local_18[0] = (void *)0xff969696;
    (**(code **)(**(int **)(param_1 + 0x184) + 0x24))(local_18);
  }
  else {
    local_18[0] = (void *)0xffffffff;
    (**(code **)(**(int **)(param_1 + 0x184) + 0x24))();
    iVar4 = 0;
  }
  uVar3 = FUN_006a3230();
  if ((uVar3 & 0x400) == 0) {
    (**(code **)(**(int **)(param_1 + 0x188) + 0x24))(&stack0xffffffe4);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x188) + 0x24))();
    iVar4 = 1;
  }
  uVar3 = FUN_006a3230();
  if ((uVar3 & 0x400) == 0) {
    (**(code **)(**(int **)(param_1 + 0x18c) + 0x24))(&stack0xffffffe0);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x18c) + 0x24))();
    iVar4 = 2;
  }
  uVar3 = FUN_006a3230();
  if ((uVar3 & 0x400) != 0) {
    iVar4 = 4;
  }
  uVar3 = FUN_006a3230();
  if ((uVar3 & 0x400) != 0) {
    iVar4 = 5;
  }
  if (*(int *)(param_1 + 0x19c) != iVar4) {
    if (iVar4 != -1) {
      FUN_00659600(s_CursorMove_00731fe0,1);
    }
    *(int *)(param_1 + 0x19c) = iVar4;
  }
  iVar4 = *(int *)(param_1 + 0x19c);
  if (iVar4 == 0) {
    iVar4 = FUN_004c8970();
    fVar1 = (float)iVar4;
  }
  else if (iVar4 == 1) {
    iVar4 = FUN_004c8970();
    fVar1 = (float)iVar4;
  }
  else {
    if (iVar4 != 2) goto LAB_0051754c;
    iVar4 = FUN_004c8970();
    fVar1 = (float)iVar4;
  }
  FUN_0065af80(fVar1 * _DAT_006e9360);
LAB_0051754c:
  local_10 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_18[0];
  return;
}

