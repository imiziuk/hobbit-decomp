
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0050a080(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d6cf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_dlg_credits__OnUpdate_007328e8);
  iVar1 = *(int *)(param_1 + 0x164);
  local_4 = 0;
  if (iVar1 == 0) {
    fVar3 = (float10)FUN_0050a2e0();
    fVar2 = (float10)_DAT_006ee9c4;
    *(float *)(param_1 + 0x160) = (float)(fVar3 * fVar2);
    if (fVar3 * fVar2 <= (float10)_DAT_006ee9c4) goto LAB_0050a20b;
    *(undefined4 *)(param_1 + 0x160) = 0x43000000;
    uVar5 = 0;
    goto LAB_0050a202;
  }
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      fVar2 = (float10)FUN_0050a2e0();
      fVar2 = (float10)_DAT_006ee9c4 - fVar2 * (float10)_DAT_006ee9c4;
      *(float *)(param_1 + 0x160) = (float)fVar2;
      if (fVar2 < (float10)DAT_006e92e4 != (NAN(fVar2) || NAN((float10)DAT_006e92e4))) {
        *(undefined4 *)(param_1 + 0x160) = 0;
        FUN_0050a280(3,0);
        DAT_00760360 = 1;
      }
    }
    goto LAB_0050a20b;
  }
  iVar1 = FUN_00670ef0(0xd6,0);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x168) = 0;
    FUN_0050a280(1,0);
  }
  iVar1 = *(int *)(param_1 + 0x16c);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x188) == 0) {
      fVar3 = (float10)FUN_0050a2e0();
      fVar2 = (float10)_DAT_006e95dc;
      *(float *)(param_1 + 0x168) = (float)(fVar3 * fVar2);
      if (fVar3 * fVar2 < (float10)_DAT_006e95dc) goto LAB_0050a20b;
      *(undefined4 *)(param_1 + 0x168) = 0x437f0000;
      uVar5 = 1;
      goto LAB_0050a202;
    }
    uVar5 = 0;
    uVar4 = 2;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        fVar2 = (float10)FUN_0050a2e0();
        fVar2 = (float10)_DAT_006e95dc - fVar2 * (float10)_DAT_006e95dc;
        *(float *)(param_1 + 0x168) = (float)fVar2;
        if (fVar2 < (float10)DAT_006e92e4 != (fVar2 == (float10)DAT_006e92e4)) {
          FUN_0050a280(1,0);
          *(undefined4 *)(param_1 + 0x168) = 0;
        }
      }
      goto LAB_0050a20b;
    }
    fVar2 = (float10)FUN_0050a2e0();
    if (fVar2 < (float10)_DAT_006efe48) goto LAB_0050a20b;
    uVar5 = 2;
LAB_0050a202:
    uVar4 = 1;
  }
  FUN_0050a280(uVar4,uVar5);
LAB_0050a20b:
  iVar1 = FUN_00670ef0(0xb9,0);
  if (iVar1 != 0) {
    FUN_00659600(s_OptionSelect_00723150,1);
    FUN_0050a280(3,0);
  }
  if (*(int *)(param_1 + 0x164) == 3) {
    FUN_0052a630(1);
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

